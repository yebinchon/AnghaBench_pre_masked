
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int prog_fd; int name; } ;
union bpf_attr {TYPE_1__ raw_tracepoint; } ;
typedef int tp_name ;
struct bpf_raw_tracepoint {struct bpf_raw_event_map* btp; struct bpf_prog* prog; } ;
struct bpf_raw_event_map {int dummy; } ;
struct bpf_prog {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct bpf_prog*) ;
 int VAR_7 ;
 int FUNC_1 (struct bpf_prog*) ;
 int FUNC_2 (char*,int *,struct bpf_raw_tracepoint*,int ) ;
 struct bpf_raw_event_map* FUNC_3 (char*) ;
 int FUNC_4 (struct bpf_raw_event_map*,struct bpf_prog*) ;
 int FUNC_5 (struct bpf_raw_event_map*,struct bpf_prog*) ;
 struct bpf_prog* FUNC_6 (int ) ;
 int FUNC_7 (struct bpf_prog*) ;
 int FUNC_8 (struct bpf_raw_event_map*) ;
 int VAR_8 ;
 int FUNC_9 (struct bpf_raw_tracepoint*) ;
 struct bpf_raw_tracepoint* FUNC_10 (int,int ) ;
 scalar_t__ FUNC_11 (char*,int ,int) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(const union bpf_attr *VAR_9)
{
 struct bpf_raw_tracepoint *VAR_10;
 struct bpf_raw_event_map *VAR_11;
 struct bpf_prog *VAR_12;
 char VAR_13[128];
 int VAR_14, VAR_15;

 if (FUNC_11(VAR_13, FUNC_12(VAR_9->raw_tracepoint.name),
         sizeof(VAR_13) - 1) < 0)
  return -VAR_2;
 VAR_13[sizeof(VAR_13) - 1] = 0;

 VAR_11 = FUNC_3(VAR_13);
 if (!VAR_11)
  return -VAR_4;

 VAR_10 = FUNC_10(sizeof(*VAR_10), VAR_6);
 if (!VAR_10) {
  VAR_15 = -VAR_5;
  goto out_put_btp;
 }
 VAR_10->btp = VAR_11;

 VAR_12 = FUNC_6(VAR_9->raw_tracepoint.prog_fd);
 if (FUNC_0(VAR_12)) {
  VAR_15 = FUNC_1(VAR_12);
  goto out_free_tp;
 }
 if (VAR_12->type != VAR_0 &&
     VAR_12->type != VAR_1) {
  VAR_15 = -VAR_3;
  goto out_put_prog;
 }

 VAR_15 = FUNC_4(VAR_10->btp, VAR_12);
 if (VAR_15)
  goto out_put_prog;

 VAR_10->prog = VAR_12;
 VAR_14 = FUNC_2("bpf-raw-tracepoint", &VAR_8, VAR_10,
     VAR_7);
 if (VAR_14 < 0) {
  FUNC_5(VAR_10->btp, VAR_12);
  VAR_15 = VAR_14;
  goto out_put_prog;
 }
 return VAR_14;

out_put_prog:
 FUNC_7(VAR_12);
out_free_tp:
 FUNC_9(VAR_10);
out_put_btp:
 FUNC_8(VAR_11);
 return VAR_15;
}

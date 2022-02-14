
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {scalar_t__ driver_type; struct ir_raw_event_ctrl* raw; } ;
struct ir_raw_event_ctrl {int progs; } ;
struct bpf_prog_array {int dummy; } ;
struct bpf_prog {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct bpf_prog_array*,int *,struct bpf_prog*,struct bpf_prog_array**) ;
 int FUNC_1 (struct bpf_prog_array*) ;
 scalar_t__ FUNC_2 (struct bpf_prog_array*) ;
 int VAR_5 ;
 struct bpf_prog_array* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,struct bpf_prog_array*) ;

__attribute__((used)) static int FUNC_7(struct rc_dev *VAR_6, struct bpf_prog *VAR_7)
{
 struct bpf_prog_array *VAR_8;
 struct bpf_prog_array *VAR_9;
 struct ir_raw_event_ctrl *VAR_10;
 int VAR_11;

 if (VAR_6->driver_type != VAR_4)
  return -VAR_2;

 VAR_11 = FUNC_4(&VAR_5);
 if (VAR_11)
  return VAR_11;

 VAR_10 = VAR_6->raw;
 if (!VAR_10) {
  VAR_11 = -VAR_3;
  goto unlock;
 }

 VAR_8 = FUNC_3(VAR_10->progs);
 if (VAR_8 && FUNC_2(VAR_8) >= VAR_0) {
  VAR_11 = -VAR_1;
  goto unlock;
 }

 VAR_11 = FUNC_0(VAR_8, ((void*)0), VAR_7, &VAR_9);
 if (VAR_11 < 0)
  goto unlock;

 FUNC_6(VAR_10->progs, VAR_9);
 FUNC_1(VAR_8);

unlock:
 FUNC_5(&VAR_5);
 return VAR_11;
}

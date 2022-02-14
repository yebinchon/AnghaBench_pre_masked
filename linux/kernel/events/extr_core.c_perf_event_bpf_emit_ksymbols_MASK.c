
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct bpf_prog {int jited_len; scalar_t__ bpf_func; TYPE_1__* aux; } ;
typedef enum perf_bpf_event_type { ____Placeholder_perf_bpf_event_type } perf_bpf_event_type ;
struct TYPE_2__ {int func_cnt; struct bpf_prog** func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bpf_prog*,char*) ;
 int FUNC_1 (int ,int ,int ,int,char*) ;

__attribute__((used)) static void FUNC_2(struct bpf_prog *VAR_3,
      enum perf_bpf_event_type VAR_4)
{
 bool VAR_5 = VAR_4 == VAR_1;
 char VAR_6[VAR_0];
 int VAR_7;

 if (VAR_3->aux->func_cnt == 0) {
  FUNC_0(VAR_3, VAR_6);
  FUNC_1(VAR_2,
       (u64)(unsigned long)VAR_3->bpf_func,
       VAR_3->jited_len, VAR_5, VAR_6);
 } else {
  for (VAR_7 = 0; VAR_7 < VAR_3->aux->func_cnt; VAR_7++) {
   struct bpf_prog *VAR_8 = VAR_3->aux->func[VAR_7];

   FUNC_0(VAR_8, VAR_6);
   FUNC_1(
    VAR_2,
    (u64)(unsigned long)VAR_8->bpf_func,
    VAR_8->jited_len, VAR_5, VAR_6);
  }
 }
}

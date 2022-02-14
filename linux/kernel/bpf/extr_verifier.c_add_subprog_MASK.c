
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bpf_verifier_env {scalar_t__ subprog_cnt; TYPE_2__* subprog_info; TYPE_1__* prog; } ;
struct TYPE_4__ {int start; } ;
struct TYPE_3__ {int len; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bpf_verifier_env*,int) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,int,int ,int *) ;
 int FUNC_2 (struct bpf_verifier_env*,char*) ;

__attribute__((used)) static int FUNC_3(struct bpf_verifier_env *VAR_4, int VAR_5)
{
 int VAR_6 = VAR_4->prog->len;
 int VAR_7;

 if (VAR_5 >= VAR_6 || VAR_5 < 0) {
  FUNC_2(VAR_4, "call to invalid destination\n");
  return -VAR_2;
 }
 VAR_7 = FUNC_0(VAR_4, VAR_5);
 if (VAR_7 >= 0)
  return 0;
 if (VAR_4->subprog_cnt >= VAR_0) {
  FUNC_2(VAR_4, "too many subprograms\n");
  return -VAR_1;
 }
 VAR_4->subprog_info[VAR_4->subprog_cnt++].start = VAR_5;
 FUNC_1(VAR_4->subprog_info, VAR_4->subprog_cnt,
      sizeof(VAR_4->subprog_info[0]), VAR_3, ((void*)0));
 return 0;
}

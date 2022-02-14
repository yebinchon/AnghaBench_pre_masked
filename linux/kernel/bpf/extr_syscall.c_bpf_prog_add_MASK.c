
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_prog {TYPE_1__* aux; } ;
struct TYPE_2__ {int refcnt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct bpf_prog* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,int *) ;
 int FUNC_2 (int,int *) ;

struct bpf_prog *FUNC_3(struct bpf_prog *VAR_2, int VAR_3)
{
 if (FUNC_1(VAR_3, &VAR_2->aux->refcnt) > VAR_0) {
  FUNC_2(VAR_3, &VAR_2->aux->refcnt);
  return FUNC_0(-VAR_1);
 }
 return VAR_2;
}

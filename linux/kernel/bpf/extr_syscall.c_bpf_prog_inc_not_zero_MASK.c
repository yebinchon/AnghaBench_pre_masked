
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_prog {TYPE_1__* aux; } ;
struct TYPE_2__ {int refcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bpf_prog* FUNC_0 (int ) ;
 int FUNC_1 (struct bpf_prog*,int) ;
 int FUNC_2 (int *,int,int ) ;

struct bpf_prog *FUNC_3(struct bpf_prog *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(&VAR_3->aux->refcnt, 1, 0);

 if (VAR_4 >= VAR_0) {
  FUNC_1(VAR_3, 0);
  return FUNC_0(-VAR_1);
 }

 if (!VAR_4)
  return FUNC_0(-VAR_2);

 return VAR_3;
}

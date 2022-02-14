
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_map {int usercnt; int refcnt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct bpf_map* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

struct bpf_map *FUNC_4(struct bpf_map *VAR_2, bool VAR_3)
{
 if (FUNC_3(&VAR_2->refcnt) > VAR_0) {
  FUNC_1(&VAR_2->refcnt);
  return FUNC_0(-VAR_1);
 }
 if (VAR_3)
  FUNC_2(&VAR_2->usercnt);
 return VAR_2;
}

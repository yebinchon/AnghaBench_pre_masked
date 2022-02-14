
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_map {int usercnt; int refcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bpf_map* FUNC_0 (int ) ;
 int FUNC_1 (struct bpf_map*,int) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct bpf_map *FUNC_4(struct bpf_map *VAR_3,
           bool VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(&VAR_3->refcnt, 1, 0);

 if (VAR_5 >= VAR_0) {
  FUNC_1(VAR_3, 0);
  return FUNC_0(-VAR_1);
 }

 if (!VAR_5)
  return FUNC_0(-VAR_2);

 if (VAR_4)
  FUNC_3(&VAR_3->usercnt);

 return VAR_3;
}

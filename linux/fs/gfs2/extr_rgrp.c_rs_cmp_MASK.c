
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct gfs2_blkreserv {int rs_free; int rs_rbm; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline int FUNC_1(u64 VAR_0, u32 VAR_1, struct gfs2_blkreserv *VAR_2)
{
 u64 VAR_3 = FUNC_0(&VAR_2->rs_rbm);

 if (VAR_0 >= VAR_3 + VAR_2->rs_free)
  return 1;
 if (VAR_0 + VAR_1 - 1 < VAR_3)
  return -1;
 return 0;
}

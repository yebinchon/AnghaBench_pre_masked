
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ice_pf {int num_alloc_vfs; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static int
FUNC_1(struct ice_pf *VAR_0, u16 VAR_1, u16 VAR_2, u16 VAR_3)
{
 bool VAR_4 = 0;
 int VAR_5;
 VAR_5 = VAR_2;
 while ((VAR_5 >= VAR_3) && !VAR_4) {
  int VAR_6;

  VAR_6 = VAR_0->num_alloc_vfs * VAR_5;
  if (VAR_6 <= VAR_1)
   return VAR_5;

  if (VAR_5 == VAR_3)
   VAR_4 = 1;

  VAR_5 = FUNC_0(VAR_5, 2);
 }
 return 0;
}

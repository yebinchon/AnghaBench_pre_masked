
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ab8500_fg {scalar_t__ vbat_nom; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(struct ab8500_fg *VAR_0, int VAR_1)
{
 u64 VAR_2;
 u32 VAR_3;

 VAR_2 = ((u64) VAR_1) * ((u64) VAR_0->vbat_nom);
 VAR_3 = FUNC_0(VAR_2, 1000);


 if (VAR_3 >= 1000 / 2)
  VAR_2++;

 return (int) VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct orc_host {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static u8 FUNC_2(struct orc_host * VAR_2, u8 * VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 10; VAR_4++) {
  if ((*VAR_3 = FUNC_0(VAR_2->base + VAR_1)) & VAR_0)
   return 1;
  FUNC_1(100);
 }
 return 0;
}

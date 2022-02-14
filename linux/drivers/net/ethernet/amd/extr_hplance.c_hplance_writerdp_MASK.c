
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lance_private {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,unsigned short) ;

__attribute__((used)) static void FUNC_2(void *VAR_4, unsigned short VAR_5)
{
 struct lance_private *VAR_6 = (struct lance_private *)VAR_4;
 do {
  FUNC_1(VAR_6->base + VAR_0 + VAR_2, VAR_5);
 } while ((FUNC_0(VAR_6->base + VAR_1) & VAR_3) == 0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct adapter {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct adapter*,int ) ;
 int FUNC_2 (struct adapter*,int ,unsigned int) ;

void FUNC_3(struct adapter *VAR_3, u16 VAR_4[VAR_1][VAR_0])
{
 unsigned int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5)
  for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6) {
   FUNC_2(VAR_3, VAR_2,
         FUNC_0(0xffff) | (VAR_5 << 5) | VAR_6);
   VAR_4[VAR_5][VAR_6] = (u16)FUNC_1(VAR_3,
      VAR_2) & 0x1fff;
  }
}

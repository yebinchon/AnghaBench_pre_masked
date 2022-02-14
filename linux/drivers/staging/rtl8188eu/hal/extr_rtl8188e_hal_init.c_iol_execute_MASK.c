
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct adapter {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct adapter*,int ) ;
 int FUNC_3 (struct adapter*,int ,int) ;

s32 FUNC_4(struct adapter *VAR_4, u8 VAR_5)
{
 s32 VAR_6 = VAR_1;
 u8 VAR_7 = 0;
 unsigned long VAR_8 = 0;

 VAR_5 = VAR_5&0x0f;
 VAR_7 = FUNC_2(VAR_4, VAR_0);
 FUNC_3(VAR_4, VAR_0, VAR_7|VAR_5);

 VAR_8 = VAR_3;
 while ((VAR_7 = FUNC_2(VAR_4, VAR_0)) & VAR_5 &&
        FUNC_0(VAR_3 - VAR_8) < 1000) {
  FUNC_1(5);
 }

 VAR_7 = FUNC_2(VAR_4, VAR_0);
 VAR_6 = (VAR_7 & VAR_5) ? VAR_1 : VAR_2;
 if (VAR_7 & VAR_5<<4)
  VAR_6 = VAR_1;
 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct adapter*,int ) ;

u8 FUNC_2(struct adapter *VAR_2)
{
 u8 VAR_3 = 0;
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_1);

 VAR_3 = (VAR_4 & VAR_0) ? 6 : 4;

 FUNC_0("EEPROM type is %s\n", VAR_3 == 4 ? "E-FUSE" : "93C46");

 return VAR_3;
}

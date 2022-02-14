
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct adapter {TYPE_1__* HalData; } ;
struct TYPE_2__ {int CrystalCap; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*,int ,int,int) ;
 int FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct adapter*,int ) ;
 int FUNC_5 (struct adapter*,int ,int ) ;
 int FUNC_6 (struct adapter*,int ,int) ;

bool FUNC_7(struct adapter *VAR_10)
{
 bool VAR_11;
 u32 VAR_12;
 u8 VAR_13;

 FUNC_3(VAR_10);


 VAR_12 = FUNC_4(VAR_10, VAR_6);
 FUNC_5(VAR_10, VAR_6,
      (u16)(VAR_12 | FUNC_0(13) | FUNC_0(0) | FUNC_0(1)));

 FUNC_6(VAR_10, VAR_5, VAR_7 | VAR_8 | VAR_9);

 FUNC_6(VAR_10, VAR_6, VAR_2 |
     VAR_3 | VAR_1 | VAR_0);


 VAR_11 = FUNC_1(VAR_10);


 VAR_13 = VAR_10->HalData->CrystalCap & 0x3F;
 FUNC_2(VAR_10, VAR_4, 0x7ff800,
         (VAR_13 | (VAR_13 << 6)));

 return VAR_11;
}

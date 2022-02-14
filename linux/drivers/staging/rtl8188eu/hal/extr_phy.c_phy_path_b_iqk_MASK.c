
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct odm_dm_struct {int dummy; } ;
struct adapter {TYPE_1__* HalData; } ;
struct TYPE_2__ {struct odm_dm_struct odmpriv; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct odm_dm_struct*,int ,int ,char*) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct adapter*,int ,int ) ;
 int FUNC_4 (struct adapter*,int ,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static u8 FUNC_5(struct adapter *VAR_10)
{
 u32 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 u8 VAR_16 = 0x00;
 struct odm_dm_struct *VAR_17 = &VAR_10->HalData->odmpriv;


 FUNC_4(VAR_10, VAR_4, VAR_3, 0x00000002);
 FUNC_4(VAR_10, VAR_4, VAR_3, 0x00000000);

 FUNC_2(VAR_0);

 VAR_11 = FUNC_3(VAR_10, VAR_5, VAR_3);
 VAR_12 = FUNC_3(VAR_10, VAR_9, VAR_3);
 VAR_13 = FUNC_3(VAR_10, VAR_8, VAR_3);
 VAR_14 = FUNC_3(VAR_10, VAR_7, VAR_3);
 VAR_15 = FUNC_3(VAR_10, VAR_6, VAR_3);

 if (!(VAR_11 & FUNC_0(31)) &&
     (((VAR_12 & 0x03FF0000)>>16) != 0x142) &&
     (((VAR_13 & 0x03FF0000)>>16) != 0x42))
  VAR_16 |= 0x01;
 else
  return VAR_16;

 if (!(VAR_11 & FUNC_0(30)) &&
     (((VAR_14 & 0x03FF0000)>>16) != 0x132) &&
     (((VAR_15 & 0x03FF0000)>>16) != 0x36))
  VAR_16 |= 0x02;
 else
  FUNC_1(VAR_17, VAR_1,
        VAR_2, ("Path B Rx IQK fail!!\n"));
 return VAR_16;
}

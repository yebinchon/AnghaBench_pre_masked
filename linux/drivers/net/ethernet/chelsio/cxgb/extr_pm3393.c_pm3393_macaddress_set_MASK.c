
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct cmac {TYPE_1__* instance; } ;
struct TYPE_2__ {int enabled; int mac_addr; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,scalar_t__*,int ) ;
 int FUNC_1 (struct cmac*,int) ;
 int FUNC_2 (struct cmac*,int) ;
 int FUNC_3 (struct cmac*,int ,int*) ;
 int FUNC_4 (struct cmac*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct cmac *VAR_13, u8 VAR_14[6])
{
 u32 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19 = VAR_13->instance->enabled;
 FUNC_0(VAR_13->instance->mac_addr, VAR_14, VAR_0);

 VAR_16 = ((u32) VAR_14[1] << 8) | (u32) VAR_14[0];
 VAR_17 = ((u32) VAR_14[3] << 8) | (u32) VAR_14[2];
 VAR_18 = ((u32) VAR_14[5] << 8) | (u32) VAR_14[4];


 if (VAR_19)
  FUNC_1(VAR_13, VAR_1 | VAR_2);


 FUNC_4(VAR_13, VAR_7, VAR_16);
 FUNC_4(VAR_13, VAR_8, VAR_17);
 FUNC_4(VAR_13, VAR_9, VAR_18);


 FUNC_4(VAR_13, VAR_10, VAR_16);
 FUNC_4(VAR_13, VAR_11, VAR_17);
 FUNC_4(VAR_13, VAR_12, VAR_18);





 FUNC_3(VAR_13, VAR_3, &VAR_15);
 VAR_15 &= 0xff0f;
 FUNC_4(VAR_13, VAR_3, VAR_15);

 FUNC_4(VAR_13, VAR_5, VAR_16);
 FUNC_4(VAR_13, VAR_6, VAR_17);
 FUNC_4(VAR_13, VAR_4, VAR_18);

 VAR_15 |= 0x0090;
 FUNC_4(VAR_13, VAR_3, VAR_15);

 if (VAR_19)
  FUNC_2(VAR_13, VAR_19);
 return 0;
}

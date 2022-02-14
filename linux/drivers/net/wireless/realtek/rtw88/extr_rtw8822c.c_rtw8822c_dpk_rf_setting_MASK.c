
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {scalar_t__ dpk_band; scalar_t__ dpk_bw; } ;
struct TYPE_4__ {TYPE_1__ dpk_info; } ;
struct rtw_dev {TYPE_2__ dm_info; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_1 (struct rtw_dev*,int ,int ,int ) ;
 int FUNC_2 (struct rtw_dev*,int ,int ,int ,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static u32 FUNC_4(struct rtw_dev *VAR_24, u8 VAR_25)
{
 u32 VAR_26;

 FUNC_2(VAR_24, VAR_25, VAR_17, VAR_13, 0x50017);
 VAR_26 = FUNC_1(VAR_24, VAR_25, VAR_21, VAR_13);

 FUNC_2(VAR_24, VAR_25, VAR_15, VAR_4, 0x1);
 FUNC_2(VAR_24, VAR_25, VAR_15, VAR_2, 0x1);
 FUNC_2(VAR_24, VAR_25, VAR_22, VAR_11, 0x0);
 FUNC_2(VAR_24, VAR_25, VAR_21, VAR_13, VAR_26);

 if (VAR_24->dm_info.dpk_info.dpk_band == VAR_23) {
  FUNC_2(VAR_24, VAR_25, VAR_22, VAR_5, 0x1);
  FUNC_2(VAR_24, VAR_25, VAR_19, VAR_9, 0x0);
 } else {
  FUNC_2(VAR_24, VAR_25, VAR_20, VAR_10, 0x0);
  FUNC_2(VAR_24, VAR_25, VAR_20, VAR_5, 0x6);
  FUNC_2(VAR_24, VAR_25, VAR_20, VAR_6, 0x1);
  FUNC_2(VAR_24, VAR_25, VAR_18, VAR_8, 0);
 }

 FUNC_2(VAR_24, VAR_25, VAR_17, VAR_7, 0xf);
 FUNC_2(VAR_24, VAR_25, VAR_15, VAR_3, 0x1);
 FUNC_2(VAR_24, VAR_25, VAR_14, VAR_0, 0x0);

 if (VAR_24->dm_info.dpk_info.dpk_bw == VAR_12)
  FUNC_2(VAR_24, VAR_25, VAR_14, VAR_1, 0x2);
 else
  FUNC_2(VAR_24, VAR_25, VAR_14, VAR_1, 0x1);

 FUNC_2(VAR_24, VAR_25, VAR_16, FUNC_0(1), 0x1);

 FUNC_3(100, 110);

 return VAR_26 & 0x1f;
}

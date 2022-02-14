
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct mt76x02_fw_header {int fw_ver; int build_ver; } ;
struct TYPE_5__ {TYPE_3__* hw; } ;
struct mt76x02_dev {TYPE_2__ mt76; } ;
struct TYPE_6__ {TYPE_1__* wiphy; } ;
struct TYPE_4__ {int fw_version; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,char*,int,int,int,int) ;

void FUNC_2(struct mt76x02_dev *VAR_0,
          const struct mt76x02_fw_header *VAR_1)
{
 u16 VAR_2 = FUNC_0(VAR_1->build_ver);
 u16 VAR_3 = FUNC_0(VAR_1->fw_ver);

 FUNC_1(VAR_0->mt76.hw->wiphy->fw_version,
   sizeof(VAR_0->mt76.hw->wiphy->fw_version),
   "%d.%d.%02d-b%x",
   (VAR_3 >> 12) & 0xf, (VAR_3 >> 8) & 0xf, VAR_3 & 0xf, VAR_2);
}

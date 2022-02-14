
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct solo_p2m_dev {int completion; int mutex; } ;
struct solo_dev {int sdram_size; int sys_config; TYPE_1__* pdev; struct solo_p2m_dev* p2m_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ) ;
 int VAR_7 ;
 int FUNC_7 (struct solo_dev*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int *,char*,...) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct solo_dev*,int ) ;
 int FUNC_12 (struct solo_dev*,int,int) ;
 int FUNC_13 (struct solo_dev*,int ,int) ;

int FUNC_14(struct solo_dev *VAR_10)
{
 struct solo_p2m_dev *VAR_11;
 int VAR_12;

 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
  VAR_11 = &VAR_10->p2m_dev[VAR_12];

  FUNC_10(&VAR_11->mutex);
  FUNC_9(&VAR_11->completion);

  FUNC_13(VAR_10, FUNC_5(VAR_12), 0);
  FUNC_13(VAR_10, FUNC_4(VAR_12),
          VAR_5 |
          VAR_6 |
          FUNC_6(0) |
          VAR_7);
  FUNC_11(VAR_10, FUNC_3(VAR_12));
 }


 for (VAR_10->sdram_size = 0, VAR_12 = 2; VAR_12 >= 0; VAR_12--) {
  FUNC_13(VAR_10, VAR_1,
          FUNC_1(1) |
          FUNC_2(VAR_12) |
          VAR_3 |
          VAR_2 |
          FUNC_0(1));

  FUNC_13(VAR_10, VAR_8, VAR_10->sys_config |
          VAR_9);
  FUNC_13(VAR_10, VAR_8, VAR_10->sys_config);

  switch (VAR_12) {
  case 2:
   if (FUNC_12(VAR_10, 0x07ff0000, 0x00010000) ||
       FUNC_12(VAR_10, 0x05ff0000, 0x00010000))
    continue;
   break;

  case 1:
   if (FUNC_12(VAR_10, 0x03ff0000, 0x00010000))
    continue;
   break;

  default:
   if (FUNC_12(VAR_10, 0x01ff0000, 0x00010000))
    continue;
  }

  VAR_10->sdram_size = (32 << 20) << VAR_12;
  break;
 }

 if (!VAR_10->sdram_size) {
  FUNC_8(&VAR_10->pdev->dev, "Error detecting SDRAM size\n");
  return -VAR_0;
 }

 if (FUNC_7(VAR_10) > VAR_10->sdram_size) {
  FUNC_8(&VAR_10->pdev->dev,
   "SDRAM is not large enough (%u < %u)\n",
   VAR_10->sdram_size, FUNC_7(VAR_10));
  return -VAR_0;
 }

 return 0;
}

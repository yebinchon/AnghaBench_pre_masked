
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct vub300_mmc_host {TYPE_1__* udev; } ;
struct mmc_ios {int clock; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int,int) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int,int,int,int*,int,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_4(struct vub300_mmc_host *VAR_5, u8 VAR_6[8],
         struct mmc_ios *VAR_7)
{
 int VAR_8 = 8;
 int VAR_9;
 u32 VAR_10;
 if (VAR_7->clock >= 48000000)
  VAR_10 = 48000;
 else if (VAR_7->clock >= 24000000)
  VAR_10 = 24000;
 else if (VAR_7->clock >= 20000000)
  VAR_10 = 20000;
 else if (VAR_7->clock >= 15000000)
  VAR_10 = 15000;
 else if (VAR_7->clock >= 200000)
  VAR_10 = 200;
 else
  VAR_10 = 0;
 {
  int VAR_11;
  u64 VAR_12 = VAR_10;
  for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
   VAR_6[VAR_11] = VAR_12;
   VAR_12 >>= 8;
  }
 }
 VAR_9 =
  FUNC_2(VAR_5->udev, FUNC_3(VAR_5->udev, 0),
    VAR_1,
    VAR_2 | VAR_4 | VAR_3,
    0x00, 0x00, VAR_6, VAR_8, VAR_0);
 if (VAR_9 != 8) {
  FUNC_1(&VAR_5->udev->dev, "SET_CLOCK_SPEED"
   " %dkHz failed with retval=%d\n", VAR_10, VAR_9);
 } else {
  FUNC_0(&VAR_5->udev->dev, "SET_CLOCK_SPEED"
   " %dkHz\n", VAR_10);
 }
}

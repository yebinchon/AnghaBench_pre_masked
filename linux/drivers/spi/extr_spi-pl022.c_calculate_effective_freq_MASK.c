
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct ssp_clock_params {int cpsdvsr; int scr; } ;
struct pl022 {TYPE_1__* adev; int clk; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int,int) ;
 int FUNC_3 (int *,char*,int,int) ;
 int FUNC_4 (int *,char*,int,int) ;
 int FUNC_5 (int,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct pl022 *VAR_5, int VAR_6, struct
        ssp_clock_params * VAR_7)
{

 u16 VAR_8 = VAR_1, VAR_9 = VAR_4;
 u32 VAR_10, VAR_11, VAR_12, VAR_13 = 0, VAR_14 = 0,
  VAR_15 = 0, VAR_16, VAR_17 = 0;

 VAR_10 = FUNC_1(VAR_5->clk);

 VAR_11 = FUNC_5(VAR_10, VAR_1, VAR_4);

 VAR_12 = FUNC_5(VAR_10, VAR_0, VAR_3);

 if (VAR_6 > VAR_11)
  FUNC_4(&VAR_5->adev->dev,
   "Max speed that can be programmed is %d Hz, you requested %d\n",
   VAR_11, VAR_6);

 if (VAR_6 < VAR_12) {
  FUNC_3(&VAR_5->adev->dev,
   "Requested frequency: %d Hz is less than minimum possible %d Hz\n",
   VAR_6, VAR_12);
  return -VAR_2;
 }





 while ((VAR_8 <= VAR_0) && !VAR_17) {
  while (VAR_9 <= VAR_3) {
   VAR_16 = FUNC_5(VAR_10, VAR_8, VAR_9);

   if (VAR_16 > VAR_6) {

    VAR_9++;
    continue;
   }





   if (VAR_16 > VAR_13) {
    VAR_13 = VAR_16;
    VAR_14 = VAR_8;
    VAR_15 = VAR_9;

    if (VAR_16 == VAR_6)
     VAR_17 = 1;
   }




   break;
  }
  VAR_8 += 2;
  VAR_9 = VAR_4;
 }

 FUNC_0(!VAR_13, "pl022: Matching cpsdvsr and scr not found for %d Hz rate \n",
   VAR_6);

 VAR_7->cpsdvsr = (u8) (VAR_14 & 0xFF);
 VAR_7->scr = (u8) (VAR_15 & 0xFF);
 FUNC_2(&VAR_5->adev->dev,
  "SSP Target Frequency is: %u, Effective Frequency is %u\n",
  VAR_6, VAR_13);
 FUNC_2(&VAR_5->adev->dev, "SSP cpsdvsr = %d, scr = %d\n",
  VAR_7->cpsdvsr, VAR_7->scr);

 return 0;
}

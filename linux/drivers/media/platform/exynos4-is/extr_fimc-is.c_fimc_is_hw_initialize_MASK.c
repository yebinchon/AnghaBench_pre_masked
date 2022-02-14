
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_10__ {scalar_t__ sub_index; int * size; int * base; } ;
struct TYPE_9__ {int paddr; } ;
struct TYPE_7__ {int setfile_info; } ;
struct fimc_is {int config_index; int state; TYPE_5__ setfile; int is_dma_p_region; TYPE_4__ memory; TYPE_3__* is_p_region; TYPE_2__ fw; int * sensor; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_8__ {scalar_t__* shared; } ;
struct TYPE_6__ {struct device dev; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct fimc_is*) ;
 int FUNC_5 (struct fimc_is*) ;
 int FUNC_6 (struct fimc_is*,int *) ;
 int FUNC_7 (struct fimc_is*) ;
 int FUNC_8 (struct fimc_is*,int) ;
 int FUNC_9 (struct fimc_is*,int ) ;
 int FUNC_10 (struct fimc_is*) ;
 int FUNC_11 (struct fimc_is*,int ,int,int ) ;
 int FUNC_12 (char*,int *,...) ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (int ,int *) ;

int FUNC_15(struct fimc_is *VAR_9)
{
 static const int VAR_10[] = {
  129, 128,
  131, 130
 };
 struct device *VAR_11 = &VAR_9->pdev->dev;
 u32 VAR_12;
 int VAR_13, VAR_14;


 VAR_14 = FUNC_6(VAR_9, &VAR_9->sensor[0]);
 if (VAR_14 < 0)
  return VAR_14;


 FUNC_4(VAR_9);

 VAR_14 = FUNC_11(VAR_9, VAR_6, 1,
     VAR_1);
 if (VAR_14 < 0) {
  FUNC_2(VAR_11, "get setfile address timed out\n");
  return VAR_14;
 }
 FUNC_12("setfile.base: %#x\n", VAR_9->setfile.base);


 FUNC_9(VAR_9, VAR_3);
 FUNC_1(VAR_6, &VAR_9->state);
 FUNC_5(VAR_9);
 VAR_14 = FUNC_11(VAR_9, VAR_6, 1,
     VAR_1);
 if (VAR_14 < 0) {
  FUNC_2(VAR_11, "loading setfile timed out\n");
  return VAR_14;
 }

 FUNC_12("setfile: base: %#x, size: %d\n",
   VAR_9->setfile.base, VAR_9->setfile.size);
 FUNC_13("FIMC-IS Setfile info: %s\n", VAR_9->fw.setfile_info);


 if (VAR_9->is_p_region->shared[VAR_8 - 1] !=
     VAR_2) {
  FUNC_2(VAR_11, "magic number error!\n");
  return -VAR_0;
 }

 FUNC_12("shared region: %pad, parameter region: %pad\n",
   &VAR_9->memory.paddr + VAR_4,
   &VAR_9->is_dma_p_region);

 VAR_9->setfile.sub_index = 0;


 FUNC_7(VAR_9);
 VAR_14 = FUNC_11(VAR_9, VAR_7, 1,
     VAR_1);
 if (VAR_14 < 0) {
  FUNC_2(VAR_11, "stream off timeout\n");
  return VAR_14;
 }


 VAR_12 = VAR_9->config_index;


 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_10); VAR_13++) {
  VAR_9->config_index = VAR_10[VAR_13];
  FUNC_10(VAR_9);
  VAR_14 = FUNC_8(VAR_9, 1);
  if (VAR_14 < 0) {
   VAR_9->config_index = VAR_12;
   return VAR_14;
  }
 }
 VAR_9->config_index = VAR_12;

 FUNC_14(VAR_5, &VAR_9->state);
 FUNC_3(VAR_11, "initialization sequence completed (%d)\n",
      VAR_9->config_index);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scif_hw_dev {int dummy; } ;
struct mic_device {int dummy; } ;
struct device {int dummy; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 struct scif_hw_dev* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct device*,int ) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (size_t,int) ;
 int FUNC_4 (struct mic_device*,void*,size_t) ;
 struct mic_device* FUNC_5 (struct scif_hw_dev*) ;

__attribute__((used)) static void *FUNC_6(struct device *VAR_1, size_t VAR_2,
        dma_addr_t *VAR_3, gfp_t VAR_4,
        unsigned long VAR_5)
{
 struct scif_hw_dev *VAR_6 = FUNC_0(VAR_1);
 struct mic_device *VAR_7 = FUNC_5(VAR_6);
 dma_addr_t VAR_8;
 void *VAR_9 = FUNC_3(VAR_2, VAR_4 | VAR_0);

 if (VAR_9) {
  VAR_8 = FUNC_4(VAR_7, VAR_9, VAR_2);
  if (FUNC_1(VAR_1, VAR_8)) {
   FUNC_2(VAR_9);
   VAR_9 = ((void*)0);
  } else {
   *VAR_3 = VAR_8;
  }
 }
 return VAR_9;
}

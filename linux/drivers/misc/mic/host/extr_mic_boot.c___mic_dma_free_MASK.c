
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scif_hw_dev {int dummy; } ;
struct mic_device {int dummy; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 struct scif_hw_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct mic_device*,int ,size_t) ;
 struct mic_device* FUNC_3 (struct scif_hw_dev*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0, size_t VAR_1, void *VAR_2,
      dma_addr_t VAR_3, unsigned long VAR_4)
{
 struct scif_hw_dev *VAR_5 = FUNC_0(VAR_0);
 struct mic_device *VAR_6 = FUNC_3(VAR_5);

 FUNC_2(VAR_6, VAR_3, VAR_1);
 FUNC_1(VAR_2);
}

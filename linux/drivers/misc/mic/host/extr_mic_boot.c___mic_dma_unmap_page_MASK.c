
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scif_hw_dev {int dummy; } ;
struct mic_device {int dummy; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 struct scif_hw_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct mic_device*,int ,size_t) ;
 struct mic_device* FUNC_2 (struct scif_hw_dev*) ;

__attribute__((used)) static void
FUNC_3(struct device *VAR_0, dma_addr_t VAR_1,
       size_t VAR_2, enum dma_data_direction VAR_3,
       unsigned long VAR_4)
{
 struct scif_hw_dev *VAR_5 = FUNC_0(VAR_0);
 struct mic_device *VAR_6 = FUNC_2(VAR_5);

 FUNC_1(VAR_6, VAR_1, VAR_2);
}

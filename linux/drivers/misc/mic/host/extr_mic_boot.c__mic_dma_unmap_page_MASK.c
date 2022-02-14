
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mic_device {int dummy; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 int FUNC_0 (struct mic_device*,int ,size_t) ;
 struct mic_device* FUNC_1 (struct device*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0, dma_addr_t VAR_1,
    size_t VAR_2, enum dma_data_direction VAR_3,
    unsigned long VAR_4)
{
 struct mic_device *VAR_5 = FUNC_1(VAR_0);

 FUNC_0(VAR_5, VAR_1, VAR_2);
}

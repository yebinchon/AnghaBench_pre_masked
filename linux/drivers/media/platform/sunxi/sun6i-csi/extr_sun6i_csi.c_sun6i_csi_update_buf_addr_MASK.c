
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun6i_csi_dev {int* planar_offset; int regmap; } ;
struct sun6i_csi {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 struct sun6i_csi_dev* FUNC_1 (struct sun6i_csi*) ;

void FUNC_2(struct sun6i_csi *VAR_3, dma_addr_t VAR_4)
{
 struct sun6i_csi_dev *VAR_5 = FUNC_1(VAR_3);

 FUNC_0(VAR_5->regmap, VAR_0,
       (VAR_4 + VAR_5->planar_offset[0]) >> 2);
 if (VAR_5->planar_offset[1] != -1)
  FUNC_0(VAR_5->regmap, VAR_1,
        (VAR_4 + VAR_5->planar_offset[1]) >> 2);
 if (VAR_5->planar_offset[2] != -1)
  FUNC_0(VAR_5->regmap, VAR_2,
        (VAR_4 + VAR_5->planar_offset[2]) >> 2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int width; int xfer_func; int quantization; int ycbcr_enc; int colorspace; int field; int height; int code; } ;
struct vimc_sen_device {TYPE_1__ mbus_format; int tpg; } ;
struct vimc_pix_map {int bpp; int pixelformat; } ;


 int FUNC_0 (int *,int,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 struct vimc_pix_map* FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct vimc_sen_device *VAR_0)
{
 const struct vimc_pix_map *VAR_1 =
    FUNC_9(VAR_0->mbus_format.code);

 FUNC_0(&VAR_0->tpg, VAR_0->mbus_format.width,
    VAR_0->mbus_format.height, VAR_0->mbus_format.field);
 FUNC_2(&VAR_0->tpg, 0, VAR_0->mbus_format.width * VAR_1->bpp);
 FUNC_1(&VAR_0->tpg, VAR_0->mbus_format.height);
 FUNC_5(&VAR_0->tpg, VAR_1->pixelformat);

 FUNC_4(&VAR_0->tpg, VAR_0->mbus_format.field, 0);
 FUNC_3(&VAR_0->tpg, VAR_0->mbus_format.colorspace);
 FUNC_8(&VAR_0->tpg, VAR_0->mbus_format.ycbcr_enc);
 FUNC_6(&VAR_0->tpg, VAR_0->mbus_format.quantization);
 FUNC_7(&VAR_0->tpg, VAR_0->mbus_format.xfer_func);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cedrus_dev {int dev; } ;
struct TYPE_4__ {int pic_info_buf_dma; int pic_info_buf; int neighbor_info_buf_dma; int neighbor_info_buf; int mv_col_buf_dma; int mv_col_buf; int mv_col_buf_size; } ;
struct TYPE_3__ {TYPE_2__ h264; } ;
struct cedrus_ctx {TYPE_1__ codec; struct cedrus_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct cedrus_ctx *VAR_2)
{
 struct cedrus_dev *VAR_3 = VAR_2->dev;

 FUNC_0(VAR_3->dev, VAR_2->codec.h264.mv_col_buf_size,
     VAR_2->codec.h264.mv_col_buf,
     VAR_2->codec.h264.mv_col_buf_dma);
 FUNC_0(VAR_3->dev, VAR_0,
     VAR_2->codec.h264.neighbor_info_buf,
     VAR_2->codec.h264.neighbor_info_buf_dma);
 FUNC_0(VAR_3->dev, VAR_1,
     VAR_2->codec.h264.pic_info_buf,
     VAR_2->codec.h264.pic_info_buf_dma);
}

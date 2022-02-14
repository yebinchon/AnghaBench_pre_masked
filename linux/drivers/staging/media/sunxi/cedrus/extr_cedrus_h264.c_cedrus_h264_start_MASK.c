
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cedrus_dev {int dev; } ;
struct TYPE_5__ {unsigned int mv_col_buf_field_size; unsigned int mv_col_buf_size; int pic_info_buf_dma; void* pic_info_buf; int neighbor_info_buf_dma; void* neighbor_info_buf; void* mv_col_buf; int mv_col_buf_dma; } ;
struct TYPE_6__ {TYPE_2__ h264; } ;
struct TYPE_4__ {int height; int width; } ;
struct cedrus_ctx {TYPE_3__ codec; TYPE_1__ src_fmt; struct cedrus_dev* dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int ,unsigned int,int *,int ) ;
 int FUNC_2 (int ,unsigned int,void*,int ) ;

__attribute__((used)) static int FUNC_3(struct cedrus_ctx *VAR_5)
{
 struct cedrus_dev *VAR_6 = VAR_5->dev;
 unsigned int VAR_7;
 unsigned int VAR_8;
 int VAR_9;







 VAR_5->codec.h264.pic_info_buf =
  FUNC_1(VAR_6->dev, VAR_2,
       &VAR_5->codec.h264.pic_info_buf_dma,
       VAR_4);
 if (!VAR_5->codec.h264.pic_info_buf)
  return -VAR_3;
 VAR_5->codec.h264.neighbor_info_buf =
  FUNC_1(VAR_6->dev, VAR_1,
       &VAR_5->codec.h264.neighbor_info_buf_dma,
       VAR_4);
 if (!VAR_5->codec.h264.neighbor_info_buf) {
  VAR_9 = -VAR_3;
  goto err_pic_buf;
 }

 VAR_7 = FUNC_0(VAR_5->src_fmt.width, 16) *
  FUNC_0(VAR_5->src_fmt.height, 16) * 16;







 VAR_7 = VAR_7 * 2;







 VAR_7 = VAR_7 * 2;
 VAR_5->codec.h264.mv_col_buf_field_size = VAR_7;

 VAR_8 = VAR_7 * 2 * VAR_0;
 VAR_5->codec.h264.mv_col_buf_size = VAR_8;
 VAR_5->codec.h264.mv_col_buf = FUNC_1(VAR_6->dev,
       VAR_5->codec.h264.mv_col_buf_size,
       &VAR_5->codec.h264.mv_col_buf_dma,
       VAR_4);
 if (!VAR_5->codec.h264.mv_col_buf) {
  VAR_9 = -VAR_3;
  goto err_neighbor_buf;
 }

 return 0;

err_neighbor_buf:
 FUNC_2(VAR_6->dev, VAR_1,
     VAR_5->codec.h264.neighbor_info_buf,
     VAR_5->codec.h264.neighbor_info_buf_dma);

err_pic_buf:
 FUNC_2(VAR_6->dev, VAR_2,
     VAR_5->codec.h264.pic_info_buf,
     VAR_5->codec.h264.pic_info_buf_dma);
 return VAR_9;
}

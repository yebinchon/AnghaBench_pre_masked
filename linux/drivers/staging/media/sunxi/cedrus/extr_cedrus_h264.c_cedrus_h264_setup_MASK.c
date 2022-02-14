
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cedrus_run {int dummy; } ;
struct cedrus_dev {int dummy; } ;
struct TYPE_3__ {int neighbor_info_buf_dma; int pic_info_buf_dma; } ;
struct TYPE_4__ {TYPE_1__ h264; } ;
struct cedrus_ctx {TYPE_2__ codec; struct cedrus_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cedrus_dev*,int ) ;
 int FUNC_1 (struct cedrus_ctx*,struct cedrus_run*) ;
 int FUNC_2 (struct cedrus_dev*,int ,int ) ;
 int FUNC_3 (struct cedrus_ctx*,struct cedrus_run*) ;
 int FUNC_4 (struct cedrus_ctx*,struct cedrus_run*) ;

__attribute__((used)) static void FUNC_5(struct cedrus_ctx *VAR_4,
         struct cedrus_run *VAR_5)
{
 struct cedrus_dev *VAR_6 = VAR_4->dev;

 FUNC_0(VAR_6, VAR_0);

 FUNC_2(VAR_6, VAR_3, 0);
 FUNC_2(VAR_6, VAR_1,
       VAR_4->codec.h264.pic_info_buf_dma);
 FUNC_2(VAR_6, VAR_2,
       VAR_4->codec.h264.neighbor_info_buf_dma);

 FUNC_4(VAR_4, VAR_5);
 FUNC_3(VAR_4, VAR_5);

 FUNC_1(VAR_4, VAR_5);
}

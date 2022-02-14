
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rvin_video_format {int bpp; } ;
struct TYPE_3__ {int bytesperline; int pixelformat; } ;
struct TYPE_4__ {int left; int top; } ;
struct rvin_dev {TYPE_1__ format; TYPE_2__ compose; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 struct rvin_video_format* FUNC_2 (struct rvin_dev*,int ) ;
 int FUNC_3 (struct rvin_dev*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct rvin_dev *VAR_1, int VAR_2, dma_addr_t VAR_3)
{
 const struct rvin_video_format *VAR_4;
 int VAR_5, VAR_6;
 dma_addr_t VAR_7;

 VAR_4 = FUNC_2(VAR_1, VAR_1->format.pixelformat);





 VAR_5 = VAR_1->compose.left * VAR_4->bpp;
 VAR_6 = VAR_1->compose.top * VAR_1->format.bytesperline;
 VAR_7 = VAR_3 + VAR_5 + VAR_6;





 if (FUNC_1((VAR_5 | VAR_6 | VAR_7) & VAR_0))
  return;

 FUNC_3(VAR_1, VAR_7, FUNC_0(VAR_2));
}

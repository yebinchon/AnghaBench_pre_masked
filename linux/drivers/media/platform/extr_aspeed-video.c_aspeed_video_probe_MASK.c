
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct aspeed_video {int frame_rate; int base; int * dev; int buffers; int res_work; int wait; int video_lock; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct aspeed_video*) ;
 int VAR_3 ;
 int FUNC_5 (struct aspeed_video*) ;
 int FUNC_6 (int *,struct resource*) ;
 int FUNC_7 (int *) ;
 struct aspeed_video* FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_4)
{
 int VAR_5;
 struct resource *VAR_6;
 struct aspeed_video *VAR_7 = FUNC_8(sizeof(*VAR_7), VAR_1);

 if (!VAR_7)
  return -VAR_0;

 VAR_7->frame_rate = 30;
 VAR_7->dev = &VAR_4->dev;
 FUNC_11(&VAR_7->lock);
 FUNC_9(&VAR_7->video_lock);
 FUNC_7(&VAR_7->wait);
 FUNC_0(&VAR_7->res_work, VAR_3);
 FUNC_1(&VAR_7->buffers);

 VAR_6 = FUNC_10(VAR_4, VAR_2, 0);

 VAR_7->base = FUNC_6(VAR_7->dev, VAR_6);

 if (FUNC_2(VAR_7->base))
  return FUNC_3(VAR_7->base);

 VAR_5 = FUNC_4(VAR_7);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_5(VAR_7);
 if (VAR_5)
  return VAR_5;

 return 0;
}

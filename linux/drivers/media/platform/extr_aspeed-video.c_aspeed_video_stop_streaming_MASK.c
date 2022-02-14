
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int dummy; } ;
struct aspeed_video {int dev; int flags; int wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct aspeed_video*,int ) ;
 int FUNC_1 (struct aspeed_video*) ;
 int FUNC_2 (struct aspeed_video*) ;
 int FUNC_3 (struct aspeed_video*) ;
 int FUNC_4 (struct aspeed_video*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int *) ;
 struct aspeed_video* FUNC_8 (struct vb2_queue*) ;
 int FUNC_9 (int ,int,int ) ;

__attribute__((used)) static void FUNC_10(struct vb2_queue *VAR_4)
{
 int VAR_5;
 struct aspeed_video *VAR_6 = FUNC_8(VAR_4);

 FUNC_5(VAR_3, &VAR_6->flags);

 VAR_5 = FUNC_9(VAR_6->wait,
    !FUNC_7(VAR_2, &VAR_6->flags),
    VAR_0);
 if (!VAR_5) {
  FUNC_6(VAR_6->dev, "Timed out when stopping streaming\n");





  FUNC_3(VAR_6);
  FUNC_4(VAR_6);

  FUNC_2(VAR_6);

  FUNC_1(VAR_6);
 }

 FUNC_0(VAR_6, VAR_1);
}

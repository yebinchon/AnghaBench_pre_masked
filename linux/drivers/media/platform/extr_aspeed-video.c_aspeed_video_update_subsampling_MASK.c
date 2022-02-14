
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ virt; } ;
struct aspeed_video {scalar_t__ yuv420; TYPE_1__ jpeg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (struct aspeed_video*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct aspeed_video *VAR_2)
{
 if (VAR_2->jpeg.virt)
  FUNC_0(VAR_2->jpeg.virt, VAR_2->yuv420);

 if (VAR_2->yuv420)
  FUNC_1(VAR_2, VAR_0, 0, VAR_1);
 else
  FUNC_1(VAR_2, VAR_0, VAR_1, 0);
}

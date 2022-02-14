
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aspeed_video {int flags; int eclk; int vclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct aspeed_video*,int ,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct aspeed_video *VAR_3)
{
 if (!FUNC_3(VAR_2, &VAR_3->flags))
  return;


 FUNC_0(VAR_3, VAR_0, 0);
 FUNC_0(VAR_3, VAR_1, 0xffffffff);


 FUNC_2(VAR_3->vclk);
 FUNC_2(VAR_3->eclk);

 FUNC_1(VAR_2, &VAR_3->flags);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aspeed_video {int flags; int vclk; int eclk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct aspeed_video *VAR_1)
{
 if (FUNC_2(VAR_0, &VAR_1->flags))
  return;


 FUNC_0(VAR_1->eclk);
 FUNC_0(VAR_1->vclk);

 FUNC_1(VAR_0, &VAR_1->flags);
}

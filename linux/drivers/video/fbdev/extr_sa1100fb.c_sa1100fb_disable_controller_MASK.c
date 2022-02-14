
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sa1100fb_info {int clk; int ctrlr_wait; scalar_t__ base; int dev; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int VAR_8 ;
 int FUNC_10 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct sa1100fb_info *VAR_9)
{
 FUNC_0(VAR_8, VAR_7);
 u32 VAR_10;

 FUNC_3(VAR_9->dev, "Disabling LCD controller\n");

 if (FUNC_5())
  FUNC_4(VAR_5, 0);

 FUNC_9(VAR_6);
 FUNC_1(&VAR_9->ctrlr_wait, &VAR_8);


 FUNC_10(~0, VAR_9->base + VAR_4);

 VAR_10 = FUNC_6(VAR_9->base + VAR_1);
 VAR_10 &= ~VAR_2;
 FUNC_10(VAR_10, VAR_9->base + VAR_1);
 VAR_10 &= ~VAR_3;
 FUNC_10(VAR_10, VAR_9->base + VAR_1);

 FUNC_8(20 * VAR_0 / 1000);
 FUNC_7(&VAR_9->ctrlr_wait, &VAR_8);


 FUNC_2(VAR_9->clk);
}

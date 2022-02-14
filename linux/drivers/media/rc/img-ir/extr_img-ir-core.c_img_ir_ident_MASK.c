
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct img_ir_priv {int raw; int hw; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct img_ir_priv*,int ) ;

__attribute__((used)) static void FUNC_4(struct img_ir_priv *VAR_9)
{
 u32 VAR_10 = FUNC_3(VAR_9, VAR_0);

 FUNC_0(VAR_9->dev,
   "IMG IR Decoder (%d.%d.%d.%d) probed successfully\n",
   (VAR_10 & VAR_1) >> VAR_2,
   (VAR_10 & VAR_5) >> VAR_6,
   (VAR_10 & VAR_7) >> VAR_8,
   (VAR_10 & VAR_3) >> VAR_4);
 FUNC_0(VAR_9->dev, "Modes:%s%s\n",
   FUNC_1(&VAR_9->hw) ? " hardware" : "",
   FUNC_2(&VAR_9->raw) ? " raw" : "");
}

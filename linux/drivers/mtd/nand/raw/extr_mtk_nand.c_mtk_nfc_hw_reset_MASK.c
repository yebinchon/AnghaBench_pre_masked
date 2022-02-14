
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_nfc {scalar_t__ regs; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct device*,char*,scalar_t__,int) ;
 int FUNC_1 (struct mtk_nfc*,int,int ) ;
 int FUNC_2 (struct mtk_nfc*,int ,int ) ;
 int FUNC_3 (scalar_t__,int,int,int,int ) ;

__attribute__((used)) static void FUNC_4(struct mtk_nfc *VAR_8)
{
 struct device *VAR_9 = VAR_8->dev;
 u32 VAR_10;
 int VAR_11;


 FUNC_1(VAR_8, VAR_0 | VAR_1, VAR_4);


 VAR_11 = FUNC_3(VAR_8->regs + VAR_5, VAR_10,
     !(VAR_10 & VAR_2), 50,
     VAR_3);
 if (VAR_11)
  FUNC_0(VAR_9, "master active in reset [0x%x] = 0x%x\n",
    VAR_5, VAR_10);


 FUNC_1(VAR_8, VAR_0 | VAR_1, VAR_4);
 FUNC_2(VAR_8, VAR_7, VAR_6);
}

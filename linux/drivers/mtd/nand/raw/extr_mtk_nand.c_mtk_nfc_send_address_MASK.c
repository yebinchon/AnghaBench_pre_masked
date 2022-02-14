
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
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct mtk_nfc*,int,int ) ;
 int FUNC_2 (struct mtk_nfc*,int,int ) ;
 int FUNC_3 (scalar_t__,int,int,int,int ) ;

__attribute__((used)) static int FUNC_4(struct mtk_nfc *VAR_7, int VAR_8)
{
 struct device *VAR_9 = VAR_7->dev;
 u32 VAR_10;
 int VAR_11;

 FUNC_1(VAR_7, VAR_8, VAR_3);
 FUNC_1(VAR_7, 0, VAR_4);
 FUNC_2(VAR_7, 1, VAR_2);

 VAR_11 = FUNC_3(VAR_7->regs + VAR_5, VAR_10,
     !(VAR_10 & VAR_6), 10, VAR_1);
 if (VAR_11) {
  FUNC_0(VAR_9, "nfi core timed out entering address mode\n");
  return -VAR_0;
 }

 return 0;
}

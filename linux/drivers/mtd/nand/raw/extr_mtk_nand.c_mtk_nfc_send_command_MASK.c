
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mtk_nfc {scalar_t__ regs; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct mtk_nfc*,int ,int ) ;
 int FUNC_2 (scalar_t__,int,int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct mtk_nfc *VAR_5, u8 VAR_6)
{
 struct device *VAR_7 = VAR_5->dev;
 u32 VAR_8;
 int VAR_9;

 FUNC_1(VAR_5, VAR_6, VAR_2);

 VAR_9 = FUNC_2(VAR_5->regs + VAR_3, VAR_8,
     !(VAR_8 & VAR_4), 10, VAR_1);
 if (VAR_9) {
  FUNC_0(VAR_7, "nfi core timed out entering command mode\n");
  return -VAR_0;
 }

 return 0;
}

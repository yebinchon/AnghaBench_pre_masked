
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lp855x {int dev; int client; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct lp855x*,int,int) ;

__attribute__((used)) static int FUNC_3(struct lp855x *VAR_0, u8 VAR_1, u8 VAR_2, u8 VAR_3)
{
 int VAR_4;
 u8 VAR_5;

 VAR_4 = FUNC_1(VAR_0->client, VAR_1);
 if (VAR_4 < 0) {
  FUNC_0(VAR_0->dev, "failed to read 0x%.2x\n", VAR_1);
  return VAR_4;
 }

 VAR_5 = (u8)VAR_4;
 VAR_5 &= ~VAR_2;
 VAR_5 |= VAR_3 & VAR_2;

 return FUNC_2(VAR_0, VAR_1, VAR_5);
}

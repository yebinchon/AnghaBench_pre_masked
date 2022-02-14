
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lm3533 {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct lm3533*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct lm3533 *VAR_6, u8 VAR_7, u8 VAR_8)
{
 u8 VAR_9;
 u8 VAR_10;
 u8 VAR_11;
 int VAR_12;
 int VAR_13;

 if (VAR_7 == 0 || VAR_7 > VAR_3)
  return -VAR_0;

 if (VAR_8 > VAR_2)
  return -VAR_0;

 if (VAR_7 < 4) {
  VAR_9 = VAR_4;
  VAR_12 = 2 * VAR_7;
 } else {
  VAR_9 = VAR_5;
  VAR_12 = 2 * (VAR_7 - 4);
 }

 VAR_11 = VAR_1 << VAR_12;
 VAR_10 = VAR_8 << VAR_12;

 VAR_13 = FUNC_1(VAR_6, VAR_9, VAR_10, VAR_11);
 if (VAR_13)
  FUNC_0(VAR_6->dev, "failed to set lvled config\n");

 return VAR_13;
}

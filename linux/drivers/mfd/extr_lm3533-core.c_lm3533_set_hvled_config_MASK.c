
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
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct lm3533*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct lm3533 *VAR_5, u8 VAR_6, u8 VAR_7)
{
 u8 VAR_8;
 u8 VAR_9;
 int VAR_10;
 int VAR_11;

 if (VAR_6 == 0 || VAR_6 > VAR_3)
  return -VAR_0;

 if (VAR_7 > VAR_2)
  return -VAR_0;

 VAR_10 = VAR_6 - 1;
 VAR_9 = VAR_1 << VAR_10;
 VAR_8 = VAR_7 << VAR_10;

 VAR_11 = FUNC_1(VAR_5, VAR_4, VAR_8, VAR_9);
 if (VAR_11)
  FUNC_0(VAR_5->dev, "failed to set hvled config\n");

 return VAR_11;
}

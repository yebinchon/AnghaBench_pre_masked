
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct lm3533_ctrlbank {int dev; int lm3533; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct lm3533_ctrlbank*,int ) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;

int FUNC_3(struct lm3533_ctrlbank *VAR_5, u16 VAR_6)
{
 u8 VAR_7;
 u8 VAR_8;
 int VAR_9;

 if (VAR_6 < VAR_2 || VAR_6 > VAR_1)
  return -VAR_0;

 VAR_8 = (VAR_6 - VAR_2) / VAR_3;

 VAR_7 = FUNC_1(VAR_5, VAR_4);
 VAR_9 = FUNC_2(VAR_5->lm3533, VAR_7, VAR_8);
 if (VAR_9)
  FUNC_0(VAR_5->dev, "failed to set max current\n");

 return VAR_9;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rtsx_ucr {int pusb_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (struct rtsx_ucr*,int *) ;
 int FUNC_3 (int ,int ,int ,int,int ,int ,int *,int,int) ;
 int FUNC_4 (int ,int ) ;

int FUNC_5(struct rtsx_ucr *VAR_8, u16 *VAR_9)
{
 int VAR_10;
 u16 *VAR_11;

 if (!VAR_9)
  return -VAR_0;

 if (VAR_7 == 0) {
  VAR_11 = FUNC_1(sizeof(u16), VAR_2);
  if (!VAR_11)
   return -VAR_1;

  VAR_10 = FUNC_3(VAR_8->pusb_dev,
    FUNC_4(VAR_8->pusb_dev, 0),
    VAR_3,
    VAR_4 | VAR_6 | VAR_5,
    0, 0, VAR_11, 2, 100);
  *VAR_9 = *VAR_11;

  FUNC_0(VAR_11);
 } else {
  VAR_10 = FUNC_2(VAR_8, VAR_9);
 }


 if (VAR_10 < 0)
  return VAR_10;

 return 0;
}

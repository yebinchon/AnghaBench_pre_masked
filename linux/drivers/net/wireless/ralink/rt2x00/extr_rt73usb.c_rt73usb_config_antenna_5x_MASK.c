
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rt2x00_dev {int curr_band; } ;
struct antenna_setup {int rx; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rt2x00_dev*) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (struct rt2x00_dev*,int) ;
 int FUNC_3 (struct rt2x00_dev*,int,int) ;

__attribute__((used)) static void FUNC_4(struct rt2x00_dev *VAR_5,
          struct antenna_setup *VAR_6)
{
 u8 VAR_7;
 u8 VAR_8;
 u8 VAR_9;
 u8 VAR_10;

 VAR_7 = FUNC_2(VAR_5, 3);
 VAR_8 = FUNC_2(VAR_5, 4);
 VAR_9 = FUNC_2(VAR_5, 77);

 FUNC_1(&VAR_7, VAR_0, 0);




 switch (VAR_6->rx) {
 case 128:
  FUNC_1(&VAR_8, VAR_1, 2);
  VAR_10 = !FUNC_0(VAR_5) &&
         (VAR_5->curr_band != VAR_4);
  FUNC_1(&VAR_8, VAR_2, VAR_10);
  break;
 case 130:
  FUNC_1(&VAR_8, VAR_1, 1);
  FUNC_1(&VAR_8, VAR_2, 0);
  if (VAR_5->curr_band == VAR_4)
   FUNC_1(&VAR_9, VAR_3, 0);
  else
   FUNC_1(&VAR_9, VAR_3, 3);
  break;
 case 129:
 default:
  FUNC_1(&VAR_8, VAR_1, 1);
  FUNC_1(&VAR_8, VAR_2, 0);
  if (VAR_5->curr_band == VAR_4)
   FUNC_1(&VAR_9, VAR_3, 3);
  else
   FUNC_1(&VAR_9, VAR_3, 0);
  break;
 }

 FUNC_3(VAR_5, 77, VAR_9);
 FUNC_3(VAR_5, 3, VAR_7);
 FUNC_3(VAR_5, 4, VAR_8);
}

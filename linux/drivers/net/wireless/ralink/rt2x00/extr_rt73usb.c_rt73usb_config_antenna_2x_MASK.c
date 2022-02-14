
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rt2x00_dev {int dummy; } ;
struct antenna_setup {int rx; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rt2x00_dev*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct rt2x00_dev*,int) ;
 int FUNC_3 (struct rt2x00_dev*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct rt2x00_dev *VAR_4,
          struct antenna_setup *VAR_5)
{
 u8 VAR_6;
 u8 VAR_7;
 u8 VAR_8;

 VAR_6 = FUNC_2(VAR_4, 3);
 VAR_7 = FUNC_2(VAR_4, 4);
 VAR_8 = FUNC_2(VAR_4, 77);

 FUNC_1(&VAR_6, VAR_0, 0);
 FUNC_1(&VAR_7, VAR_2,
     !FUNC_0(VAR_4));




 switch (VAR_5->rx) {
 case 128:
  FUNC_1(&VAR_7, VAR_1, 2);
  break;
 case 130:
  FUNC_1(&VAR_8, VAR_3, 3);
  FUNC_1(&VAR_7, VAR_1, 1);
  break;
 case 129:
 default:
  FUNC_1(&VAR_8, VAR_3, 0);
  FUNC_1(&VAR_7, VAR_1, 1);
  break;
 }

 FUNC_3(VAR_4, 77, VAR_8);
 FUNC_3(VAR_4, 3, VAR_6);
 FUNC_3(VAR_4, 4, VAR_7);
}

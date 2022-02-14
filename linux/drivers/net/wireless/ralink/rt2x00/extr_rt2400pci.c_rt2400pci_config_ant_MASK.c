
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rt2x00_dev {int dummy; } ;
struct antenna_setup {int rx; int tx; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rt2x00_dev*,int) ;
 int FUNC_2 (struct rt2x00_dev*,int,int ) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static void FUNC_4(struct rt2x00_dev *VAR_3,
     struct antenna_setup *VAR_4)
{
 u8 VAR_5;
 u8 VAR_6;





 FUNC_0(VAR_4->rx == VAR_0 ||
        VAR_4->tx == VAR_0);

 VAR_6 = FUNC_1(VAR_3, 4);
 VAR_5 = FUNC_1(VAR_3, 1);




 switch (VAR_4->tx) {
 case 128:
  FUNC_3(&VAR_5, VAR_1, 1);
  break;
 case 130:
  FUNC_3(&VAR_5, VAR_1, 0);
  break;
 case 129:
 default:
  FUNC_3(&VAR_5, VAR_1, 2);
  break;
 }




 switch (VAR_4->rx) {
 case 128:
  FUNC_3(&VAR_6, VAR_2, 1);
  break;
 case 130:
  FUNC_3(&VAR_6, VAR_2, 0);
  break;
 case 129:
 default:
  FUNC_3(&VAR_6, VAR_2, 2);
  break;
 }

 FUNC_2(VAR_3, 4, VAR_6);
 FUNC_2(VAR_3, 1, VAR_5);
}

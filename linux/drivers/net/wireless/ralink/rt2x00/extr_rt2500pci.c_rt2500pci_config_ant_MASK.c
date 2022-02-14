
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rt2x00_dev {int dummy; } ;
struct antenna_setup {int rx; int tx; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct rt2x00_dev*,int) ;
 int FUNC_2 (struct rt2x00_dev*,int,int ) ;
 scalar_t__ FUNC_3 (struct rt2x00_dev*,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (struct rt2x00_dev*,int ) ;
 int FUNC_7 (struct rt2x00_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct rt2x00_dev *VAR_12,
     struct antenna_setup *VAR_13)
{
 u32 VAR_14;
 u8 VAR_15;
 u8 VAR_16;





 FUNC_0(VAR_13->rx == VAR_0 ||
        VAR_13->tx == VAR_0);

 VAR_14 = FUNC_6(VAR_12, VAR_1);
 VAR_15 = FUNC_1(VAR_12, 14);
 VAR_16 = FUNC_1(VAR_12, 2);




 switch (VAR_13->tx) {
 case 129:
  FUNC_5(&VAR_16, VAR_8, 0);
  FUNC_4(&VAR_14, VAR_2, 0);
  FUNC_4(&VAR_14, VAR_4, 0);
  break;
 case 128:
 default:
  FUNC_5(&VAR_16, VAR_8, 2);
  FUNC_4(&VAR_14, VAR_2, 2);
  FUNC_4(&VAR_14, VAR_4, 2);
  break;
 }




 switch (VAR_13->rx) {
 case 129:
  FUNC_5(&VAR_15, VAR_6, 0);
  break;
 case 128:
 default:
  FUNC_5(&VAR_15, VAR_6, 2);
  break;
 }




 if (FUNC_3(VAR_12, VAR_10) || FUNC_3(VAR_12, VAR_11)) {
  FUNC_5(&VAR_16, VAR_9, 1);
  FUNC_4(&VAR_14, VAR_3, 1);
  FUNC_4(&VAR_14, VAR_5, 1);




  if (FUNC_3(VAR_12, VAR_10))
   FUNC_5(&VAR_15, VAR_7, 0);
 } else {
  FUNC_4(&VAR_14, VAR_3, 0);
  FUNC_4(&VAR_14, VAR_5, 0);
 }

 FUNC_7(VAR_12, VAR_1, VAR_14);
 FUNC_2(VAR_12, 14, VAR_15);
 FUNC_2(VAR_12, 2, VAR_16);
}

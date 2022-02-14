
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rt2x00_dev {struct rt2800_drv_data* drv_data; } ;
struct rt2800_drv_data {int txmixer_gain_24g; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct rt2x00_dev*,int) ;
 int FUNC_1 (struct rt2x00_dev*,int,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct rt2x00_dev *VAR_8)
{
 struct rt2800_drv_data *VAR_9 = VAR_8->drv_data;
 u8 VAR_10;
 u8 VAR_11;

 VAR_10 = FUNC_0(VAR_8, 50);
 FUNC_3(&VAR_10, VAR_6, 0);
 FUNC_1(VAR_8, 50, VAR_10);

 VAR_10 = FUNC_0(VAR_8, 51);
 VAR_11 = FUNC_2(VAR_9->txmixer_gain_24g,
        VAR_0);
 FUNC_3(&VAR_10, VAR_7, VAR_11);
 FUNC_1(VAR_8, 51, VAR_10);

 VAR_10 = FUNC_0(VAR_8, 38);
 FUNC_3(&VAR_10, VAR_4, 0);
 FUNC_1(VAR_8, 38, VAR_10);

 VAR_10 = FUNC_0(VAR_8, 39);
 FUNC_3(&VAR_10, VAR_5, 0);
 FUNC_1(VAR_8, 39, VAR_10);

 VAR_10 = FUNC_0(VAR_8, 1);
 FUNC_3(&VAR_10, VAR_2, 1);
 FUNC_3(&VAR_10, VAR_1, 1);
 FUNC_1(VAR_8, 1, VAR_10);

 VAR_10 = FUNC_0(VAR_8, 30);
 FUNC_3(&VAR_10, VAR_3, 2);
 FUNC_1(VAR_8, 30, VAR_10);


}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rt2x00_dev {struct rt2800_drv_data* drv_data; } ;
struct rt2800_drv_data {int calibration_bw20; int calibration_bw40; void* bbp26; void* bbp25; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (struct rt2x00_dev*,int) ;
 int FUNC_1 (struct rt2x00_dev*) ;
 int FUNC_2 (struct rt2x00_dev*) ;
 int FUNC_3 (struct rt2x00_dev*) ;
 int FUNC_4 (struct rt2x00_dev*,int ) ;
 int FUNC_5 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_6 (struct rt2x00_dev*,int) ;
 int FUNC_7 (struct rt2x00_dev*,int,int) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int*,int ,int) ;
 int FUNC_10 (struct rt2x00_dev*) ;
 int FUNC_11 (int,int) ;

__attribute__((used)) static void FUNC_12(struct rt2x00_dev *VAR_8)
{
 struct rt2800_drv_data *VAR_9 = VAR_8->drv_data;
 u32 VAR_10;
 u8 VAR_11;


 VAR_10 = FUNC_4(VAR_8, VAR_0);
 FUNC_8(&VAR_10, VAR_1, 0);
 FUNC_8(&VAR_10, VAR_2, 0);
 FUNC_5(VAR_8, VAR_0, VAR_10);


 FUNC_7(VAR_8, 1, 0x03);
 FUNC_7(VAR_8, 3, 0x80);
 FUNC_7(VAR_8, 5, 0x00);
 FUNC_7(VAR_8, 6, 0x40);
 FUNC_7(VAR_8, 8, 0xf1);
 FUNC_7(VAR_8, 9, 0x02);
 FUNC_7(VAR_8, 10, 0xd3);
 FUNC_7(VAR_8, 11, 0x40);
 FUNC_7(VAR_8, 12, 0x4e);
 FUNC_7(VAR_8, 13, 0x12);
 FUNC_7(VAR_8, 18, 0x40);
 FUNC_7(VAR_8, 22, 0x20);
 FUNC_7(VAR_8, 30, 0x10);
 FUNC_7(VAR_8, 31, 0x80);
 FUNC_7(VAR_8, 32, 0x78);
 FUNC_7(VAR_8, 33, 0x3b);
 FUNC_7(VAR_8, 34, 0x3c);
 FUNC_7(VAR_8, 35, 0xe0);
 FUNC_7(VAR_8, 38, 0x86);
 FUNC_7(VAR_8, 39, 0x23);
 FUNC_7(VAR_8, 44, 0xd3);
 FUNC_7(VAR_8, 45, 0xbb);
 FUNC_7(VAR_8, 46, 0x60);
 FUNC_7(VAR_8, 49, 0x8e);
 FUNC_7(VAR_8, 50, 0x86);
 FUNC_7(VAR_8, 51, 0x75);
 FUNC_7(VAR_8, 52, 0x45);
 FUNC_7(VAR_8, 53, 0x18);
 FUNC_7(VAR_8, 54, 0x18);
 FUNC_7(VAR_8, 55, 0x18);
 FUNC_7(VAR_8, 56, 0xdb);
 FUNC_7(VAR_8, 57, 0x6e);



 VAR_11 = FUNC_6(VAR_8, 2);
 FUNC_9(&VAR_11, VAR_7, 1);
 FUNC_7(VAR_8, 2, VAR_11);

 FUNC_1(VAR_8);

 VAR_11 = FUNC_6(VAR_8, 18);
 FUNC_9(&VAR_11, VAR_6, 1);
 FUNC_7(VAR_8, 18, VAR_11);

 VAR_10 = FUNC_4(VAR_8, VAR_3);
 FUNC_8(&VAR_10, VAR_5, 3);
 FUNC_8(&VAR_10, VAR_4, 1);
 FUNC_5(VAR_8, VAR_3, VAR_10);
 FUNC_11(1000, 1500);
 VAR_10 = FUNC_4(VAR_8, VAR_3);
 FUNC_8(&VAR_10, VAR_5, 0);
 FUNC_5(VAR_8, VAR_3, VAR_10);


 VAR_9->calibration_bw20 = 0x1f;
 VAR_9->calibration_bw40 = 0x2f;


 VAR_9->bbp25 = FUNC_0(VAR_8, 25);
 VAR_9->bbp26 = FUNC_0(VAR_8, 26);

 FUNC_2(VAR_8);
 FUNC_3(VAR_8);

 FUNC_10(VAR_8);


}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int rx_chain_num; } ;
struct rt2x00_dev {TYPE_1__ default_ant; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rt2x00_dev*) ;
 int FUNC_1 (struct rt2x00_dev*,int) ;
 int FUNC_2 (struct rt2x00_dev*,int,int) ;
 int FUNC_3 (struct rt2x00_dev*,int ) ;
 int FUNC_4 (struct rt2x00_dev*) ;
 int FUNC_5 (struct rt2x00_dev*) ;
 int FUNC_6 (struct rt2x00_dev*) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_9 (int*,int ,int) ;

__attribute__((used)) static void FUNC_10(struct rt2x00_dev *VAR_7)
{
 int VAR_8, VAR_9;
 u16 VAR_10;
 u8 VAR_11;

 FUNC_5(VAR_7);

 VAR_11 = FUNC_1(VAR_7, 105);
 FUNC_9(&VAR_11, VAR_0,
     VAR_7->default_ant.rx_chain_num == 2);
 FUNC_2(VAR_7, 105, VAR_11);

 FUNC_0(VAR_7);

 FUNC_2(VAR_7, 20, 0x06);
 FUNC_2(VAR_7, 31, 0x08);
 FUNC_2(VAR_7, 65, 0x2C);
 FUNC_2(VAR_7, 68, 0xDD);
 FUNC_2(VAR_7, 69, 0x1A);
 FUNC_2(VAR_7, 70, 0x05);
 FUNC_2(VAR_7, 73, 0x13);
 FUNC_2(VAR_7, 74, 0x0F);
 FUNC_2(VAR_7, 75, 0x4F);
 FUNC_2(VAR_7, 76, 0x28);
 FUNC_2(VAR_7, 77, 0x59);
 FUNC_2(VAR_7, 84, 0x9A);
 FUNC_2(VAR_7, 86, 0x38);
 FUNC_2(VAR_7, 88, 0x90);
 FUNC_2(VAR_7, 91, 0x04);
 FUNC_2(VAR_7, 92, 0x02);
 FUNC_2(VAR_7, 95, 0x9a);
 FUNC_2(VAR_7, 98, 0x12);
 FUNC_2(VAR_7, 103, 0xC0);
 FUNC_2(VAR_7, 104, 0x92);

 FUNC_2(VAR_7, 105, 0x3C);
 FUNC_2(VAR_7, 106, 0x35);
 FUNC_2(VAR_7, 128, 0x12);
 FUNC_2(VAR_7, 134, 0xD0);
 FUNC_2(VAR_7, 135, 0xF6);
 FUNC_2(VAR_7, 137, 0x0F);


 FUNC_4(VAR_7);

 FUNC_0(VAR_7);

 VAR_10 = FUNC_3(VAR_7, VAR_3);
 VAR_9 = FUNC_7(VAR_10, VAR_4);
 VAR_8 = (VAR_9 == 3) ? 1 : 0;
 VAR_11 = FUNC_1(VAR_7, 152);
 if (VAR_8 == 0) {

  FUNC_9(&VAR_11, VAR_1, 1);
 } else {

  FUNC_9(&VAR_11, VAR_1, 0);
 }
 FUNC_2(VAR_7, 152, VAR_11);

 if (FUNC_8(VAR_7, VAR_6, VAR_5)) {
  VAR_11 = FUNC_1(VAR_7, 254);
  FUNC_9(&VAR_11, VAR_2, 1);
  FUNC_2(VAR_7, 254, VAR_11);
 }

 FUNC_6(VAR_7);

 FUNC_2(VAR_7, 84, 0x19);
 if (FUNC_8(VAR_7, VAR_6, VAR_5))
  FUNC_2(VAR_7, 103, 0xc0);
}

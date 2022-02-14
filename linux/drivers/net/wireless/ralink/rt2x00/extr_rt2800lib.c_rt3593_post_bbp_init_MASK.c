
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int rx_chain_num; } ;
struct rt2x00_dev {TYPE_1__ default_ant; } ;


 int VAR_0 ;
 int FUNC_0 (struct rt2x00_dev*) ;
 int FUNC_1 (struct rt2x00_dev*,int) ;
 int FUNC_2 (struct rt2x00_dev*,int,int) ;
 int FUNC_3 (int*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct rt2x00_dev *VAR_1)
{
 u8 VAR_2;
 bool VAR_3 = 0;

 VAR_2 = FUNC_1(VAR_1, 105);
 if (VAR_1->default_ant.rx_chain_num == 1)
  FUNC_3(&VAR_2, VAR_0, 0);
 else
  FUNC_3(&VAR_2, VAR_0, 1);
 FUNC_2(VAR_1, 105, VAR_2);

 FUNC_0(VAR_1);

 FUNC_2(VAR_1, 92, 0x02);
 FUNC_2(VAR_1, 82, 0x82);
 FUNC_2(VAR_1, 106, 0x05);
 FUNC_2(VAR_1, 104, 0x92);
 FUNC_2(VAR_1, 88, 0x90);
 FUNC_2(VAR_1, 148, 0xc8);
 FUNC_2(VAR_1, 47, 0x48);
 FUNC_2(VAR_1, 120, 0x50);

 if (VAR_3)
  FUNC_2(VAR_1, 163, 0xbd);
 else
  FUNC_2(VAR_1, 163, 0x9d);


 FUNC_2(VAR_1, 142, 6);
 FUNC_2(VAR_1, 143, 160);
 FUNC_2(VAR_1, 142, 7);
 FUNC_2(VAR_1, 143, 161);
 FUNC_2(VAR_1, 142, 8);
 FUNC_2(VAR_1, 143, 162);


 FUNC_2(VAR_1, 31, 0x08);


 FUNC_2(VAR_1, 68, 0x0b);


 FUNC_2(VAR_1, 105, 0x04);

}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct smi_dev {int dummy; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct smi_dev *VAR_14)
{
 u32 VAR_15, VAR_16, VAR_17;


 VAR_15 = FUNC_2(VAR_6);
 VAR_15 &= ~(VAR_11);
 VAR_15 |= VAR_10;
 VAR_15 &= ~(VAR_13);
 VAR_15 |= VAR_12;
 VAR_15 &= ~(0x0f0000);
 VAR_15 |= 0x50000;
 FUNC_4(VAR_6, VAR_15);



 VAR_16 = FUNC_2(VAR_8);
 VAR_16 &= ~0x01;
 FUNC_4(VAR_8, VAR_16);
 VAR_16 = FUNC_2(VAR_1);
 VAR_16 &= ~0x40;
 VAR_16 |= 0x80;
 FUNC_4(VAR_1, VAR_16);

 VAR_16 = FUNC_2(VAR_9);
 VAR_16 &= ~0x01;
 FUNC_4(VAR_9, VAR_16);
 VAR_16 = FUNC_2(VAR_2);
 VAR_16 &= ~0x40;
 VAR_16 |= 0x80;
 FUNC_4(VAR_2, VAR_16);


 FUNC_4(VAR_3, VAR_0);
 VAR_17 = FUNC_2(VAR_4);
 FUNC_4(VAR_5, VAR_17);


 FUNC_1(VAR_7, 0x0303);
 FUNC_0(50);
 FUNC_3(VAR_7, 0x0101);
 return 0;
}

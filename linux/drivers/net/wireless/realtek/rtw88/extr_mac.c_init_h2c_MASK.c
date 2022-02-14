
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtw_fifo_conf {int rsvd_h2cq_addr; } ;
struct rtw_dev {struct rtw_fifo_conf fifo; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct rtw_dev*,char*) ;
 int FUNC_1 (struct rtw_dev*,int ) ;
 int FUNC_2 (struct rtw_dev*,scalar_t__) ;
 int FUNC_3 (struct rtw_dev*,int ,int) ;
 int FUNC_4 (struct rtw_dev*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_5(struct rtw_dev *VAR_10)
{
 struct rtw_fifo_conf *VAR_11 = &VAR_10->fifo;
 u8 VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 u32 VAR_16;
 u32 VAR_17, VAR_18;

 VAR_14 = VAR_11->rsvd_h2cq_addr << VAR_9;
 VAR_15 = VAR_8 << VAR_9;

 VAR_13 = FUNC_1(VAR_10, VAR_1);
 VAR_13 = (VAR_13 & 0xFFFC0000) | VAR_14;
 FUNC_3(VAR_10, VAR_1, VAR_13);

 VAR_13 = FUNC_1(VAR_10, VAR_5);
 VAR_13 = (VAR_13 & 0xFFFC0000) | VAR_14;
 FUNC_3(VAR_10, VAR_5, VAR_13);

 VAR_13 = FUNC_1(VAR_10, VAR_6);
 VAR_13 &= 0xFFFC0000;
 VAR_13 |= (VAR_14 + VAR_15);
 FUNC_3(VAR_10, VAR_6, VAR_13);

 VAR_12 = FUNC_2(VAR_10, VAR_2);
 VAR_12 = (u8)((VAR_12 & 0xFC) | 0x01);
 FUNC_4(VAR_10, VAR_2, VAR_12);

 VAR_12 = FUNC_2(VAR_10, VAR_2);
 VAR_12 = (u8)((VAR_12 & 0xFB) | 0x04);
 FUNC_4(VAR_10, VAR_2, VAR_12);

 VAR_12 = FUNC_2(VAR_10, VAR_7 + 1);
 VAR_12 = (u8)((VAR_12 & 0x7f) | 0x80);
 FUNC_4(VAR_10, VAR_7 + 1, VAR_12);

 VAR_17 = FUNC_1(VAR_10, VAR_4) & 0x3FFFF;
 VAR_18 = FUNC_1(VAR_10, VAR_3) & 0x3FFFF;
 VAR_16 = VAR_17 >= VAR_18 ? VAR_15 - (VAR_17 - VAR_18) : VAR_18 - VAR_17;

 if (VAR_15 != VAR_16) {
  FUNC_0(VAR_10, "H2C queue mismatch\n");
  return -VAR_0;
 }

 return 0;
}

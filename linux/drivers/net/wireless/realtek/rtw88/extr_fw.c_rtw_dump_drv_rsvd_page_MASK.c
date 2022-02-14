
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtw_fifo_conf {int rsvd_boundary; } ;
struct rtw_dev {struct rtw_fifo_conf fifo; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct rtw_dev*,int ) ;
 int FUNC_2 (struct rtw_dev*,int) ;
 int FUNC_3 (struct rtw_dev*,scalar_t__) ;
 int FUNC_4 (struct rtw_dev*,char*) ;
 int FUNC_5 (struct rtw_dev*,int ,int) ;
 int FUNC_6 (struct rtw_dev*,scalar_t__,int) ;

int FUNC_7(struct rtw_dev *VAR_8,
      u32 VAR_9, u32 VAR_10, u32 *VAR_11)
{
 struct rtw_fifo_conf *VAR_12 = &VAR_8->fifo;
 u32 VAR_13, VAR_14;
 u16 VAR_15;
 u16 VAR_16 = 0;
 u16 VAR_17;
 u8 VAR_18;

 if (VAR_10 & 0x3) {
  FUNC_4(VAR_8, "should be 4-byte aligned\n");
  return -VAR_0;
 }

 VAR_9 += VAR_12->rsvd_boundary << VAR_7;
 VAR_13 = VAR_9 & (VAR_2 - 1);
 VAR_15 = VAR_9 >> VAR_3;
 VAR_15 += VAR_6;

 VAR_18 = FUNC_3(VAR_8, VAR_5 + 2);
 VAR_17 = FUNC_1(VAR_8, VAR_4) & 0xf000;


 FUNC_6(VAR_8, VAR_5, VAR_18 | FUNC_0(3));

 do {
  FUNC_5(VAR_8, VAR_4, VAR_15 | VAR_17);

  for (VAR_14 = VAR_1 + VAR_13;
       VAR_14 < VAR_1 + VAR_2; VAR_14 += 4) {
   VAR_11[VAR_16++] = FUNC_2(VAR_8, VAR_14);
   VAR_10 -= 4;
   if (VAR_10 == 0)
    goto out;
  }

  VAR_13 = 0;
  VAR_15++;
 } while (VAR_10);

out:
 FUNC_5(VAR_8, VAR_4, VAR_17);
 FUNC_6(VAR_8, VAR_5 + 2, VAR_18);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int rsvd_boundary; } ;
struct rtw_dev {TYPE_1__ fifo; int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct rtw_dev*,int ,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rtw_dev*,char*) ;
 int FUNC_3 (struct rtw_dev*,int*,int ) ;
 int FUNC_4 (struct rtw_dev*,scalar_t__) ;
 int FUNC_5 (struct rtw_dev*,int ,int) ;
 int FUNC_6 (struct rtw_dev*,scalar_t__,int) ;

int FUNC_7(struct rtw_dev *VAR_9, u16 VAR_10,
    u8 *VAR_11, u32 VAR_12)
{
 u8 VAR_13[2];
 u8 VAR_14;
 u16 VAR_15;
 int VAR_16;

 FUNC_1(&VAR_9->mutex);

 if (!VAR_12)
  return -VAR_5;

 VAR_10 &= VAR_3;
 FUNC_5(VAR_9, VAR_7, VAR_10 | VAR_0);

 VAR_14 = FUNC_4(VAR_9, VAR_6 + 1);
 VAR_13[0] = VAR_14;
 VAR_14 |= VAR_1 >> 8;
 FUNC_6(VAR_9, VAR_6 + 1, VAR_14);

 VAR_14 = FUNC_4(VAR_9, VAR_8 + 2);
 VAR_13[1] = VAR_14;
 VAR_14 &= ~(VAR_2 >> 16);
 FUNC_6(VAR_9, VAR_8 + 2, VAR_14);

 VAR_16 = FUNC_3(VAR_9, VAR_11, VAR_12);
 if (VAR_16) {
  FUNC_2(VAR_9, "failed to write data to rsvd page\n");
  goto restore;
 }

 if (!FUNC_0(VAR_9, VAR_7, VAR_0, 1)) {
  FUNC_2(VAR_9, "error beacon valid\n");
  VAR_16 = -VAR_4;
 }

restore:
 VAR_15 = VAR_9->fifo.rsvd_boundary;
 FUNC_5(VAR_9, VAR_7,
      VAR_15 | VAR_0);
 FUNC_6(VAR_9, VAR_8 + 2, VAR_13[1]);
 FUNC_6(VAR_9, VAR_6 + 1, VAR_13[0]);

 return VAR_16;
}

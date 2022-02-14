
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int last_box_num; int lock; } ;
struct rtw_dev {TYPE_1__ h2c; } ;


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
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct rtw_dev*,int ,char*,int,int,int,int,int,int,int,int) ;
 int FUNC_2 (struct rtw_dev*,char*) ;
 int FUNC_3 (struct rtw_dev*,int ) ;
 int FUNC_4 (struct rtw_dev*,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct rtw_dev *VAR_10,
        u8 *VAR_11)
{
 u8 VAR_12;
 u8 VAR_13;
 u32 VAR_14, VAR_15;
 u32 VAR_16;
 int VAR_17;

 FUNC_1(VAR_10, VAR_9,
  "send H2C content %02x%02x%02x%02x %02x%02x%02x%02x\n",
  VAR_11[3], VAR_11[2], VAR_11[1], VAR_11[0],
  VAR_11[7], VAR_11[6], VAR_11[5], VAR_11[4]);

 FUNC_5(&VAR_10->h2c.lock);

 VAR_12 = VAR_10->h2c.last_box_num;
 switch (VAR_12) {
 case 0:
  VAR_14 = VAR_0;
  VAR_15 = VAR_1;
  break;
 case 1:
  VAR_14 = VAR_2;
  VAR_15 = VAR_3;
  break;
 case 2:
  VAR_14 = VAR_4;
  VAR_15 = VAR_5;
  break;
 case 3:
  VAR_14 = VAR_6;
  VAR_15 = VAR_7;
  break;
 default:
  FUNC_0(1, "invalid h2c mail box number\n");
  goto out;
 }

 VAR_16 = 20;
 do {
  VAR_13 = FUNC_3(VAR_10, VAR_8);
 } while ((VAR_13 >> VAR_12) & 0x1 && --VAR_16 > 0);

 if (!VAR_16) {
  FUNC_2(VAR_10, "failed to send h2c command\n");
  goto out;
 }

 for (VAR_17 = 0; VAR_17 < 4; VAR_17++)
  FUNC_4(VAR_10, VAR_14 + VAR_17, VAR_11[VAR_17]);
 for (VAR_17 = 0; VAR_17 < 4; VAR_17++)
  FUNC_4(VAR_10, VAR_15 + VAR_17, VAR_11[VAR_17 + 4]);

 if (++VAR_10->h2c.last_box_num >= 4)
  VAR_10->h2c.last_box_num = 0;

out:
 FUNC_6(&VAR_10->h2c.lock);
}

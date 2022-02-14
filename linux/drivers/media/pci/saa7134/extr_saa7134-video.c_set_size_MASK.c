
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int left; int top; int width; int height; } ;
struct saa7134_dev {int ctl_y_odd; int ctl_y_even; TYPE_1__ crop_current; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int ,int) ;
 int FUNC_19 (struct saa7134_dev*,int,int) ;
 int FUNC_20 (struct saa7134_dev*,int,int) ;
 int FUNC_21 (char*,int,int,int) ;

__attribute__((used)) static void FUNC_22(struct saa7134_dev *VAR_0, int VAR_1,
       int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5,VAR_6,VAR_7,VAR_8,VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14 = VAR_4 ? 2 : 1;


 VAR_10 = VAR_0->crop_current.left;
 VAR_12 = VAR_0->crop_current.top/2;
 VAR_11 = (VAR_0->crop_current.left + VAR_0->crop_current.width -1);
 VAR_13 = (VAR_0->crop_current.top + VAR_0->crop_current.height -1)/2;

 FUNC_18(FUNC_2(VAR_1), VAR_10 & 0xff);
 FUNC_18(FUNC_3(VAR_1), VAR_10 >> 8);
 FUNC_18(FUNC_4(VAR_1), VAR_11 & 0xff);
 FUNC_18(FUNC_5(VAR_1), VAR_11 >> 8);
 FUNC_18(FUNC_10(VAR_1), VAR_12 & 0xff);
 FUNC_18(FUNC_11(VAR_1), VAR_12 >> 8);
 FUNC_18(FUNC_12(VAR_1), VAR_13 & 0xff);
 FUNC_18(FUNC_13(VAR_1), VAR_13 >> 8);

 VAR_5 = VAR_0->crop_current.width / VAR_2;
 if (0 == VAR_5)
  VAR_5 = 1;
 VAR_6 = 1024 * VAR_0->crop_current.width / VAR_5 / VAR_2;
 VAR_7 = 512 * VAR_14 * VAR_0->crop_current.height / VAR_3;
 FUNC_21("prescale=%d xscale=%d yscale=%d\n",
    VAR_5, VAR_6, VAR_7);
 FUNC_19(VAR_0,VAR_1,VAR_5);
 FUNC_18(FUNC_0(VAR_1), VAR_6 & 0xff);
 FUNC_18(FUNC_1(VAR_1), VAR_6 >> 8);
 FUNC_20(VAR_0,VAR_1,VAR_7);

 FUNC_18(FUNC_8(VAR_1), VAR_2 & 0xff);
 FUNC_18(FUNC_9(VAR_1), VAR_2 >> 8);
 FUNC_18(FUNC_6(VAR_1), VAR_3/VAR_14 & 0xff);
 FUNC_18(FUNC_7(VAR_1), VAR_3/VAR_14 >> 8);


 VAR_9 = VAR_0->ctl_y_odd;
 VAR_8 = VAR_0->ctl_y_even;
 FUNC_18(FUNC_14(VAR_1), VAR_9);
 FUNC_18(FUNC_15(VAR_1), VAR_8);
 FUNC_18(FUNC_16(VAR_1), VAR_9);
 FUNC_18(FUNC_17(VAR_1), VAR_8);
}

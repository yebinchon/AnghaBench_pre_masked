
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct rt2x00_dev {TYPE_3__* rx; TYPE_2__* ops; } ;
struct TYPE_6__ {int data_size; } ;
struct TYPE_5__ {TYPE_1__* lib; } ;
struct TYPE_4__ {scalar_t__ (* set_device_state ) (struct rt2x00_dev*,int ) ;} ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int FUNC_0 (struct rt2x00_dev*,int ) ;
 int FUNC_1 (struct rt2x00_dev*,int ,int) ;
 scalar_t__ FUNC_2 (struct rt2x00_dev*) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (struct rt2x00_dev*,int ,int,int,int ) ;
 scalar_t__ FUNC_5 (struct rt2x00_dev*,int ) ;

__attribute__((used)) static int FUNC_6(struct rt2x00_dev *VAR_63)
{
 u16 VAR_64;

 FUNC_4(VAR_63, VAR_60, 0x0001,
        VAR_61, VAR_23);
 FUNC_4(VAR_63, VAR_62, 0x0308,
        0x00f0, VAR_23);

 VAR_64 = FUNC_0(VAR_63, VAR_37);
 FUNC_3(&VAR_64, VAR_39, 1);
 FUNC_1(VAR_63, VAR_37, VAR_64);

 FUNC_1(VAR_63, VAR_5, 0x1111);
 FUNC_1(VAR_63, VAR_6, 0x1e11);

 VAR_64 = FUNC_0(VAR_63, VAR_3);
 FUNC_3(&VAR_64, VAR_13, 1);
 FUNC_3(&VAR_64, VAR_11, 1);
 FUNC_3(&VAR_64, VAR_12, 0);
 FUNC_1(VAR_63, VAR_3, VAR_64);

 VAR_64 = FUNC_0(VAR_63, VAR_3);
 FUNC_3(&VAR_64, VAR_13, 0);
 FUNC_3(&VAR_64, VAR_11, 0);
 FUNC_3(&VAR_64, VAR_12, 0);
 FUNC_1(VAR_63, VAR_3, VAR_64);

 VAR_64 = FUNC_0(VAR_63, VAR_40);
 FUNC_3(&VAR_64, VAR_41, 13);
 FUNC_3(&VAR_64, VAR_42, 1);
 FUNC_3(&VAR_64, VAR_43, 12);
 FUNC_3(&VAR_64, VAR_44, 1);
 FUNC_1(VAR_63, VAR_40, VAR_64);

 VAR_64 = FUNC_0(VAR_63, VAR_45);
 FUNC_3(&VAR_64, VAR_46, 10);
 FUNC_3(&VAR_64, VAR_47, 1);
 FUNC_3(&VAR_64, VAR_48, 11);
 FUNC_3(&VAR_64, VAR_49, 1);
 FUNC_1(VAR_63, VAR_45, VAR_64);

 VAR_64 = FUNC_0(VAR_63, VAR_50);
 FUNC_3(&VAR_64, VAR_51, 7);
 FUNC_3(&VAR_64, VAR_52, 1);
 FUNC_3(&VAR_64, VAR_53, 6);
 FUNC_3(&VAR_64, VAR_54, 1);
 FUNC_1(VAR_63, VAR_50, VAR_64);

 VAR_64 = FUNC_0(VAR_63, VAR_55);
 FUNC_3(&VAR_64, VAR_56, 5);
 FUNC_3(&VAR_64, VAR_57, 1);
 FUNC_3(&VAR_64, VAR_58, 0);
 FUNC_3(&VAR_64, VAR_59, 0);
 FUNC_1(VAR_63, VAR_55, VAR_64);

 VAR_64 = FUNC_0(VAR_63, VAR_31);
 FUNC_3(&VAR_64, VAR_34, 0);
 FUNC_3(&VAR_64, VAR_35, 0);
 FUNC_3(&VAR_64, VAR_33, 0);
 FUNC_3(&VAR_64, VAR_32, 0);
 FUNC_1(VAR_63, VAR_31, VAR_64);

 FUNC_1(VAR_63, VAR_38, 0xe78f);
 FUNC_1(VAR_63, VAR_17, 0xff1d);

 if (VAR_63->ops->lib->set_device_state(VAR_63, VAR_25))
  return -VAR_1;

 VAR_64 = FUNC_0(VAR_63, VAR_3);
 FUNC_3(&VAR_64, VAR_13, 0);
 FUNC_3(&VAR_64, VAR_11, 0);
 FUNC_3(&VAR_64, VAR_12, 1);
 FUNC_1(VAR_63, VAR_3, VAR_64);

 if (FUNC_2(VAR_63) >= VAR_24) {
  VAR_64 = FUNC_0(VAR_63, VAR_18);
  FUNC_3(&VAR_64, VAR_19, 0);
 } else {
  VAR_64 = 0;
  FUNC_3(&VAR_64, VAR_19, 1);
  FUNC_3(&VAR_64, VAR_20, 3);
 }
 FUNC_1(VAR_63, VAR_18, VAR_64);

 FUNC_1(VAR_63, VAR_4, 0x0002);
 FUNC_1(VAR_63, VAR_14, 0x0053);
 FUNC_1(VAR_63, VAR_7, 0x01ee);
 FUNC_1(VAR_63, VAR_8, 0x0000);

 VAR_64 = FUNC_0(VAR_63, VAR_15);
 FUNC_3(&VAR_64, VAR_16,
      VAR_63->rx->data_size);
 FUNC_1(VAR_63, VAR_15, VAR_64);

 VAR_64 = FUNC_0(VAR_63, VAR_26);
 FUNC_3(&VAR_64, VAR_27, VAR_0);
 FUNC_3(&VAR_64, VAR_28, VAR_2);
 FUNC_3(&VAR_64, VAR_29, 0);
 FUNC_1(VAR_63, VAR_26, VAR_64);

 VAR_64 = FUNC_0(VAR_63, VAR_9);
 FUNC_3(&VAR_64, VAR_10, 90);
 FUNC_1(VAR_63, VAR_9, VAR_64);

 VAR_64 = FUNC_0(VAR_63, VAR_21);
 FUNC_3(&VAR_64, VAR_22, 1);
 FUNC_1(VAR_63, VAR_21, VAR_64);

 VAR_64 = FUNC_0(VAR_63, VAR_30);
 FUNC_3(&VAR_64, VAR_36, 1);
 FUNC_1(VAR_63, VAR_30, VAR_64);

 return 0;
}

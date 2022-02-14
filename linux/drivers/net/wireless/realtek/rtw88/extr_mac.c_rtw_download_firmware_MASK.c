
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtw_fw_state {TYPE_1__* firmware; } ;
struct TYPE_4__ {scalar_t__ seq; scalar_t__ last_box_num; } ;
struct rtw_dev {TYPE_2__ h2c; } ;
struct rtw_backup_info {int dummy; } ;
struct TYPE_3__ {int size; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int const*,int ) ;
 int FUNC_1 (struct rtw_dev*) ;
 int FUNC_2 (struct rtw_dev*,struct rtw_backup_info*) ;
 int FUNC_3 (struct rtw_dev*,struct rtw_backup_info*,int) ;
 int FUNC_4 (struct rtw_dev*) ;
 int FUNC_5 (struct rtw_dev*) ;
 int FUNC_6 (struct rtw_dev*,int,int *) ;
 int FUNC_7 (struct rtw_dev*,int,int ) ;
 int FUNC_8 (struct rtw_dev*,int ) ;
 int FUNC_9 (struct rtw_dev*) ;
 int FUNC_10 (struct rtw_dev*,int ,int ) ;
 int FUNC_11 (struct rtw_dev*,scalar_t__,int ) ;
 int FUNC_12 (struct rtw_dev*,int const*,int ) ;
 int FUNC_13 (struct rtw_dev*,struct rtw_fw_state*) ;
 int FUNC_14 (struct rtw_dev*,int) ;

int FUNC_15(struct rtw_dev *VAR_8, struct rtw_fw_state *VAR_9)
{
 struct rtw_backup_info VAR_10[VAR_2];
 const u8 *VAR_11 = VAR_9->firmware->data;
 u32 VAR_12 = VAR_9->firmware->size;
 u32 VAR_13;
 int VAR_14;

 if (!FUNC_0(VAR_11, VAR_12))
  return -VAR_4;

 if (!FUNC_6(VAR_8, 0x38, &VAR_13))
  return -VAR_3;

 FUNC_14(VAR_8, 0);

 FUNC_2(VAR_8, VAR_10);
 FUNC_4(VAR_8);

 VAR_14 = FUNC_12(VAR_8, VAR_11, VAR_12);
 if (VAR_14)
  goto dlfw_fail;

 FUNC_3(VAR_8, VAR_10, VAR_2);

 FUNC_1(VAR_8);

 FUNC_14(VAR_8, 1);

 if (!FUNC_7(VAR_8, 0x38, VAR_13))
  return -VAR_3;

 VAR_14 = FUNC_5(VAR_8);
 if (VAR_14)
  goto dlfw_fail;

 FUNC_13(VAR_8, VAR_9);


 FUNC_9(VAR_8);

 VAR_8->h2c.last_box_num = 0;
 VAR_8->h2c.seq = 0;

 FUNC_8(VAR_8, VAR_7);

 return 0;

dlfw_fail:

 FUNC_10(VAR_8, VAR_5, VAR_1);
 FUNC_11(VAR_8, VAR_6 + 1, VAR_0);

 return VAR_14;
}

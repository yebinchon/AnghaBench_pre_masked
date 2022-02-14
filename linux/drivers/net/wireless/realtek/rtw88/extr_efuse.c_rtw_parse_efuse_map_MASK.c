
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtw_efuse {int logical_size; int physical_size; } ;
struct rtw_dev {struct rtw_efuse efuse; struct rtw_chip_info* chip; } ;
struct rtw_chip_info {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* read_efuse ) (struct rtw_dev*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (struct rtw_dev*,int *,int *) ;
 int FUNC_4 (struct rtw_dev*,int *) ;
 int FUNC_5 (struct rtw_dev*,char*) ;
 int FUNC_6 (struct rtw_dev*,int *) ;

int FUNC_7(struct rtw_dev *VAR_2)
{
 struct rtw_chip_info *VAR_3 = VAR_2->chip;
 struct rtw_efuse *VAR_4 = &VAR_2->efuse;
 u32 VAR_5 = VAR_4->physical_size;
 u32 VAR_6 = VAR_4->logical_size;
 u8 *VAR_7 = ((void*)0);
 u8 *VAR_8 = ((void*)0);
 int VAR_9 = 0;

 VAR_7 = FUNC_1(VAR_5, VAR_1);
 VAR_8 = FUNC_1(VAR_6, VAR_1);
 if (!VAR_7 || !VAR_8) {
  VAR_9 = -VAR_0;
  goto out_free;
 }

 VAR_9 = FUNC_4(VAR_2, VAR_7);
 if (VAR_9) {
  FUNC_5(VAR_2, "failed to dump efuse physical map\n");
  goto out_free;
 }

 FUNC_2(VAR_8, 0xff, VAR_6);
 VAR_9 = FUNC_3(VAR_2, VAR_7, VAR_8);
 if (VAR_9) {
  FUNC_5(VAR_2, "failed to dump efuse logical map\n");
  goto out_free;
 }

 VAR_9 = VAR_3->ops->read_efuse(VAR_2, VAR_8);
 if (VAR_9) {
  FUNC_5(VAR_2, "failed to read efuse map\n");
  goto out_free;
 }

out_free:
 FUNC_0(VAR_8);
 FUNC_0(VAR_7);

 return VAR_9;
}

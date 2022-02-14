
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct qlcnic_flt_header {int len; } ;
struct qlcnic_flt_entry {scalar_t__ region; } ;
struct qlcnic_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct qlcnic_flt_entry*,struct qlcnic_flt_entry*,int) ;
 int FUNC_2 (struct qlcnic_flt_entry*,int ,int) ;
 int FUNC_3 (struct qlcnic_adapter*,scalar_t__,scalar_t__*,int) ;
 int FUNC_4 (struct qlcnic_flt_entry*) ;
 struct qlcnic_flt_entry* FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct qlcnic_adapter *VAR_2, u8 VAR_3,
    struct qlcnic_flt_entry *VAR_4)
{
 struct qlcnic_flt_header VAR_5;
 struct qlcnic_flt_entry *VAR_6;
 int VAR_7 = 0, VAR_8;
 u32 VAR_9;

 FUNC_2(VAR_4, 0, sizeof(struct qlcnic_flt_entry));
 VAR_8 = FUNC_3(VAR_2, VAR_1,
      (u8 *)&VAR_5,
      sizeof(struct qlcnic_flt_header));
 if (VAR_8) {
  FUNC_0(&VAR_2->pdev->dev,
    "error reading flash layout header\n");
  return -VAR_0;
 }

 VAR_9 = VAR_5.len - sizeof(struct qlcnic_flt_header);
 VAR_6 = FUNC_5(VAR_9);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_2, VAR_1 +
      sizeof(struct qlcnic_flt_header),
      (u8 *)VAR_6, VAR_9);
 if (VAR_8) {
  FUNC_0(&VAR_2->pdev->dev,
    "error reading flash layout entries\n");
  goto err_out;
 }

 while (VAR_7 < (VAR_9/sizeof(struct qlcnic_flt_entry))) {
  if (VAR_6[VAR_7].region == VAR_3)
   break;
  VAR_7++;
 }
 if (VAR_7 >= (VAR_9/sizeof(struct qlcnic_flt_entry))) {
  FUNC_0(&VAR_2->pdev->dev,
    "region=%x not found in %d regions\n", VAR_3, VAR_7);
  VAR_8 = -VAR_0;
  goto err_out;
 }
 FUNC_1(VAR_4, &VAR_6[VAR_7], sizeof(struct qlcnic_flt_entry));

err_out:
 FUNC_4(VAR_6);
 return VAR_8;
}

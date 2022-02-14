
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dsaf_tbl_tcam_mcast_cfg {int dummy; } ;
struct dsaf_tbl_tcam_data {int dummy; } ;
struct dsaf_device {int tcam_lock; } ;


 int FUNC_0 (struct dsaf_device*,int ) ;
 int FUNC_1 (struct dsaf_device*,struct dsaf_tbl_tcam_data*) ;
 int FUNC_2 (struct dsaf_device*) ;
 int FUNC_3 (struct dsaf_device*,struct dsaf_tbl_tcam_data*) ;
 int FUNC_4 (struct dsaf_device*,struct dsaf_tbl_tcam_mcast_cfg*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(
 struct dsaf_device *VAR_0, u32 VAR_1,
 struct dsaf_tbl_tcam_data *VAR_2,
 struct dsaf_tbl_tcam_data *VAR_3,
 struct dsaf_tbl_tcam_mcast_cfg *VAR_4)
{
 FUNC_5(&VAR_0->tcam_lock);


 FUNC_0(VAR_0, VAR_1);

 FUNC_1(VAR_0, VAR_2);

 FUNC_4(VAR_0, VAR_4);

 if (VAR_3)
  FUNC_3(VAR_0, VAR_3);


 FUNC_2(VAR_0);

 FUNC_6(&VAR_0->tcam_lock);
}

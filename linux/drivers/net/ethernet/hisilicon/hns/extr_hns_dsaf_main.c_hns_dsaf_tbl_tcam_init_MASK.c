
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dsaf_tbl_tcam_ucast_cfg {int member_4; int member_3; int member_2; int member_1; int member_0; } ;
struct dsaf_tbl_tcam_data {int member_1; int member_0; } ;
struct dsaf_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct dsaf_device*,scalar_t__,struct dsaf_tbl_tcam_data*,struct dsaf_tbl_tcam_ucast_cfg*) ;

__attribute__((used)) static void FUNC_1(struct dsaf_device *VAR_1)
{
 u32 VAR_2;
 struct dsaf_tbl_tcam_data VAR_3[] = {{0, 0} };
 struct dsaf_tbl_tcam_ucast_cfg VAR_4[] = {{0, 0, 0, 0, 0} };


 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
}

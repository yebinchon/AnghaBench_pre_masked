
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dsaf_tbl_tcam_ucast_cfg {int tbl_ucast_out_port; int tbl_ucast_dvc; int tbl_ucast_old_en; int tbl_ucast_item_vld; int tbl_ucast_mac_discard; } ;
struct dsaf_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct dsaf_device*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct dsaf_device*,int ,int ) ;

__attribute__((used)) static void FUNC_4(
 struct dsaf_device *VAR_7,
 struct dsaf_tbl_tcam_ucast_cfg *VAR_8)
{
 u32 VAR_9;

 VAR_9 = FUNC_0(VAR_7, VAR_0);
 FUNC_1(VAR_9, VAR_3,
       VAR_8->tbl_ucast_mac_discard);
 FUNC_1(VAR_9, VAR_2,
       VAR_8->tbl_ucast_item_vld);
 FUNC_1(VAR_9, VAR_4,
       VAR_8->tbl_ucast_old_en);
 FUNC_1(VAR_9, VAR_1,
       VAR_8->tbl_ucast_dvc);
 FUNC_2(VAR_9, VAR_5,
         VAR_6,
         VAR_8->tbl_ucast_out_port);
 FUNC_3(VAR_7, VAR_0, VAR_9);
}

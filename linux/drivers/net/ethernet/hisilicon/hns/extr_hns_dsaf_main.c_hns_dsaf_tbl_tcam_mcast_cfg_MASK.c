
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dsaf_tbl_tcam_mcast_cfg {int * tbl_mcast_port_msk; int tbl_mcast_old_en; int tbl_mcast_item_vld; } ;
struct dsaf_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct dsaf_device*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct dsaf_device*,int ,int ) ;

__attribute__((used)) static void FUNC_4(
 struct dsaf_device *VAR_9,
 struct dsaf_tbl_tcam_mcast_cfg *VAR_10)
{
 u32 VAR_11;

 VAR_11 = FUNC_0(VAR_9, VAR_8);
 FUNC_1(VAR_11, VAR_0,
       VAR_10->tbl_mcast_item_vld);
 FUNC_1(VAR_11, VAR_1,
       VAR_10->tbl_mcast_old_en);
 FUNC_2(VAR_11, VAR_2,
         VAR_3,
         VAR_10->tbl_mcast_port_msk[4]);
 FUNC_3(VAR_9, VAR_8, VAR_11);

 FUNC_3(VAR_9, VAR_7,
         VAR_10->tbl_mcast_port_msk[3]);

 FUNC_3(VAR_9, VAR_6,
         VAR_10->tbl_mcast_port_msk[2]);

 FUNC_3(VAR_9, VAR_5,
         VAR_10->tbl_mcast_port_msk[1]);

 FUNC_3(VAR_9, VAR_4,
         VAR_10->tbl_mcast_port_msk[0]);
}

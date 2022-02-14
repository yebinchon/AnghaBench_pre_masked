
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct dsaf_tbl_tcam_mcast_cfg {void** tbl_mcast_port_msk; void* tbl_mcast_old_en; void* tbl_mcast_item_vld; } ;
struct dsaf_tbl_tcam_data {void* tbl_tcam_data_low; void* tbl_tcam_data_high; } ;
struct dsaf_device {int tcam_lock; } ;


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
 void* FUNC_0 (void*,int ) ;
 void* FUNC_1 (void*,int ,int ) ;
 void* FUNC_2 (struct dsaf_device*,int ) ;
 int FUNC_3 (struct dsaf_device*,void*) ;
 int FUNC_4 (struct dsaf_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(
 struct dsaf_device *VAR_11, u32 VAR_12,
 struct dsaf_tbl_tcam_data *VAR_13,
 struct dsaf_tbl_tcam_mcast_cfg *VAR_14)
{
 u32 VAR_15;

 FUNC_5(&VAR_11->tcam_lock);


 FUNC_3(VAR_11, VAR_12);


 FUNC_4(VAR_11);


 VAR_13->tbl_tcam_data_high =
  FUNC_2(VAR_11, VAR_9);
 VAR_13->tbl_tcam_data_low =
  FUNC_2(VAR_11, VAR_10);


 VAR_14->tbl_mcast_port_msk[0] =
  FUNC_2(VAR_11, VAR_4);
 VAR_14->tbl_mcast_port_msk[1] =
  FUNC_2(VAR_11, VAR_5);
 VAR_14->tbl_mcast_port_msk[2] =
  FUNC_2(VAR_11, VAR_6);
 VAR_14->tbl_mcast_port_msk[3] =
  FUNC_2(VAR_11, VAR_7);

 VAR_15 = FUNC_2(VAR_11, VAR_8);
 VAR_14->tbl_mcast_item_vld =
  FUNC_0(VAR_15, VAR_0);
 VAR_14->tbl_mcast_old_en =
  FUNC_0(VAR_15, VAR_1);
 VAR_14->tbl_mcast_port_msk[4] =
  FUNC_1(VAR_15, VAR_2,
          VAR_3);

 FUNC_6(&VAR_11->tcam_lock);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct dsaf_tbl_tcam_ucast_cfg {void* tbl_ucast_dvc; int tbl_ucast_out_port; void* tbl_ucast_mac_discard; void* tbl_ucast_old_en; void* tbl_ucast_item_vld; } ;
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
 void* FUNC_0 (void*,int ) ;
 int FUNC_1 (void*,int ,int ) ;
 void* FUNC_2 (struct dsaf_device*,int ) ;
 int FUNC_3 (struct dsaf_device*,void*) ;
 int FUNC_4 (struct dsaf_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(
 struct dsaf_device *VAR_10, u32 VAR_11,
 struct dsaf_tbl_tcam_data *VAR_12,
 struct dsaf_tbl_tcam_ucast_cfg *VAR_13)
{
 u32 VAR_14;
 u32 VAR_15;

 FUNC_5(&VAR_10->tcam_lock);


 FUNC_3(VAR_10, VAR_11);


 FUNC_4(VAR_10);


 VAR_12->tbl_tcam_data_high
  = FUNC_2(VAR_10, VAR_4);
 VAR_12->tbl_tcam_data_low
  = FUNC_2(VAR_10, VAR_5);


 VAR_14 = FUNC_2(VAR_10,
     VAR_2);
 VAR_15 = FUNC_2(VAR_10,
     VAR_3);

 VAR_13->tbl_ucast_item_vld
  = FUNC_0(VAR_15,
          VAR_0);
 VAR_13->tbl_ucast_old_en
  = FUNC_0(VAR_15, VAR_1);
 VAR_13->tbl_ucast_mac_discard
  = FUNC_0(VAR_14,
          VAR_7);
 VAR_13->tbl_ucast_out_port
  = FUNC_1(VAR_14,
     VAR_8,
     VAR_9);
 VAR_13->tbl_ucast_dvc
  = FUNC_0(VAR_14, VAR_6);

 FUNC_6(&VAR_10->tcam_lock);
}

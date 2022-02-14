
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mac_driver {int (* config_max_frame_length ) (struct mac_driver*,int) ;} ;
struct hns_mac_cb {int max_frm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct mac_driver* FUNC_0 (struct hns_mac_cb*) ;
 int FUNC_1 (struct mac_driver*,int) ;

int FUNC_2(struct hns_mac_cb *VAR_7, u32 VAR_8, u32 VAR_9)
{
 struct mac_driver *VAR_10 = FUNC_0(VAR_7);
 u32 VAR_11 = VAR_8 + VAR_4 + VAR_2 + VAR_6;

 if (VAR_11 > VAR_5 * VAR_9)
  return -VAR_1;

 if (!VAR_10->config_max_frame_length)
  return -VAR_0;


 if (VAR_11 < (VAR_3 + VAR_2 + VAR_6))
  VAR_11 = (VAR_3 + VAR_2 + VAR_6);

 VAR_10->config_max_frame_length(VAR_10, VAR_11);

 VAR_7->max_frm = VAR_11;

 return 0;
}

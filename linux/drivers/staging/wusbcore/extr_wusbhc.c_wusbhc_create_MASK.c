
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusbhc {int dnts_num_slots; int dnts_interval; int mutex; int retry_count; scalar_t__ phy_rate; int trust_timeout; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct wusbhc*) ;
 int FUNC_2 (struct wusbhc*) ;
 int FUNC_3 (struct wusbhc*) ;
 int FUNC_4 (struct wusbhc*) ;
 int FUNC_5 (struct wusbhc*) ;
 int FUNC_6 (struct wusbhc*) ;
 int FUNC_7 (struct wusbhc*) ;

int FUNC_8(struct wusbhc *VAR_3)
{
 int VAR_4 = 0;


 VAR_3->trust_timeout = VAR_2;
 VAR_3->phy_rate = VAR_0 - 1;
 VAR_3->dnts_num_slots = 4;
 VAR_3->dnts_interval = 2;
 VAR_3->retry_count = VAR_1;

 FUNC_0(&VAR_3->mutex);
 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4 < 0)
  goto error_mmcie_create;
 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 < 0)
  goto error_devconnect_create;
 VAR_4 = FUNC_5(VAR_3);
 if (VAR_4 < 0)
  goto error_rh_create;
 VAR_4 = FUNC_7(VAR_3);
 if (VAR_4 < 0)
  goto error_sec_create;
 return 0;

error_sec_create:
 FUNC_6(VAR_3);
error_rh_create:
 FUNC_2(VAR_3);
error_devconnect_create:
 FUNC_4(VAR_3);
error_mmcie_create:
 return VAR_4;
}

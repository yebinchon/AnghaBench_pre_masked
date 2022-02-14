
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct dsaf_drv_priv {TYPE_1__* soft_mac_tbl; } ;
struct dsaf_device {int tcam_lock; scalar_t__ tcam_max_num; int dsaf_ver; } ;
struct TYPE_2__ {int index; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct dsaf_device*) ;
 int FUNC_2 (scalar_t__,int) ;
 scalar_t__ FUNC_3 (struct dsaf_device*) ;
 int FUNC_4 (struct dsaf_device*) ;
 int FUNC_5 (struct dsaf_device*) ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct dsaf_device *VAR_4)
{
 struct dsaf_drv_priv *VAR_5 =
     (struct dsaf_drv_priv *)FUNC_3(VAR_4);
 u32 VAR_6;
 int VAR_7;

 if (FUNC_1(VAR_4))
  return 0;

 if (FUNC_0(VAR_4->dsaf_ver))
  VAR_4->tcam_max_num = VAR_2;
 else
  VAR_4->tcam_max_num =
   VAR_2 - VAR_0;

 FUNC_6(&VAR_4->tcam_lock);
 VAR_7 = FUNC_4(VAR_4);
 if (VAR_7)
  return VAR_7;


 VAR_5->soft_mac_tbl = FUNC_7(FUNC_2(VAR_2,
      sizeof(*VAR_5->soft_mac_tbl)));
 if (!VAR_5->soft_mac_tbl) {
  VAR_7 = -VAR_3;
  goto remove_hw;
 }


 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  (VAR_5->soft_mac_tbl + VAR_6)->index = VAR_1;

 return 0;

remove_hw:
 FUNC_5(VAR_4);
 return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int svc_map; } ;
struct ath10k {TYPE_1__ wmi; } ;
typedef enum wmi_host_platform_type { ____Placeholder_wmi_host_platform_type } wmi_host_platform_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath10k*,char*,int) ;
 int FUNC_1 (struct ath10k*,int,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

int FUNC_3(struct ath10k *VAR_4, u32 VAR_5)
{
 enum wmi_host_platform_type VAR_6;
 int VAR_7;

 if (FUNC_2(VAR_3, VAR_4->wmi.svc_map))
  VAR_6 = VAR_2;
 else
  VAR_6 = VAR_1;

 VAR_7 = FUNC_1(VAR_4, VAR_6, VAR_5);

 if (VAR_7 && VAR_7 != -VAR_0) {
  FUNC_0(VAR_4, "failed to configure ext resource: %d\n", VAR_7);
  return VAR_7;
 }

 return 0;
}

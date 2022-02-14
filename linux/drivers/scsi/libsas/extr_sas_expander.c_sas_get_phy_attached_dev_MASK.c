
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct discover_resp {int attached_sas_addr; } ;
struct smp_resp {struct discover_resp disc; } ;
struct domain_device {int dummy; } ;
typedef enum sas_device_type { ____Placeholder_sas_device_type } sas_device_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct smp_resp* FUNC_0 (int ) ;
 int FUNC_1 (struct smp_resp*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (struct domain_device*,int,struct smp_resp*) ;
 int FUNC_5 (struct discover_resp*) ;

__attribute__((used)) static int FUNC_6(struct domain_device *VAR_3, int VAR_4,
        u8 *VAR_5, enum sas_device_type *VAR_6)
{
 int VAR_7;
 struct smp_resp *VAR_8;
 struct discover_resp *VAR_9;

 VAR_8 = FUNC_0(VAR_0);
 if (!VAR_8)
  return -VAR_1;
 VAR_9 = &VAR_8->disc;

 VAR_7 = FUNC_4(VAR_3, VAR_4, VAR_8);
 if (VAR_7 == 0) {
  FUNC_2(VAR_5, VAR_8->disc.attached_sas_addr,
         VAR_2);
  *VAR_6 = FUNC_5(VAR_9);
  if (*VAR_6 == 0)
   FUNC_3(VAR_5, 0, VAR_2);
 }
 FUNC_1(VAR_8);
 return VAR_7;
}

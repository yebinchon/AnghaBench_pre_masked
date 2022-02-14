
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ks_wlan_private {scalar_t__ dev_state; } ;
struct TYPE_2__ {int body; void* type; void* size; } ;
struct hostif_mib_set_request_t {TYPE_1__ mib_value; int mib_attribute; } ;
typedef enum mib_data_type { ____Placeholder_mib_data_type } mib_data_type ;
typedef enum mib_attribute { ____Placeholder_mib_attribute } mib_attribute ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 struct hostif_mib_set_request_t* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,void*,size_t) ;
 int FUNC_5 (struct ks_wlan_private*,struct hostif_mib_set_request_t*,int ) ;

__attribute__((used)) static void FUNC_6(struct ks_wlan_private *VAR_2,
       enum mib_attribute VAR_3,
       enum mib_data_type VAR_4,
       void *VAR_5, size_t VAR_6)
{
 struct hostif_mib_set_request_t *VAR_7;

 if (VAR_2->dev_state < VAR_0)
  return;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return;

 VAR_7->mib_attribute = FUNC_1(VAR_3);
 VAR_7->mib_value.size = FUNC_0(VAR_6);
 VAR_7->mib_value.type = FUNC_0(VAR_4);
 FUNC_4(&VAR_7->mib_value.body, VAR_5, VAR_6);

 FUNC_5(VAR_2, VAR_7, FUNC_2(sizeof(*VAR_7) + VAR_6));
}

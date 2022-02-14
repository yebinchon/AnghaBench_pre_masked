
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {void* len; void* type; } ;
struct mrvl_ie_cf_param_set {TYPE_1__ header; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(u8 *VAR_1)
{
 struct mrvl_ie_cf_param_set *VAR_2 = (void *)VAR_1;
 VAR_2->header.type = FUNC_0(VAR_0);
 VAR_2->header.len = FUNC_0(sizeof(*VAR_2)-sizeof(VAR_2->header));
 return sizeof(*VAR_2);
}

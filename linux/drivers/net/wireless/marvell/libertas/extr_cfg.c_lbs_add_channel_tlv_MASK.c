
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {void* len; void* type; } ;
struct mrvl_ie_ds_param_set {int channel; TYPE_1__ header; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(u8 *VAR_1, u8 VAR_2)
{
 struct mrvl_ie_ds_param_set *VAR_3 = (void *) VAR_1;






 VAR_3->header.type = FUNC_0(VAR_0);
 VAR_3->header.len = FUNC_0(sizeof(*VAR_3)-sizeof(VAR_3->header));
 VAR_3->channel = VAR_2;
 return sizeof(*VAR_3);
}

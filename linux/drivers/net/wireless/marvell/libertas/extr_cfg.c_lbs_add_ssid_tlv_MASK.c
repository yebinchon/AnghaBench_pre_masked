
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {void* len; void* type; } ;
struct mrvl_ie_ssid_param_set {int ssid; TYPE_1__ header; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int const*,int) ;

__attribute__((used)) static int FUNC_2(u8 *VAR_1, const u8 *VAR_2, int VAR_3)
{
 struct mrvl_ie_ssid_param_set *VAR_4 = (void *)VAR_1;






 VAR_4->header.type = FUNC_0(VAR_0);
 VAR_4->header.len = FUNC_0(VAR_3);
 FUNC_1(VAR_4->ssid, VAR_2, VAR_3);
 return sizeof(VAR_4->header) + VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {void* len; void* type; } ;
struct mrvl_ie_rates_param_set {TYPE_1__ header; } ;


 size_t VAR_0 ;
 void* FUNC_0 (size_t) ;
 size_t FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(u8 *VAR_1)
{
 size_t VAR_2;
 struct mrvl_ie_rates_param_set *VAR_3 = (void *)VAR_1;






 VAR_3->header.type = FUNC_0(VAR_0);
 VAR_1 += sizeof(VAR_3->header);
 VAR_2 = FUNC_1(VAR_1);
 VAR_1 += VAR_2;
 VAR_3->header.len = FUNC_0(VAR_2);
 return sizeof(VAR_3->header) + VAR_2;
}

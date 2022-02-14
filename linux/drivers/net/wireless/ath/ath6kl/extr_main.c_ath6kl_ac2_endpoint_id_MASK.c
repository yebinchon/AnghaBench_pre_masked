
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct ath6kl {int* ac2ep_map; } ;
typedef enum htc_endpoint_id { ____Placeholder_htc_endpoint_id } htc_endpoint_id ;



enum htc_endpoint_id FUNC_0(void *VAR_0, u8 VAR_1)
{
 struct ath6kl *VAR_2 = VAR_0;
 return VAR_2->ac2ep_map[VAR_1];
}

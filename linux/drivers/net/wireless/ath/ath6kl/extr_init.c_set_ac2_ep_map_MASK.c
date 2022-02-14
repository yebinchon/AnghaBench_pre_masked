
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct ath6kl {int* ac2ep_map; size_t* ep2ac_map; } ;
typedef enum htc_endpoint_id { ____Placeholder_htc_endpoint_id } htc_endpoint_id ;



__attribute__((used)) static inline void FUNC_0(struct ath6kl *VAR_0,
      u8 VAR_1,
      enum htc_endpoint_id VAR_2)
{
 VAR_0->ac2ep_map[VAR_1] = VAR_2;
 VAR_0->ep2ac_map[VAR_2] = VAR_1;
}

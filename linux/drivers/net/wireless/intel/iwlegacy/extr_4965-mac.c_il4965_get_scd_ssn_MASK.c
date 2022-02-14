
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int status; } ;
struct il4965_tx_resp {int frame_count; TYPE_1__ u; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline u32
FUNC_1(struct il4965_tx_resp *VAR_1)
{
 return FUNC_0(&VAR_1->u.status +
       VAR_1->frame_count) & VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int * MacAddress; } ;
struct TYPE_4__ {TYPE_1__ network; } ;
struct mlme_priv {TYPE_2__ cur_network; } ;



__attribute__((used)) static inline u8 *FUNC_0(struct mlme_priv *VAR_0)
{
 return VAR_0->cur_network.network.MacAddress;
}

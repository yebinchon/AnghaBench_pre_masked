
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct xlr_net_priv {int base_addr; TYPE_1__* nd; } ;
struct TYPE_2__ {int cpu_mask; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct xlr_net_priv *VAR_4)
{
 int VAR_5 = 0;
 u64 VAR_6 = 0;


 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4->nd->cpu_mask); VAR_5++)
  VAR_6 |= (0xff << (VAR_5 * 8));

 FUNC_1(VAR_4->base_addr, VAR_0, (VAR_6 & 0xffffffff));
 FUNC_1(VAR_4->base_addr, VAR_0 + 1,
       ((VAR_6 >> 32) & 0xffffffff));

 FUNC_1(VAR_4->base_addr, VAR_1, (VAR_6 & 0xffffffff));
 FUNC_1(VAR_4->base_addr, VAR_1 + 1,
       ((VAR_6 >> 32) & 0xffffffff));

 FUNC_1(VAR_4->base_addr, VAR_2, (VAR_6 & 0xffffffff));
 FUNC_1(VAR_4->base_addr, VAR_2 + 1,
       ((VAR_6 >> 32) & 0xffffffff));

 FUNC_1(VAR_4->base_addr, VAR_3, (VAR_6 & 0xffffffff));
 FUNC_1(VAR_4->base_addr, VAR_3 + 1,
       ((VAR_6 >> 32) & 0xffffffff));
}

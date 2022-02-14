
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int arp_interval; } ;
struct bonding {TYPE_1__ params; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long,unsigned long) ;

__attribute__((used)) static bool FUNC_2(struct bonding *VAR_1, unsigned long VAR_2,
      int VAR_3)
{
 int VAR_4 = FUNC_0(VAR_1->params.arp_interval);

 return FUNC_1(VAR_0,
        VAR_2 - VAR_4,
        VAR_2 + VAR_3 * VAR_4 + VAR_4/2);
}

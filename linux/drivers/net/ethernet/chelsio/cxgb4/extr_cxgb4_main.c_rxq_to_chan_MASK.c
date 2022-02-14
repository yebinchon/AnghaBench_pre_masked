
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sge {TYPE_1__** ingr_map; scalar_t__ ingr_start; } ;
struct TYPE_4__ {unsigned int tx_chan; } ;
struct TYPE_3__ {int netdev; } ;


 TYPE_2__* FUNC_0 (int ) ;

__attribute__((used)) static unsigned int FUNC_1(const struct sge *VAR_0, unsigned int VAR_1)
{
 VAR_1 -= VAR_0->ingr_start;
 return FUNC_0(VAR_0->ingr_map[VAR_1]->netdev)->tx_chan;
}

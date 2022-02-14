
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p54_common {TYPE_1__* tx_stats; } ;
struct TYPE_2__ {scalar_t__ len; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static unsigned int FUNC_2(struct p54_common *VAR_2)
{
 unsigned int VAR_3 = 0, VAR_4;

 FUNC_1(VAR_1 > FUNC_0(VAR_2->tx_stats));






 for (VAR_4 = VAR_0; VAR_4 < VAR_1; VAR_4++)
  VAR_3 += VAR_2->tx_stats[VAR_4].len;
 return VAR_3;
}

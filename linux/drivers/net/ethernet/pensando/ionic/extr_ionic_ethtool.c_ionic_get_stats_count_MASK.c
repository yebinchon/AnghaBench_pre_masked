
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ionic_lif {int dummy; } ;
struct TYPE_2__ {scalar_t__ (* get_count ) (struct ionic_lif*) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (struct ionic_lif*) ;

__attribute__((used)) static int FUNC_1(struct ionic_lif *VAR_2)
{
 int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_4 += VAR_1[VAR_3].get_count(VAR_2);

 return VAR_4;
}

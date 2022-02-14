
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smiapp_sensor {unsigned int ssds_used; TYPE_1__* ssds; } ;
struct TYPE_2__ {int ctrl_handler; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct smiapp_sensor *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->ssds_used; VAR_1++)
  FUNC_0(&VAR_0->ssds[VAR_1].ctrl_handler);
}

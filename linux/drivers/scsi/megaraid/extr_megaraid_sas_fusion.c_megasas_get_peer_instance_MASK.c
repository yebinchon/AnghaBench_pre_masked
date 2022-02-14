
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct megasas_instance {int clusterId; scalar_t__ peerIsPresent; scalar_t__ requestorId; } ;
struct TYPE_2__ {struct megasas_instance** instance; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static struct
megasas_instance *FUNC_1(struct megasas_instance *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_2.instance[VAR_4] &&
   (VAR_2.instance[VAR_4] != VAR_3) &&
    VAR_2.instance[VAR_4]->requestorId &&
    VAR_2.instance[VAR_4]->peerIsPresent &&
   (FUNC_0((VAR_2.instance[VAR_4]->clusterId),
   VAR_3->clusterId, VAR_1) == 0))
   return VAR_2.instance[VAR_4];
 }
 return ((void*)0);
}

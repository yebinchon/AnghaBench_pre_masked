
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct cosm_device {size_t shutdown_status; int dev; } ;


 int * VAR_0 ;
 int FUNC_0 (int *,char*,int ,int ) ;

void FUNC_1(struct cosm_device *VAR_1, u8 VAR_2)
{
 FUNC_0(&VAR_1->dev, "Shutdown Status %s -> %s\n",
  VAR_0[VAR_1->shutdown_status],
  VAR_0[VAR_2]);
 VAR_1->shutdown_status = VAR_2;
}

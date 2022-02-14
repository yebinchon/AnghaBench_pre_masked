
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct visor_device {int resuming; } ;


 int VAR_0 ;
 int FUNC_0 (struct visor_device*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct visor_device *VAR_1, int VAR_2)
{
 if (!VAR_1->resuming)
  return;

 VAR_1->resuming = 0;





 FUNC_0(VAR_1, VAR_2,
          VAR_0);
}

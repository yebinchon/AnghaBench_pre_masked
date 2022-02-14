
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int visorbus_state_complete_func ;
struct visorhba_devdata {int serverdown; int serverchangingstate; int thread; } ;
struct visor_device {int device; } ;


 int VAR_0 ;
 struct visorhba_devdata* FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct visorhba_devdata*,char*) ;

__attribute__((used)) static int FUNC_2(struct visor_device *VAR_2,
      visorbus_state_complete_func VAR_3)
{
 struct visorhba_devdata *VAR_4;

 VAR_4 = FUNC_0(&VAR_2->device);
 if (!VAR_4)
  return -VAR_0;

 if (VAR_4->serverdown && !VAR_4->serverchangingstate)
  VAR_4->serverchangingstate = 1;

 VAR_4->thread = FUNC_1(VAR_1, VAR_4,
          "vhba_incming");
 VAR_4->serverdown = 0;
 VAR_4->serverchangingstate = 0;

 return 0;
}

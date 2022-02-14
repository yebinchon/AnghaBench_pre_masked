
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crq_server_adapter {int reset_wait_queue; int dev; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int * VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct crq_server_adapter *VAR_5, bool VAR_6)
{
 int VAR_7;

 if (VAR_1.state != VAR_4) {
  FUNC_1(VAR_5->dev, "*** Reset to initial state.\n");
  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
   FUNC_2(&VAR_0[VAR_7], VAR_6);

  if (VAR_6) {




   VAR_1.state = VAR_3;
  } else {
   VAR_1.state = VAR_4;
   FUNC_0(VAR_5->dev, "Device reset scheduled");
   FUNC_3(&VAR_5->reset_wait_queue);
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ctrl_response_valid; } ;
struct htc_target {int rx_lock; TYPE_1__ pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct htc_target *VAR_3)
{
 int VAR_4 = VAR_1;

 while (VAR_4 > 0) {
  FUNC_2(&VAR_3->rx_lock);

  if (VAR_3->pipe.ctrl_response_valid) {
   VAR_3->pipe.ctrl_response_valid = 0;
   FUNC_3(&VAR_3->rx_lock);
   break;
  }

  FUNC_3(&VAR_3->rx_lock);

  VAR_4--;

  FUNC_1(VAR_2);
 }

 if (VAR_4 <= 0) {
  FUNC_0("htc pipe control receive timeout!\n");
  return -VAR_0;
 }

 return 0;
}

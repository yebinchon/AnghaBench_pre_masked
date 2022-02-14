
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct at91_cf_socket {unsigned int present; int socket; TYPE_2__* pdev; TYPE_1__* board; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int det_pin; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct at91_cf_socket*) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct at91_cf_socket *VAR_4 = VAR_3;

 if (VAR_2 == FUNC_2(VAR_4->board->det_pin)) {
  unsigned VAR_5 = FUNC_0(VAR_4);


  if (VAR_5 != VAR_4->present) {
   VAR_4->present = VAR_5;
   FUNC_1(&VAR_4->pdev->dev, "card %s\n",
     VAR_5 ? "present" : "gone");
   FUNC_3(&VAR_4->socket, VAR_1);
  }
 }

 return VAR_0;
}

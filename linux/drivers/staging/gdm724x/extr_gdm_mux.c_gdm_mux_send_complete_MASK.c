
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {TYPE_1__* dev; int status; struct mux_tx* context; } ;
struct mux_tx {int cb_data; int (* callback ) (int ) ;} ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct mux_tx*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct urb *VAR_1)
{
 struct mux_tx *VAR_2 = VAR_1->context;

 if (VAR_1->status == -VAR_0) {
  FUNC_0(&VAR_1->dev->dev, "CONNRESET\n");
  FUNC_1(VAR_2);
  return;
 }

 if (VAR_2->callback)
  VAR_2->callback(VAR_2->cb_data);

 FUNC_1(VAR_2);
}

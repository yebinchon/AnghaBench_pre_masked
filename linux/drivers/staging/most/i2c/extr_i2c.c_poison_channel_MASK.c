
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct most_interface {int dummy; } ;
struct mbo {int (* complete ) (struct mbo*) ;int status; scalar_t__ processed_length; int list; } ;
struct TYPE_4__ {int list; int dwork; } ;
struct hdm_i2c {TYPE_2__ rx; TYPE_1__* client; } ;
struct TYPE_3__ {int irq; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct hdm_i2c*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct mbo* FUNC_5 (int *) ;
 int VAR_3 ;
 int FUNC_6 (struct mbo*) ;
 struct hdm_i2c* FUNC_7 (struct most_interface*) ;

__attribute__((used)) static int FUNC_8(struct most_interface *VAR_4,
     int VAR_5)
{
 struct hdm_i2c *VAR_6 = FUNC_7(VAR_4);
 struct mbo *VAR_7;

 FUNC_0(VAR_5 < 0 || VAR_5 >= VAR_2);

 if (VAR_5 == VAR_0) {
  if (!VAR_3)
   FUNC_2(VAR_6->client->irq, VAR_6);
  FUNC_1(&VAR_6->rx.dwork);

  while (!FUNC_4(&VAR_6->rx.list)) {
   VAR_7 = FUNC_5(&VAR_6->rx.list);
   FUNC_3(&VAR_7->list);

   VAR_7->processed_length = 0;
   VAR_7->status = VAR_1;
   VAR_7->complete(VAR_7);
  }
 }

 return 0;
}

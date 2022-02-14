
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct most_interface {int dummy; } ;
struct mbo {int (* complete ) (struct mbo*) ;int status; scalar_t__ buffer_length; scalar_t__ processed_length; int virt_address; int list; } ;
struct TYPE_6__ {int work; } ;
struct TYPE_4__ {TYPE_3__ dwork; scalar_t__ int_disabled; int list; } ;
struct hdm_i2c {TYPE_2__* client; TYPE_1__ rx; } ;
struct TYPE_5__ {int irq; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (struct mbo*) ;
 struct hdm_i2c* FUNC_8 (struct most_interface*) ;

__attribute__((used)) static int FUNC_9(struct most_interface *VAR_5,
     int VAR_6, struct mbo *VAR_7)
{
 struct hdm_i2c *VAR_8 = FUNC_8(VAR_5);
 int VAR_9;

 FUNC_0(VAR_6 < 0 || VAR_6 >= VAR_3);

 if (VAR_6 == VAR_0) {

  if (!VAR_4)
   FUNC_2(VAR_8->client->irq);
  FUNC_1(&VAR_8->rx.dwork);
  FUNC_5(&VAR_7->list, &VAR_8->rx.list);
  if (VAR_8->rx.int_disabled || VAR_4)
   FUNC_6(&VAR_8->rx.dwork.work);
  if (!VAR_4)
   FUNC_3(VAR_8->client->irq);
 } else {

  VAR_9 = FUNC_4(VAR_8->client, VAR_7->virt_address,
          VAR_7->buffer_length);
  if (VAR_9 <= 0) {
   VAR_7->processed_length = 0;
   VAR_7->status = VAR_1;
  } else {
   VAR_7->processed_length = VAR_7->buffer_length;
   VAR_7->status = VAR_2;
  }
  VAR_7->complete(VAR_7);
 }

 return 0;
}

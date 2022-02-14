
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct x25_asy {scalar_t__ magic; scalar_t__ xleft; int xhead; TYPE_3__* dev; } ;
struct tty_struct {TYPE_2__* ops; int flags; struct x25_asy* disc_data; } ;
struct TYPE_4__ {int tx_packets; } ;
struct TYPE_6__ {TYPE_1__ stats; } ;
struct TYPE_5__ {int (* write ) (struct tty_struct*,int,scalar_t__) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct tty_struct*,int,scalar_t__) ;
 int FUNC_3 (struct x25_asy*) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_2)
{
 int VAR_3;
 struct x25_asy *VAR_4 = VAR_2->disc_data;


 if (!VAR_4 || VAR_4->magic != VAR_1 || !FUNC_1(VAR_4->dev))
  return;

 if (VAR_4->xleft <= 0) {


  VAR_4->dev->stats.tx_packets++;
  FUNC_0(VAR_0, &VAR_2->flags);
  FUNC_3(VAR_4);
  return;
 }

 VAR_3 = VAR_2->ops->write(VAR_2, VAR_4->xhead, VAR_4->xleft);
 VAR_4->xleft -= VAR_3;
 VAR_4->xhead += VAR_3;
}

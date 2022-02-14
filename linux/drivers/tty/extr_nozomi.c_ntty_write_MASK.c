
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int index; struct port* driver_data; } ;
struct TYPE_3__ {scalar_t__ CTS; } ;
struct port {TYPE_1__ ctrl_dl; int fifo_ul; } ;
struct nozomi {int spin_mutex; TYPE_2__* pdev; struct port* port; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int,struct nozomi*) ;
 struct nozomi* FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (int *,unsigned char*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct tty_struct *VAR_4, const unsigned char *VAR_5,
        int VAR_6)
{
 int VAR_7 = -VAR_0;
 struct nozomi *VAR_8 = FUNC_3(VAR_4);
 struct port *VAR_9 = VAR_4->driver_data;
 unsigned long VAR_10;



 if (!VAR_8 || !VAR_9)
  return -VAR_1;

 VAR_7 = FUNC_4(&VAR_9->fifo_ul, (unsigned char *)VAR_5, VAR_6);

 FUNC_5(&VAR_8->spin_mutex, VAR_10);

 if (VAR_9 == &(VAR_8->port[VAR_3])) {
  if (VAR_9->ctrl_dl.CTS) {
   FUNC_0("Enable interrupt");
   FUNC_2(VAR_4->index % VAR_2, VAR_8);
  } else {
   FUNC_1(&VAR_8->pdev->dev,
    "CTS not active on modem port?\n");
  }
 } else {
  FUNC_2(VAR_4->index % VAR_2, VAR_8);
 }
 FUNC_6(&VAR_8->spin_mutex, VAR_10);

 return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int name; struct isi_port* driver_data; } ;
struct isi_port {TYPE_1__* card; } ;
struct TYPE_2__ {int card_lock; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct isi_port*) ;
 int FUNC_1 (struct isi_port*) ;
 scalar_t__ FUNC_2 (struct isi_port*,int ,char*) ;
 int FUNC_3 (struct isi_port*) ;
 int FUNC_4 (struct isi_port*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct tty_struct *VAR_3,
     unsigned int VAR_4, unsigned int VAR_5)
{
 struct isi_port *VAR_6 = VAR_3->driver_data;
 unsigned long VAR_7;

 if (FUNC_2(VAR_6, VAR_3->name, "isicom_ioctl"))
  return -VAR_0;

 FUNC_5(&VAR_6->card->card_lock, VAR_7);
 if (VAR_4 & VAR_2)
  FUNC_4(VAR_6);
 if (VAR_4 & VAR_1)
  FUNC_3(VAR_6);

 if (VAR_5 & VAR_2)
  FUNC_1(VAR_6);
 if (VAR_5 & VAR_1)
  FUNC_0(VAR_6);
 FUNC_6(&VAR_6->card->card_lock, VAR_7);

 return 0;
}

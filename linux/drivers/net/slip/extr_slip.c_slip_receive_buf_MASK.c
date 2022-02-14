
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {struct slip* disc_data; } ;
struct slip {scalar_t__ magic; int mode; TYPE_2__* dev; int flags; } ;
struct TYPE_3__ {int rx_errors; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct slip*,int ) ;
 int FUNC_2 (struct slip*,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_3, const unsigned char *VAR_4,
       char *VAR_5, int VAR_6)
{
 struct slip *VAR_7 = VAR_3->disc_data;

 if (!VAR_7 || VAR_7->magic != VAR_1 || !FUNC_0(VAR_7->dev))
  return;


 while (VAR_6--) {
  if (VAR_5 && *VAR_5++) {
   if (!FUNC_3(VAR_0, &VAR_7->flags))
    VAR_7->dev->stats.rx_errors++;
   VAR_4++;
   continue;
  }





   FUNC_1(VAR_7, *VAR_4++);
 }
}

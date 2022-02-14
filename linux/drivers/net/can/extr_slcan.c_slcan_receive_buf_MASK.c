
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {scalar_t__ disc_data; } ;
struct slcan {scalar_t__ magic; TYPE_2__* dev; int flags; } ;
struct TYPE_3__ {int rx_errors; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct slcan*,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct tty_struct *VAR_2,
         const unsigned char *VAR_3, char *VAR_4, int VAR_5)
{
 struct slcan *VAR_6 = (struct slcan *) VAR_2->disc_data;

 if (!VAR_6 || VAR_6->magic != VAR_0 || !FUNC_0(VAR_6->dev))
  return;


 while (VAR_5--) {
  if (VAR_4 && *VAR_4++) {
   if (!FUNC_2(VAR_1, &VAR_6->flags))
    VAR_6->dev->stats.rx_errors++;
   VAR_3++;
   continue;
  }
  FUNC_1(VAR_6, *VAR_3++);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct sixpack {TYPE_2__* dev; int flags; } ;
struct TYPE_3__ {int rx_errors; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int FUNC_0 (struct sixpack*,unsigned char const*,int) ;
 struct sixpack* FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct sixpack*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_1,
 const unsigned char *VAR_2, char *VAR_3, int VAR_4)
{
 struct sixpack *VAR_5;
 int VAR_6;

 if (!VAR_4)
  return;

 VAR_5 = FUNC_1(VAR_1);
 if (!VAR_5)
  return;


 VAR_6 = VAR_4;
 while (VAR_4) {
  VAR_4--;
  if (VAR_3 && *VAR_3++) {
   if (!FUNC_3(VAR_0, &VAR_5->flags))
    VAR_5->dev->stats.rx_errors++;
   continue;
  }
 }
 FUNC_0(VAR_5, VAR_2, VAR_6);

 FUNC_2(VAR_5);
 FUNC_4(VAR_1);
}

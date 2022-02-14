
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int read_wait; int fasync; TYPE_1__* ops; scalar_t__ closing; struct n_tty_data* disc_data; } ;
struct n_tty_data {int read_head; int commit_head; scalar_t__ icanon; scalar_t__ lnext; scalar_t__ raw; scalar_t__ real_raw; } ;
struct TYPE_2__ {int (* flush_chars ) (struct tty_struct*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tty_struct*) ;
 scalar_t__ FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct tty_struct*) ;
 scalar_t__ FUNC_3 (struct tty_struct*) ;
 scalar_t__ FUNC_4 (struct tty_struct*) ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 int FUNC_5 (struct tty_struct*) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (struct tty_struct*,unsigned char const*,char*,int) ;
 int FUNC_8 (struct tty_struct*,unsigned char const*,char*,int) ;
 int FUNC_9 (struct tty_struct*,unsigned char const*,char*,int) ;
 int FUNC_10 (struct tty_struct*,unsigned char const*,char*,int) ;
 int FUNC_11 (struct tty_struct*,unsigned char const*,char*,int) ;
 int FUNC_12 (struct tty_struct*,int ,char) ;
 scalar_t__ FUNC_13 (struct n_tty_data*) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (struct tty_struct*) ;
 int FUNC_16 (int *,int ) ;

__attribute__((used)) static void FUNC_17(struct tty_struct *VAR_4, const unsigned char *VAR_5,
     char *VAR_6, int VAR_7)
{
 struct n_tty_data *VAR_8 = VAR_4->disc_data;
 bool VAR_9 = FUNC_0(VAR_4) || (FUNC_1(VAR_4) && FUNC_4(VAR_4));

 if (VAR_8->real_raw)
  FUNC_10(VAR_4, VAR_5, VAR_6, VAR_7);
 else if (VAR_8->raw || (FUNC_3(VAR_4) && !VAR_9))
  FUNC_9(VAR_4, VAR_5, VAR_6, VAR_7);
 else if (VAR_4->closing && !FUNC_3(VAR_4))
  FUNC_7(VAR_4, VAR_5, VAR_6, VAR_7);
 else {
  if (VAR_8->lnext) {
   char VAR_10 = VAR_3;

   if (VAR_6)
    VAR_10 = *VAR_6++;
   FUNC_12(VAR_4, *VAR_5++, VAR_10);
   VAR_7--;
  }

  if (!VAR_9 && !FUNC_2(VAR_4))
   FUNC_8(VAR_4, VAR_5, VAR_6, VAR_7);
  else
   FUNC_11(VAR_4, VAR_5, VAR_6, VAR_7);

  FUNC_5(VAR_4);
  if (VAR_4->ops->flush_chars)
   VAR_4->ops->flush_chars(VAR_4);
 }

 if (VAR_8->icanon && !FUNC_3(VAR_4))
  return;


 FUNC_14(&VAR_8->commit_head, VAR_8->read_head);

 if (FUNC_13(VAR_8)) {
  FUNC_6(&VAR_4->fasync, VAR_2, VAR_1);
  FUNC_16(&VAR_4->read_wait, VAR_0);
 }
}

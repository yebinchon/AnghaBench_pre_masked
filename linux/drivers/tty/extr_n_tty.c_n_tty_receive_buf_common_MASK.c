
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int receive_room; int termios_rwsem; TYPE_1__* driver; int flags; struct n_tty_data* disc_data; } ;
struct n_tty_data {size_t read_head; size_t canon_head; int no_room; scalar_t__ icanon; int read_tail; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ FUNC_0 (struct tty_struct*) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct tty_struct*,unsigned char const*,char*,int) ;
 int FUNC_2 (struct tty_struct*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct tty_struct*) ;
 size_t FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct tty_struct*,int ) ;
 int FUNC_9 (struct tty_struct*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(struct tty_struct *VAR_5, const unsigned char *VAR_6,
    char *VAR_7, int VAR_8, int VAR_9)
{
 struct n_tty_data *VAR_10 = VAR_5->disc_data;
 int VAR_11, VAR_12, VAR_13 = 0, VAR_14;

 FUNC_3(&VAR_5->termios_rwsem);

 do {
  size_t VAR_15 = FUNC_6(&VAR_10->read_tail);

  VAR_11 = VAR_0 - (VAR_10->read_head - VAR_15);
  if (FUNC_0(VAR_5))
   VAR_11 = (VAR_11 + 2) / 3;
  VAR_11--;
  if (VAR_11 <= 0) {
   VAR_14 = VAR_10->icanon && VAR_10->canon_head == VAR_15;
   if (VAR_14 && VAR_11 < 0)
    VAR_10->read_head--;
   VAR_11 = VAR_14;
   VAR_10->no_room = VAR_9 && !VAR_11;
  } else
   VAR_14 = 0;

  VAR_12 = FUNC_4(VAR_8, VAR_11);
  if (!VAR_12)
   break;


  if (!VAR_14 || !VAR_7 || *VAR_7 != VAR_3)
   FUNC_1(VAR_5, VAR_6, VAR_7, VAR_12);

  VAR_6 += VAR_12;
  if (VAR_7)
   VAR_7 += VAR_12;
  VAR_8 -= VAR_12;
  VAR_13 += VAR_12;
 } while (!FUNC_7(VAR_2, &VAR_5->flags));

 VAR_5->receive_room = VAR_11;


 if (VAR_5->driver->type == VAR_1) {
  if (VAR_14) {
   FUNC_8(VAR_5, VAR_4);
   FUNC_9(VAR_5);
   FUNC_2(VAR_5, 0);
  }
 } else
  FUNC_5(VAR_5);

 FUNC_10(&VAR_5->termios_rwsem);

 return VAR_13;
}

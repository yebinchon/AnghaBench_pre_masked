
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int c_lflag; } ;
struct tty_struct {int read_wait; int write_wait; int flow_stopped; TYPE_2__* driver; TYPE_1__ termios; struct n_tty_data* disc_data; } ;
struct n_tty_data {int line_start; int read_tail; int canon_head; int push; int read_head; int commit_head; int icanon; int raw; int real_raw; int char_map; scalar_t__ lnext; scalar_t__ erasing; int read_flags; } ;
struct ktermios {int c_lflag; int c_iflag; } ;
struct TYPE_4__ {int flags; } ;


 char FUNC_0 (struct tty_struct*) ;
 char FUNC_1 (struct tty_struct*) ;
 char FUNC_2 (struct tty_struct*) ;
 char FUNC_3 (struct tty_struct*) ;
 int VAR_0 ;
 int VAR_1 ;
 char FUNC_4 (struct tty_struct*) ;
 int VAR_2 ;
 int FUNC_5 (struct tty_struct*) ;
 scalar_t__ FUNC_6 (struct tty_struct*) ;
 scalar_t__ FUNC_7 (struct tty_struct*) ;
 scalar_t__ FUNC_8 (struct tty_struct*) ;
 scalar_t__ FUNC_9 (struct tty_struct*) ;
 scalar_t__ FUNC_10 (struct tty_struct*) ;
 int FUNC_11 (struct tty_struct*) ;
 scalar_t__ FUNC_12 (struct tty_struct*) ;
 scalar_t__ FUNC_13 (struct tty_struct*) ;
 scalar_t__ FUNC_14 (struct tty_struct*) ;
 scalar_t__ FUNC_15 (struct tty_struct*) ;
 char FUNC_16 (struct tty_struct*) ;
 char FUNC_17 (struct tty_struct*) ;
 scalar_t__ FUNC_18 (struct tty_struct*) ;
 scalar_t__ FUNC_19 (struct tty_struct*) ;
 scalar_t__ FUNC_20 (struct tty_struct*) ;
 scalar_t__ FUNC_21 (struct tty_struct*) ;
 int VAR_3 ;
 char FUNC_22 (struct tty_struct*) ;
 char FUNC_23 (struct tty_struct*) ;
 char FUNC_24 (struct tty_struct*) ;
 char FUNC_25 (struct tty_struct*) ;
 char FUNC_26 (struct tty_struct*) ;
 int VAR_4 ;
 char FUNC_27 (struct tty_struct*) ;
 int VAR_5 ;
 int FUNC_28 (int ,int) ;
 int FUNC_29 (int ,int ) ;
 int FUNC_30 (struct tty_struct*) ;
 int FUNC_31 (struct n_tty_data*) ;
 int FUNC_32 (char,int ) ;
 int FUNC_33 (struct tty_struct*) ;
 int FUNC_34 (int *) ;

__attribute__((used)) static void FUNC_35(struct tty_struct *VAR_6, struct ktermios *VAR_7)
{
 struct n_tty_data *VAR_8 = VAR_6->disc_data;

 if (!VAR_7 || (VAR_7->c_lflag ^ VAR_6->termios.c_lflag) & (VAR_1 | VAR_0)) {
  FUNC_28(VAR_8->read_flags, VAR_3);
  VAR_8->line_start = VAR_8->read_tail;
  if (!FUNC_19(VAR_6) || !FUNC_31(VAR_8)) {
   VAR_8->canon_head = VAR_8->read_tail;
   VAR_8->push = 0;
  } else {
   FUNC_32((VAR_8->read_head - 1) & (VAR_3 - 1),
    VAR_8->read_flags);
   VAR_8->canon_head = VAR_8->read_head;
   VAR_8->push = 1;
  }
  VAR_8->commit_head = VAR_8->read_head;
  VAR_8->erasing = 0;
  VAR_8->lnext = 0;
 }

 VAR_8->icanon = (FUNC_19(VAR_6) != 0);

 if (FUNC_12(VAR_6) || FUNC_13(VAR_6) || FUNC_8(VAR_6) ||
     FUNC_6(VAR_6) || FUNC_10(VAR_6) || FUNC_19(VAR_6) ||
     FUNC_14(VAR_6) || FUNC_21(VAR_6) || FUNC_18(VAR_6) ||
     FUNC_15(VAR_6)) {
  FUNC_28(VAR_8->char_map, 256);

  if (FUNC_8(VAR_6) || FUNC_6(VAR_6))
   FUNC_32('\r', VAR_8->char_map);
  if (FUNC_10(VAR_6))
   FUNC_32('\n', VAR_8->char_map);

  if (FUNC_19(VAR_6)) {
   FUNC_32(FUNC_3(VAR_6), VAR_8->char_map);
   FUNC_32(FUNC_16(VAR_6), VAR_8->char_map);
   FUNC_32(FUNC_0(VAR_6), VAR_8->char_map);
   FUNC_32('\n', VAR_8->char_map);
   FUNC_32(FUNC_2(VAR_6), VAR_8->char_map);
   if (FUNC_20(VAR_6)) {
    FUNC_32(FUNC_27(VAR_6), VAR_8->char_map);
    FUNC_32(FUNC_17(VAR_6), VAR_8->char_map);
    FUNC_32(FUNC_1(VAR_6), VAR_8->char_map);
    if (FUNC_18(VAR_6))
     FUNC_32(FUNC_23(VAR_6),
      VAR_8->char_map);
   }
  }
  if (FUNC_14(VAR_6)) {
   FUNC_32(FUNC_24(VAR_6), VAR_8->char_map);
   FUNC_32(FUNC_25(VAR_6), VAR_8->char_map);
  }
  if (FUNC_21(VAR_6)) {
   FUNC_32(FUNC_4(VAR_6), VAR_8->char_map);
   FUNC_32(FUNC_22(VAR_6), VAR_8->char_map);
   FUNC_32(FUNC_26(VAR_6), VAR_8->char_map);
  }
  FUNC_29(VAR_5, VAR_8->char_map);
  VAR_8->raw = 0;
  VAR_8->real_raw = 0;
 } else {
  VAR_8->raw = 1;
  if ((FUNC_7(VAR_6) || (!FUNC_5(VAR_6) && !FUNC_15(VAR_6))) &&
      (FUNC_9(VAR_6) || !FUNC_11(VAR_6)) &&
      (VAR_6->driver->flags & VAR_4))
   VAR_8->real_raw = 1;
  else
   VAR_8->real_raw = 0;
 }




 if (!FUNC_14(VAR_6) && VAR_7 && (VAR_7->c_iflag & VAR_2) && !VAR_6->flow_stopped) {
  FUNC_33(VAR_6);
  FUNC_30(VAR_6);
 }


 FUNC_34(&VAR_6->write_wait);
 FUNC_34(&VAR_6->read_wait);
}

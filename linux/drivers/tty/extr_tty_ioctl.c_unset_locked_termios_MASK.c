
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ktermios {scalar_t__* c_cc; scalar_t__ c_line; int c_lflag; int c_cflag; int c_oflag; int c_iflag; } ;
struct tty_struct {struct ktermios termios_locked; struct ktermios termios; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct tty_struct *VAR_1, struct ktermios *VAR_2)
{
 struct ktermios *VAR_3 = &VAR_1->termios;
 struct ktermios *VAR_4 = &VAR_1->termios_locked;
 int VAR_5;



 (VAR_3->c_iflag = ((VAR_3->c_iflag) & ~(VAR_4->c_iflag)) | ((VAR_2->c_iflag) & (VAR_4->c_iflag)));
 (VAR_3->c_oflag = ((VAR_3->c_oflag) & ~(VAR_4->c_oflag)) | ((VAR_2->c_oflag) & (VAR_4->c_oflag)));
 (VAR_3->c_cflag = ((VAR_3->c_cflag) & ~(VAR_4->c_cflag)) | ((VAR_2->c_cflag) & (VAR_4->c_cflag)));
 (VAR_3->c_lflag = ((VAR_3->c_lflag) & ~(VAR_4->c_lflag)) | ((VAR_2->c_lflag) & (VAR_4->c_lflag)));
 VAR_3->c_line = VAR_4->c_line ? VAR_2->c_line : VAR_3->c_line;
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  VAR_3->c_cc[VAR_5] = VAR_4->c_cc[VAR_5] ?
   VAR_2->c_cc[VAR_5] : VAR_3->c_cc[VAR_5];

}

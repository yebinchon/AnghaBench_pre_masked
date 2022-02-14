
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cols; int rows; int dev; } ;
struct tty3270 {int update_flags; TYPE_1__ view; scalar_t__ inattr; struct string* prompt; } ;
struct string {int len; scalar_t__* string; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__*,char*,int) ;
 int FUNC_1 (int ,scalar_t__*,unsigned int) ;

__attribute__((used)) static void
FUNC_2(struct tty3270 *VAR_4, char *VAR_5, int VAR_6)
{
 struct string *VAR_7;
 unsigned int VAR_8;

 VAR_7 = VAR_4->prompt;
 if (VAR_6 != 0)
  VAR_7->string[5] = VAR_0;
 else
  VAR_7->string[5] = VAR_4->inattr;
 if (VAR_6 > VAR_4->view.cols * 2 - 11)
  VAR_6 = VAR_4->view.cols * 2 - 11;
 FUNC_0(VAR_7->string + 6, VAR_5, VAR_6);
 VAR_7->string[6 + VAR_6] = VAR_1;

 if (VAR_6 < VAR_4->view.cols * 2 - 11) {
  VAR_7->string[7 + VAR_6] = VAR_2;
  VAR_7->string[10 + VAR_6] = 0;
  VAR_8 = VAR_4->view.cols * VAR_4->view.rows - 9;
  FUNC_1(VAR_4->view.dev, VAR_7->string+VAR_6+8, VAR_8);
  VAR_7->len = 11 + VAR_6;
 } else
  VAR_7->len = 7 + VAR_6;
 VAR_4->update_flags |= VAR_3;
}

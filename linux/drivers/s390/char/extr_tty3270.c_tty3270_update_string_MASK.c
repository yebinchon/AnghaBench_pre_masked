
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cols; int dev; } ;
struct tty3270 {TYPE_1__ view; } ;
struct string {unsigned char* string; int len; } ;


 unsigned char VAR_0 ;
 int FUNC_0 (int ,unsigned char*,int) ;

__attribute__((used)) static void
FUNC_1(struct tty3270 *VAR_1, struct string *VAR_2, int VAR_3)
{
 unsigned char *VAR_4;

 FUNC_0(VAR_1->view.dev, VAR_2->string + 1,
          VAR_1->view.cols * VAR_3);
 VAR_4 = VAR_2->string + VAR_2->len - 4;
 if (*VAR_4 == VAR_0)
  FUNC_0(VAR_1->view.dev, VAR_4 + 1,
           VAR_1->view.cols * (VAR_3 + 1));
}

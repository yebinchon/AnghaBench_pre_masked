
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty3270_line {struct tty3270_line* cells; } ;


 int FUNC_0 (struct tty3270_line*) ;

__attribute__((used)) static void
FUNC_1(struct tty3270_line *VAR_0, unsigned int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1 - 2; VAR_2++)
  FUNC_0(VAR_0[VAR_2].cells);
 FUNC_0(VAR_0);
}

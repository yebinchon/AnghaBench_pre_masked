
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty3270_line {struct tty3270_line* cells; } ;
struct tty3270_cell {int dummy; } ;


 int VAR_0 ;
 struct tty3270_line* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct tty3270_line*) ;
 void* FUNC_2 (unsigned long,int ) ;

__attribute__((used)) static struct tty3270_line *
FUNC_3(unsigned int VAR_2, unsigned int VAR_3)
{
 struct tty3270_line *VAR_4;
 unsigned long VAR_5;
 int VAR_6;

 VAR_5 = sizeof(struct tty3270_line) * (VAR_2 - 2);
 VAR_4 = FUNC_2(VAR_5, VAR_1);
 if (!VAR_4)
  goto out_err;
 for (VAR_6 = 0; VAR_6 < VAR_2 - 2; VAR_6++) {
  VAR_5 = sizeof(struct tty3270_cell) * VAR_3;
  VAR_4[VAR_6].cells = FUNC_2(VAR_5, VAR_1);
  if (!VAR_4[VAR_6].cells)
   goto out_screen;
 }
 return VAR_4;
out_screen:
 while (VAR_6--)
  FUNC_1(VAR_4[VAR_6].cells);
 FUNC_1(VAR_4);
out_err:
 return FUNC_0(-VAR_0);
}

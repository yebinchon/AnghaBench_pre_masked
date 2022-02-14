
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty3270 {scalar_t__ nr_up; int nr_lines; int lines; } ;
struct string {int len; int list; int string; } ;
typedef int blueprint ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,unsigned char const*,int) ;
 struct string* FUNC_2 (struct tty3270*,int) ;

__attribute__((used)) static void
FUNC_3(struct tty3270 *VAR_0)
{
 static const unsigned char VAR_1[] =
  { 128, 0, 0, 129, 132, 131,
    129, 133, 134, 130, 0, 0, 0 };
 struct string *VAR_2;

 VAR_2 = FUNC_2(VAR_0, sizeof(VAR_1));
 FUNC_1(VAR_2->string, VAR_1, sizeof(VAR_1));
 VAR_2->len = sizeof(VAR_1);
 FUNC_0(&VAR_2->list, &VAR_0->lines);
 VAR_0->nr_lines++;
 if (VAR_0->nr_up != 0)
  VAR_0->nr_up++;
}

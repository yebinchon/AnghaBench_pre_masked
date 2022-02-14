
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct r3964_info* disc_data; } ;
struct r3964_info {int dummy; } ;


 char VAR_0 ;
 int FUNC_0 (struct r3964_info*,unsigned char const) ;
 int FUNC_1 (struct r3964_info*,char) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_1, const unsigned char *VAR_2,
   char *VAR_3, int VAR_4)
{
 struct r3964_info *VAR_5 = VAR_1->disc_data;
 const unsigned char *VAR_6;
 char *VAR_7, VAR_8 = VAR_0;
 int VAR_9;

 for (VAR_9 = VAR_4, VAR_6 = VAR_2, VAR_7 = VAR_3; VAR_9; VAR_9--, VAR_6++) {
  if (VAR_7)
   VAR_8 = *VAR_7++;
  if (VAR_8 == VAR_0) {
   FUNC_0(VAR_5, *VAR_6);
  } else {
   FUNC_1(VAR_5, VAR_8);
  }

 }
}

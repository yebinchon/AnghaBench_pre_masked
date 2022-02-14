
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct extent_buffer*,unsigned long,unsigned long) ;
 int FUNC_1 (unsigned long,unsigned long*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(unsigned long *VAR_2, struct extent_buffer *VAR_3,
      unsigned long VAR_4)
{
 unsigned long VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4 * VAR_0; VAR_5++) {
  int VAR_6, VAR_7;

  VAR_6 = !!FUNC_1(VAR_5, VAR_2);
  VAR_7 = !!FUNC_0(VAR_3, 0, VAR_5);
  if (VAR_7 != VAR_6) {
   FUNC_2("bits do not match");
   return -VAR_1;
  }

  VAR_7 = !!FUNC_0(VAR_3, VAR_5 / VAR_0,
      VAR_5 % VAR_0);
  if (VAR_7 != VAR_6) {
   FUNC_2("offset bits do not match");
   return -VAR_1;
  }
 }
 return 0;
}

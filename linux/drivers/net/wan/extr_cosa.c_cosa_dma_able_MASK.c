
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct channel_data {int name; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (char*,int ) ;

__attribute__((used)) static int FUNC_1(struct channel_data *VAR_1, char *VAR_2, int VAR_3)
{
 static int VAR_4;
 unsigned long VAR_5 = (unsigned long)VAR_2;
 if (VAR_5+VAR_3 >= VAR_0)
  return 0;
 if ((VAR_5^ (VAR_5+VAR_3)) & 0x10000) {
  if (VAR_4++ < 5)
   FUNC_0("%s: packet spanning a 64k boundary\n",
    VAR_1->name);
  return 0;
 }
 return 1;
}

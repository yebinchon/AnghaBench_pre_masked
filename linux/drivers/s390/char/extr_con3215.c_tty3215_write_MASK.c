
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ driver_data; } ;
struct raw3215_info {int dummy; } ;


 int FUNC_0 (struct raw3215_info*,unsigned char const) ;
 int FUNC_1 (struct raw3215_info*,unsigned char const*,int) ;

__attribute__((used)) static int FUNC_2(struct tty_struct * VAR_0,
    const unsigned char *VAR_1, int VAR_2)
{
 struct raw3215_info *VAR_3;
 int VAR_4, VAR_5;

 if (!VAR_0)
  return 0;
 VAR_3 = (struct raw3215_info *) VAR_0->driver_data;
 VAR_5 = VAR_2;
 while (VAR_2 > 0) {
  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
   if (VAR_1[VAR_4] == '\t' || VAR_1[VAR_4] == '\n')
    break;
  FUNC_1(VAR_3, VAR_1, VAR_4);
  VAR_2 -= VAR_4;
  VAR_1 += VAR_4;
  if (VAR_2 > 0) {
   FUNC_0(VAR_3, *VAR_1);
   VAR_2--;
   VAR_1++;
  }
 }
 return VAR_5;
}

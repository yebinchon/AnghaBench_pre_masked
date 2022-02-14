
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*,size_t,int*,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_1,
         const u8 *VAR_2, size_t VAR_3)
{
 int VAR_4 = 1;
 int VAR_5 = 0;






 while (VAR_4) {
  unsigned int VAR_6 = 0;
  unsigned int VAR_7 = 0;

  VAR_4 = VAR_4 && FUNC_0(VAR_2, VAR_3, &VAR_5, &VAR_6);
  if (VAR_4 && VAR_6 == 0xffff)
   return 0;

  VAR_4 = VAR_4 && FUNC_0(VAR_2, VAR_3, &VAR_5, &VAR_7);
  while (VAR_4 && VAR_6 > 0) {
   unsigned int VAR_8 = 0;

   VAR_4 = VAR_4 && FUNC_0(VAR_2, VAR_3, &VAR_5, &VAR_8);
   VAR_6--;
  }
 }

 return -VAR_0;
}

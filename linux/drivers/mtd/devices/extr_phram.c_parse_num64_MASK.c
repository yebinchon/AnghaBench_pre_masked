
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int*) ;
 size_t FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(uint64_t *VAR_1, char *VAR_2)
{
 size_t VAR_3;
 int VAR_4 = 0;
 int VAR_5;

 VAR_3 = FUNC_1(VAR_2);

 if (VAR_3 > 2) {
  if (VAR_2[VAR_3 - 1] == 'i') {
   switch (VAR_2[VAR_3 - 2]) {
   case 'G':
    VAR_4 += 10;

   case 'M':
    VAR_4 += 10;

   case 'k':
    VAR_4 += 10;
    VAR_2[VAR_3 - 2] = 0;
    break;
   default:
    return -VAR_0;
   }
  }
 }

 VAR_5 = FUNC_0(VAR_2, 0, VAR_1);
 *VAR_1 <<= VAR_4;

 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct tps65910 {int dummy; } ;
struct comparator {int uV_max; int* vsel_table; int reg; } ;


 int VAR_0 ;
 int FUNC_0 (struct tps65910*,int ,size_t) ;
 struct comparator* VAR_1 ;

__attribute__((used)) static int FUNC_1(struct tps65910 *VAR_2, int VAR_3, int VAR_4)
{
 struct comparator VAR_5 = VAR_1[VAR_3];
 int VAR_6 = 0;
 int VAR_7;
 u8 VAR_8 = 0, VAR_9;

 while (VAR_6 < VAR_5.uV_max) {
  VAR_6 = VAR_5.vsel_table[VAR_8];
  if (VAR_6 >= VAR_4)
   break;
  else if (VAR_6 < VAR_4)
   VAR_8 ++;
 }

 if (VAR_6 > VAR_5.uV_max)
  return -VAR_0;

 VAR_9 = VAR_8 << 1;
 VAR_7 = FUNC_0(VAR_2, VAR_5.reg, VAR_9);

 return VAR_7;
}

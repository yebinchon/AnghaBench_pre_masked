
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65910 {int dummy; } ;
struct comparator {int* vsel_table; int reg; } ;


 int FUNC_0 (struct tps65910*,int ,unsigned int*) ;
 struct comparator* VAR_0 ;

__attribute__((used)) static int FUNC_1(struct tps65910 *VAR_1, int VAR_2)
{
 struct comparator VAR_3 = VAR_0[VAR_2];
 unsigned int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_3.reg, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4 >>= 1;
 return VAR_3.vsel_table[VAR_4];
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;


 int FUNC_0 (struct super_block*) ;

__attribute__((used)) static unsigned FUNC_1(struct super_block *VAR_0, unsigned *VAR_1,
      unsigned *VAR_2, unsigned *VAR_3)
{
 unsigned *VAR_4 = VAR_1;
 int VAR_5 = 3;
 unsigned VAR_6;

 if (!FUNC_0(VAR_0)) {
  VAR_6 = *VAR_4;
  *VAR_4 += 1;
  return VAR_6;
 }

 if (*VAR_2 < *VAR_4) {
  VAR_4 = VAR_2;
  VAR_5 = 5;
 }
 if (*VAR_3 < *VAR_4) {
  VAR_4 = VAR_3;
  VAR_5 = 7;
 }

 VAR_6 = *VAR_4;
 *VAR_4 *= VAR_5;

 return VAR_6;
}

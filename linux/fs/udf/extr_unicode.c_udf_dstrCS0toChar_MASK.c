
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct super_block {int dummy; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (struct super_block*,int*,int,int const*,int,int ) ;

int FUNC_2(struct super_block *VAR_0, uint8_t *VAR_1, int VAR_2,
        const uint8_t *VAR_3, int VAR_4)
{
 int VAR_5 = 0;

 if (VAR_4 > 0) {
  VAR_5 = VAR_3[VAR_4 - 1];
  if (VAR_5 >= VAR_4) {
   FUNC_0("incorrect dstring lengths (%d/%d),"
    " truncating\n", VAR_5, VAR_4);
   VAR_5 = VAR_4 - 1;

   if (VAR_3[0] == 16)
    VAR_5 -= (VAR_5 - 1) & 2;
  }
 }

 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5, 0);
}

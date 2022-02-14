
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct csio_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct csio_hw*,int) ;
 int FUNC_1 (int) ;

int
FUNC_2(struct csio_hw *VAR_1, int VAR_2, uint32_t VAR_3,
    int VAR_4, int VAR_5, int VAR_6, uint32_t *VAR_7)
{
 uint32_t VAR_8;
 while (1) {
  VAR_8 = FUNC_0(VAR_1, VAR_2);

  if (!!(VAR_8 & VAR_3) == VAR_4) {
   if (VAR_7)
    *VAR_7 = VAR_8;
   return 0;
  }

  if (--VAR_5 == 0)
   return -VAR_0;
  if (VAR_6)
   FUNC_1(VAR_6);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksz_desc_info {int alloc; int mask; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(struct ksz_desc_info *VAR_1)
{


 int VAR_2 = VAR_1->alloc;
 int VAR_3;

 VAR_3 = 0;
 while (!(VAR_2 & 1)) {
  VAR_3++;
  VAR_2 >>= 1;
 }
 if (VAR_2 != 1 || VAR_3 < 2) {
  FUNC_0("Hardware descriptor numbers not right!\n");
  while (VAR_2) {
   VAR_3++;
   VAR_2 >>= 1;
  }
  if (VAR_3 < 2)
   VAR_3 = 2;
  VAR_2 = 1 << VAR_3;
  VAR_1->alloc = VAR_2;
 }
 VAR_1->mask = VAR_1->alloc - 1;
}

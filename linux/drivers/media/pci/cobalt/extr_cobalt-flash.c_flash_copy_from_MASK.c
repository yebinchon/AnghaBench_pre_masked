
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct map_info {int virt; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct map_info *VAR_0, void *VAR_1,
       unsigned long VAR_2, ssize_t VAR_3)
{
 u32 VAR_4 = VAR_2;
 u8 *VAR_5 = VAR_1;
 u32 VAR_6;

 while (VAR_3) {
  VAR_6 = FUNC_1(VAR_0->virt, FUNC_0(VAR_4));
  do {
   *VAR_5 = VAR_6 >> (8 * (VAR_4 & 3));
   VAR_4++;
   VAR_5++;
   VAR_3--;
  } while (VAR_3 && (VAR_4 % 4));
 }
}

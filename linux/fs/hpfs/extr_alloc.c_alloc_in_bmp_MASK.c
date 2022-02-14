
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct quad_buffer_head {int dummy; } ;
typedef int secno ;
typedef int __le32 ;
struct TYPE_2__ {scalar_t__ sb_chk; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct quad_buffer_head*) ;
 int FUNC_2 (struct super_block*,char*,unsigned int,...) ;
 int * FUNC_3 (struct super_block*,int,struct quad_buffer_head*,char*) ;
 int * FUNC_4 (struct super_block*,struct quad_buffer_head*) ;
 int FUNC_5 (struct quad_buffer_head*) ;
 TYPE_1__* FUNC_6 (struct super_block*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,unsigned int,unsigned int) ;

__attribute__((used)) static secno FUNC_9(struct super_block *VAR_0, secno VAR_1, unsigned VAR_2, unsigned VAR_3)
{
 struct quad_buffer_head VAR_4;
 __le32 *VAR_5;
 unsigned VAR_6 = VAR_1 & ~0x3fff;
 unsigned VAR_7 = (VAR_1 & 0x3fff) & ~(VAR_2 - 1);

 unsigned VAR_8, VAR_9;
 int VAR_10, VAR_11;
 secno VAR_12 = 0;
 if (VAR_2 != 1 && VAR_2 != 4) {
  FUNC_2(VAR_0, "Bad allocation size: %d", VAR_2);
  return 0;
 }
 if (VAR_6 != ~0x3fff) {
  if (!(VAR_5 = FUNC_3(VAR_0, VAR_1 >> 14, &VAR_4, "aib"))) goto uls;
 } else {
  if (!(VAR_5 = FUNC_4(VAR_0, &VAR_4))) goto uls;
 }
 if (!FUNC_8(VAR_5, VAR_7, VAR_2 + VAR_3)) {
  VAR_12 = VAR_6 + VAR_7;
  goto rt;
 }
 VAR_9 = VAR_7 + VAR_2; VAR_11 = 0;
 while ((VAR_10 = FUNC_8(VAR_5, VAR_9, VAR_2 + VAR_3)) != 0) {
  VAR_9 += VAR_10;
  if (VAR_2 != 1) VAR_9 = ((VAR_9-1)&~(VAR_2-1))+VAR_2;
  if (!VAR_11) {
   if (VAR_9>>5 != VAR_7>>5) {
    VAR_11 = 1;
    VAR_9 = VAR_7 & 0x1f;
   }
  } else if (VAR_9 > VAR_7) break;
 }
 if (!VAR_10) {
  VAR_12 = VAR_6 + VAR_9;
  goto rt;
 }
 VAR_7 >>= 5;

 VAR_8 = VAR_7;
 do {
  if (!FUNC_7(VAR_5[VAR_8])) goto cont;
  if (VAR_2 + VAR_3 >= 0x3f && FUNC_7(VAR_5[VAR_8]) != 0xffffffff) goto cont;
  VAR_9 = VAR_8<<5;
  if (VAR_8 > 0) {
   unsigned VAR_13 = FUNC_7(VAR_5[VAR_8-1]);
   while (VAR_13 & 0x80000000) {
    VAR_9--; VAR_13 <<= 1;
   }
  }
  if (VAR_2 != 1) VAR_9 = ((VAR_9-1)&~(VAR_2-1))+VAR_2;
  while ((VAR_10 = FUNC_8(VAR_5, VAR_9, VAR_2 + VAR_3)) != 0) {
   VAR_9 += VAR_10;
   if (VAR_2 != 1) VAR_9 = ((VAR_9-1)&~(VAR_2-1))+VAR_2;
   if (VAR_9>>5 > VAR_8) break;
  }
  if (!VAR_10) {
   VAR_12 = VAR_6 + VAR_9;
   goto rt;
  }
  cont:
  VAR_8++, VAR_8 &= 0x1ff;
 } while (VAR_8 != VAR_7);
 rt:
 if (VAR_12) {
  if (FUNC_6(VAR_0)->sb_chk && ((VAR_12 >> 14) != (VAR_6 >> 14) || (FUNC_7(VAR_5[(VAR_12 & 0x3fff) >> 5]) | ~(((1 << VAR_2) - 1) << (VAR_12 & 0x1f))) != 0xffffffff)) {
   FUNC_2(VAR_0, "Allocation doesn't work! Wanted %d, allocated at %08x", VAR_2, VAR_12);
   VAR_12 = 0;
   goto b;
  }
  VAR_5[(VAR_12 & 0x3fff) >> 5] &= FUNC_0(~(((1 << VAR_2) - 1) << (VAR_12 & 0x1f)));
  FUNC_5(&VAR_4);
 }
 b:
 FUNC_1(&VAR_4);
 uls:
 return VAR_12;
}

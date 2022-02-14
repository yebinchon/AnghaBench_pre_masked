
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_buddy {int bd_blkbits; void* bd_buddy; void* bd_bitmap; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,void*) ;

__attribute__((used)) static int FUNC_2(struct ext4_buddy *VAR_0, int VAR_1)
{
 int VAR_2 = 1;
 int VAR_3 = 1 << (VAR_0->bd_blkbits - 1);
 void *VAR_4;

 FUNC_0(VAR_0->bd_bitmap == VAR_0->bd_buddy);
 FUNC_0(VAR_1 >= (1 << (VAR_0->bd_blkbits + 3)));

 VAR_4 = VAR_0->bd_buddy;
 while (VAR_2 <= VAR_0->bd_blkbits + 1) {
  VAR_1 = VAR_1 >> 1;
  if (!FUNC_1(VAR_1, VAR_4)) {

   return VAR_2;
  }
  VAR_4 += VAR_3;
  VAR_3 >>= 1;
  VAR_2++;
 }
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* bitmap; } ;
union afs_xdr_dir_block {TYPE_1__ hdr; } ;
typedef int u64 ;
typedef scalar_t__ u32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(union afs_xdr_dir_block *VAR_0, unsigned int VAR_1)
{
 u64 VAR_2;
 u32 VAR_3;
 int VAR_4, VAR_5;

 VAR_2 = (u64)VAR_0->hdr.bitmap[0] << 0 * 8;
 VAR_2 |= (u64)VAR_0->hdr.bitmap[1] << 1 * 8;
 VAR_2 |= (u64)VAR_0->hdr.bitmap[2] << 2 * 8;
 VAR_2 |= (u64)VAR_0->hdr.bitmap[3] << 3 * 8;
 VAR_2 |= (u64)VAR_0->hdr.bitmap[4] << 4 * 8;
 VAR_2 |= (u64)VAR_0->hdr.bitmap[5] << 5 * 8;
 VAR_2 |= (u64)VAR_0->hdr.bitmap[6] << 6 * 8;
 VAR_2 |= (u64)VAR_0->hdr.bitmap[7] << 7 * 8;
 VAR_2 >>= 1;
 VAR_4 = 1;
 VAR_3 = (1 << VAR_1) - 1;

 do {
  if (sizeof(unsigned long) == 8)
   VAR_5 = FUNC_1(VAR_2);
  else
   VAR_5 = ((u32)VAR_2) != 0 ?
    FUNC_1((u32)VAR_2) :
    FUNC_1((u32)(VAR_2 >> 32)) + 32;
  VAR_2 >>= VAR_5;
  VAR_4 += VAR_5;

  if ((VAR_2 & VAR_3) == 0) {
   if (VAR_4 > 64 - VAR_1)
    return -1;
   return VAR_4;
  }

  VAR_5 = FUNC_0(VAR_2);
  VAR_2 >>= VAR_5;
  VAR_4 += VAR_5;
 } while (VAR_2);

 return -1;
}

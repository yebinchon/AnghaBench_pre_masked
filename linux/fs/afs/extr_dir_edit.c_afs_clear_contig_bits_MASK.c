
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * bitmap; } ;
union afs_xdr_dir_block {TYPE_1__ hdr; } ;
typedef int u8 ;
typedef int u64 ;



__attribute__((used)) static void FUNC_0(union afs_xdr_dir_block *VAR_0,
      int VAR_1, unsigned int VAR_2)
{
 u64 VAR_3, VAR_4, VAR_5;

 VAR_3 = (1 << VAR_2) - 1;
 VAR_3 <<= VAR_1;

 VAR_4 = *(u64 *)VAR_0->hdr.bitmap;

 VAR_0->hdr.bitmap[0] &= ~(u8)(VAR_3 >> 0 * 8);
 VAR_0->hdr.bitmap[1] &= ~(u8)(VAR_3 >> 1 * 8);
 VAR_0->hdr.bitmap[2] &= ~(u8)(VAR_3 >> 2 * 8);
 VAR_0->hdr.bitmap[3] &= ~(u8)(VAR_3 >> 3 * 8);
 VAR_0->hdr.bitmap[4] &= ~(u8)(VAR_3 >> 4 * 8);
 VAR_0->hdr.bitmap[5] &= ~(u8)(VAR_3 >> 5 * 8);
 VAR_0->hdr.bitmap[6] &= ~(u8)(VAR_3 >> 6 * 8);
 VAR_0->hdr.bitmap[7] &= ~(u8)(VAR_3 >> 7 * 8);

 VAR_5 = *(u64 *)VAR_0->hdr.bitmap;
}

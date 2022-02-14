
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct buffer_head {int dummy; } ;
struct adfs_dir {TYPE_1__* sb; struct buffer_head** bh; } ;
typedef int __le32 ;
struct TYPE_2__ {int s_blocksize_bits; } ;


 void* FUNC_0 (struct buffer_head* const*,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static u8
FUNC_5(const struct adfs_dir *VAR_0)
{
 struct buffer_head * const *VAR_1 = VAR_0->bh;
 const int VAR_2 = VAR_0->sb->s_blocksize_bits;
 union { __le32 *ptr32; u8 *ptr8; } VAR_3, VAR_4;
 u32 VAR_5 = 0;
 int VAR_6 = 5 - 26;
 int VAR_7 = 0;






 do {
  VAR_6 += 26;
  do {
   VAR_5 = FUNC_3(FUNC_1(VAR_7)) ^ FUNC_4(VAR_5);

   VAR_7 += sizeof(u32);
  } while (VAR_7 < (VAR_6 & ~3));
 } while (FUNC_2(VAR_6) != 0);





 if (VAR_7 != VAR_6) {
  VAR_3.ptr8 = FUNC_0(VAR_1, VAR_7);
  VAR_4.ptr8 = VAR_3.ptr8 + VAR_6 - VAR_7;

  do {
   VAR_5 = *VAR_3.ptr8++ ^ FUNC_4(VAR_5);
  } while (VAR_3.ptr8 < VAR_4.ptr8);
 }
 VAR_3.ptr8 = FUNC_0(VAR_1, 2008);
 VAR_4.ptr8 = VAR_3.ptr8 + 36;

 do {
  __le32 VAR_8 = *VAR_3.ptr32++;
  VAR_5 = FUNC_3(VAR_8) ^ FUNC_4(VAR_5);
 } while (VAR_3.ptr32 < VAR_4.ptr32);

 return (VAR_5 ^ (VAR_5 >> 8) ^ (VAR_5 >> 16) ^ (VAR_5 >> 24)) & 0xff;
}

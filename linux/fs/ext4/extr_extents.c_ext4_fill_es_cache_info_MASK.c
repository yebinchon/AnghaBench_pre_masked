
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct fiemap_extent_info {int dummy; } ;
struct extent_status {scalar_t__ es_len; scalar_t__ es_pblk; scalar_t__ es_lblk; } ;
typedef scalar_t__ ext4_lblk_t ;
typedef unsigned char __u64 ;
struct TYPE_2__ {unsigned char s_blocksize_bits; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (struct extent_status*) ;
 scalar_t__ FUNC_1 (struct extent_status*) ;
 scalar_t__ FUNC_2 (struct extent_status*) ;
 int FUNC_3 (struct inode*,scalar_t__,scalar_t__*,struct extent_status*) ;
 scalar_t__ FUNC_4 (struct extent_status*) ;
 int FUNC_5 (struct fiemap_extent_info*,unsigned char,unsigned char,unsigned char,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_5,
       ext4_lblk_t VAR_6, ext4_lblk_t VAR_7,
       struct fiemap_extent_info *VAR_8)
{
 ext4_lblk_t VAR_9, VAR_10 = VAR_6 + VAR_7 - 1;
 struct extent_status VAR_11;
 unsigned char VAR_12 = VAR_5->i_sb->s_blocksize_bits;
 unsigned int VAR_13;
 int VAR_14;

 while (VAR_6 <= VAR_10) {
  VAR_9 = 0;
  VAR_13 = 0;
  if (!FUNC_3(VAR_5, VAR_6, &VAR_9, &VAR_11))
   break;
  if (FUNC_2(&VAR_11))
   VAR_13 |= VAR_4;
  if (FUNC_0(&VAR_11))
   VAR_13 |= (VAR_1 |
      VAR_3);
  if (FUNC_1(&VAR_11))
   VAR_13 |= VAR_0;
  if (VAR_9 == 0)
   VAR_13 |= VAR_2;
  if (VAR_13 & (VAR_1|
        VAR_0))
   VAR_11.es_pblk = 0;
  else
   VAR_11.es_pblk = FUNC_4(&VAR_11);
  VAR_14 = FUNC_5(VAR_8,
    (__u64)VAR_11.es_lblk << VAR_12,
    (__u64)VAR_11.es_pblk << VAR_12,
    (__u64)VAR_11.es_len << VAR_12,
    VAR_13);
  if (VAR_9 == 0)
   break;
  VAR_6 = VAR_9;
  if (VAR_14 < 0)
   return VAR_14;
  if (VAR_14 == 1)
   return 0;
 }
 return 0;
}

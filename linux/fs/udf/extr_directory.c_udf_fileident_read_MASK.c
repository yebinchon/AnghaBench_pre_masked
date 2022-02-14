
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef unsigned char uint32_t ;
typedef int udf_pblk_t ;
struct TYPE_5__ {int * i_data; } ;
struct udf_inode_info {scalar_t__ i_alloc_type; scalar_t__ i_efe; TYPE_1__ i_ext; } ;
struct udf_fileident_bh {int soffset; int eoffset; struct buffer_head* ebh; struct buffer_head* sbh; } ;
struct kernel_lb_addr {int dummy; } ;
struct inode {int i_size; TYPE_2__* i_sb; } ;
struct fileIdentDesc {int dummy; } ;
struct fileEntry {int dummy; } ;
struct extent_position {unsigned char offset; } ;
struct extendedFileEntry {int dummy; } ;
struct buffer_head {int * b_data; } ;
typedef unsigned char sector_t ;
typedef int loff_t ;
struct TYPE_6__ {int s_blocksize; unsigned char s_blocksize_bits; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct udf_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int ,int ,int,struct buffer_head**) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (struct fileIdentDesc*) ;
 struct fileIdentDesc* FUNC_7 (int *,int,int*) ;
 int FUNC_8 (TYPE_2__*,struct kernel_lb_addr*,unsigned char) ;
 int FUNC_9 (struct inode*,struct extent_position*,struct kernel_lb_addr*,unsigned char*,int) ;
 struct buffer_head* FUNC_10 (TYPE_2__*,int ) ;
 void* FUNC_11 (TYPE_2__*,int ) ;

struct fileIdentDesc *FUNC_12(struct inode *VAR_4, loff_t *VAR_5,
      struct udf_fileident_bh *VAR_6,
      struct fileIdentDesc *VAR_7,
      struct extent_position *VAR_8,
      struct kernel_lb_addr *VAR_9, uint32_t *VAR_10,
      sector_t *VAR_11)
{
 struct fileIdentDesc *VAR_12;
 int VAR_13, VAR_14;
 udf_pblk_t VAR_15;
 struct buffer_head *VAR_16, *VAR_17[16];
 struct udf_inode_info *VAR_18 = FUNC_0(VAR_4);

 VAR_6->soffset = VAR_6->eoffset;

 if (VAR_18->i_alloc_type == VAR_1) {
  VAR_12 = FUNC_7(VAR_18->i_ext.i_data -
           (VAR_18->i_efe ?
     sizeof(struct extendedFileEntry) :
     sizeof(struct fileEntry)),
           VAR_4->i_sb->s_blocksize,
           &(VAR_6->eoffset));
  if (!VAR_12)
   return ((void*)0);

  *VAR_5 += VAR_6->eoffset - VAR_6->soffset;

  FUNC_5((uint8_t *)VAR_7, (uint8_t *)VAR_12,
         sizeof(struct fileIdentDesc));

  return VAR_12;
 }

 if (VAR_6->eoffset == VAR_4->i_sb->s_blocksize) {
  uint32_t VAR_19 = VAR_8->offset;
  unsigned char VAR_20 = VAR_4->i_sb->s_blocksize_bits;

  if (FUNC_9(VAR_4, VAR_8, VAR_9, VAR_10, 1) !=
      (VAR_0 >> 30))
   return ((void*)0);

  VAR_15 = FUNC_8(VAR_4->i_sb, VAR_9, *VAR_11);

  (*VAR_11)++;

  if ((*VAR_11 << VAR_20) >= *VAR_10)
   *VAR_11 = 0;
  else
   VAR_8->offset = VAR_19;

  FUNC_1(VAR_6->sbh);
  VAR_6->sbh = VAR_6->ebh = FUNC_11(VAR_4->i_sb, VAR_15);
  if (!VAR_6->sbh)
   return ((void*)0);
  VAR_6->soffset = VAR_6->eoffset = 0;

  if (!(*VAR_11 & ((16 >> (VAR_20 - 9)) - 1))) {
   VAR_13 = 16 >> (VAR_20 - 9);
   if (VAR_13 + *VAR_11 > (*VAR_10 >> VAR_20))
    VAR_13 = (*VAR_10 >> VAR_20)-*VAR_11;
   for (VAR_14 = 0; VAR_13 > 0; VAR_13--) {
    VAR_15 = FUNC_8(VAR_4->i_sb, VAR_9,
         *VAR_11 + VAR_13);
    VAR_16 = FUNC_10(VAR_4->i_sb, VAR_15);
    if (VAR_16 && !FUNC_3(VAR_16) &&
      !FUNC_2(VAR_16))
     VAR_17[VAR_14++] = VAR_16;
    else
     FUNC_1(VAR_16);
   }
   if (VAR_14) {
    FUNC_4(VAR_2, VAR_3, VAR_14, VAR_17);
    for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
     FUNC_1(VAR_17[VAR_13]);
   }
  }
 } else if (VAR_6->sbh != VAR_6->ebh) {
  FUNC_1(VAR_6->sbh);
  VAR_6->sbh = VAR_6->ebh;
 }

 VAR_12 = FUNC_7(VAR_6->sbh->b_data, VAR_4->i_sb->s_blocksize,
          &(VAR_6->eoffset));

 if (!VAR_12)
  return ((void*)0);

 *VAR_5 += VAR_6->eoffset - VAR_6->soffset;

 if (VAR_6->eoffset <= VAR_4->i_sb->s_blocksize) {
  FUNC_5((uint8_t *)VAR_7, (uint8_t *)VAR_12,
         sizeof(struct fileIdentDesc));
 } else if (VAR_6->eoffset > VAR_4->i_sb->s_blocksize) {
  uint32_t VAR_21 = VAR_8->offset;

  if (FUNC_9(VAR_4, VAR_8, VAR_9, VAR_10, 1) !=
      (VAR_0 >> 30))
   return ((void*)0);

  VAR_15 = FUNC_8(VAR_4->i_sb, VAR_9, *VAR_11);

  (*VAR_11)++;

  if ((*VAR_11 << VAR_4->i_sb->s_blocksize_bits) >= *VAR_10)
   *VAR_11 = 0;
  else
   VAR_8->offset = VAR_21;

  VAR_6->soffset -= VAR_4->i_sb->s_blocksize;
  VAR_6->eoffset -= VAR_4->i_sb->s_blocksize;

  VAR_6->ebh = FUNC_11(VAR_4->i_sb, VAR_15);
  if (!VAR_6->ebh)
   return ((void*)0);

  if (sizeof(struct fileIdentDesc) > -VAR_6->soffset) {
   int VAR_22;

   FUNC_5((uint8_t *)VAR_7, (uint8_t *)VAR_12, -VAR_6->soffset);
   FUNC_5((uint8_t *)VAR_7 - VAR_6->soffset,
          VAR_6->ebh->b_data,
          sizeof(struct fileIdentDesc) + VAR_6->soffset);

   VAR_22 = FUNC_6(VAR_7);
   *VAR_5 += VAR_22 - (VAR_6->eoffset - VAR_6->soffset);
   VAR_6->eoffset = VAR_6->soffset + VAR_22;
  } else {
   FUNC_5((uint8_t *)VAR_7, (uint8_t *)VAR_12,
          sizeof(struct fileIdentDesc));
  }
 }

 if (*VAR_5 > VAR_4->i_size)
  return ((void*)0);
 return VAR_12;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct fiemap_extent_info {int dummy; } ;
struct extent_status {scalar_t__ es_lblk; scalar_t__ es_len; scalar_t__ es_pblk; } ;
struct ext4_extent {int ee_block; } ;
struct ext4_ext_path {struct ext4_extent* p_ext; int * p_hdr; } ;
typedef scalar_t__ ext4_lblk_t ;
typedef unsigned char __u64 ;
struct TYPE_4__ {int i_data_sem; } ;
struct TYPE_3__ {unsigned char s_blocksize_bits; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct inode*,char*,...) ;
 TYPE_2__* FUNC_3 (struct inode*) ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_4 (struct ext4_ext_path*) ;
 int FUNC_5 (struct ext4_ext_path*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ext4_ext_path*) ;
 scalar_t__ FUNC_8 (struct ext4_extent*) ;
 scalar_t__ FUNC_9 (struct ext4_extent*) ;
 scalar_t__ FUNC_10 (struct ext4_ext_path*) ;
 scalar_t__ FUNC_11 (struct ext4_extent*) ;
 scalar_t__ FUNC_12 (struct inode*,struct extent_status*) ;
 struct ext4_ext_path* FUNC_13 (struct inode*,scalar_t__,struct ext4_ext_path**,int ) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct fiemap_extent_info*,unsigned char,unsigned char,unsigned char,unsigned int) ;
 int FUNC_16 (struct ext4_ext_path*) ;
 scalar_t__ FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static int FUNC_20(struct inode *VAR_6,
        ext4_lblk_t VAR_7, ext4_lblk_t VAR_8,
        struct fiemap_extent_info *VAR_9)
{
 struct ext4_ext_path *VAR_10 = ((void*)0);
 struct ext4_extent *VAR_11;
 struct extent_status VAR_12;
 ext4_lblk_t VAR_13, VAR_14, VAR_15 = 0, VAR_16 = 0;
 ext4_lblk_t VAR_17 = VAR_7 + VAR_8;
 int VAR_18, VAR_19 = 0, VAR_20 = 0;
 unsigned int VAR_21 = 0;
 unsigned char VAR_22 = VAR_6->i_sb->s_blocksize_bits;

 while (VAR_7 < VAR_17 && VAR_7 != VAR_1) {
  VAR_8 = VAR_17 - VAR_7;

  FUNC_6(&FUNC_3(VAR_6)->i_data_sem);

  VAR_10 = FUNC_13(VAR_6, VAR_7, &VAR_10, 0);
  if (FUNC_4(VAR_10)) {
   FUNC_19(&FUNC_3(VAR_6)->i_data_sem);
   VAR_20 = FUNC_5(VAR_10);
   VAR_10 = ((void*)0);
   break;
  }

  VAR_19 = FUNC_14(VAR_6);
  if (FUNC_18(VAR_10[VAR_19].p_hdr == ((void*)0))) {
   FUNC_19(&FUNC_3(VAR_6)->i_data_sem);
   FUNC_2(VAR_6, "path[%d].p_hdr == NULL", VAR_19);
   VAR_20 = -VAR_0;
   break;
  }
  VAR_11 = VAR_10[VAR_19].p_ext;
  VAR_13 = FUNC_10(VAR_10);

  VAR_21 = 0;
  VAR_18 = 0;
  if (!VAR_11) {


   VAR_15 = VAR_7;
   VAR_16 = VAR_7 + VAR_8;
  } else if (FUNC_17(VAR_11->ee_block) > VAR_7) {

   VAR_15 = VAR_7;
   VAR_16 = FUNC_17(VAR_11->ee_block);
   if (VAR_7 + VAR_8 < VAR_16)
    VAR_16 = VAR_7 + VAR_8;
  } else if (VAR_7 >= FUNC_17(VAR_11->ee_block)
     + FUNC_8(VAR_11)) {

   VAR_15 = VAR_7;
   VAR_16 = VAR_7 + VAR_8;
   if (VAR_16 >= VAR_13)
    VAR_16 = VAR_13;
  } else if (VAR_7 >= FUNC_17(VAR_11->ee_block)) {




   VAR_15 = VAR_7;
   VAR_16 = FUNC_17(VAR_11->ee_block)
    + FUNC_8(VAR_11);
   if (VAR_7 + VAR_8 < VAR_16)
    VAR_16 = VAR_7 + VAR_8;
   VAR_18 = 1;
  } else {
   FUNC_0();
  }
  FUNC_1(VAR_16 <= VAR_15);

  if (!VAR_18) {
   VAR_12.es_lblk = VAR_15;
   VAR_12.es_len = VAR_16 - VAR_15;
   VAR_12.es_pblk = 0;
  } else {
   VAR_12.es_lblk = FUNC_17(VAR_11->ee_block);
   VAR_12.es_len = FUNC_8(VAR_11);
   VAR_12.es_pblk = FUNC_11(VAR_11);
   if (FUNC_9(VAR_11))
    VAR_21 |= VAR_5;
  }






  VAR_14 = FUNC_12(VAR_6, &VAR_12);
  if (!VAR_18 && VAR_14) {
   VAR_18 = 1;
   VAR_21 |= (VAR_2 |
      VAR_4);
  }
  FUNC_19(&FUNC_3(VAR_6)->i_data_sem);

  if (FUNC_18(VAR_12.es_len == 0)) {
   FUNC_2(VAR_6, "es.es_len == 0");
   VAR_20 = -VAR_0;
   break;
  }
  if (VAR_13 == VAR_14 && VAR_13 == VAR_1) {
   VAR_21 |= VAR_3;
   if (FUNC_18(VAR_14 != VAR_1 ||
         VAR_13 != VAR_1)) {
    FUNC_2(VAR_6,
       "next extent == %u, next "
       "delalloc extent = %u",
       VAR_13, VAR_14);
    VAR_20 = -VAR_0;
    break;
   }
  }

  if (VAR_18) {
   VAR_20 = FUNC_15(VAR_9,
    (__u64)VAR_12.es_lblk << VAR_22,
    (__u64)VAR_12.es_pblk << VAR_22,
    (__u64)VAR_12.es_len << VAR_22,
    VAR_21);
   if (VAR_20 < 0)
    break;
   if (VAR_20 == 1) {
    VAR_20 = 0;
    break;
   }
  }

  VAR_7 = VAR_12.es_lblk + VAR_12.es_len;
 }

 FUNC_7(VAR_10);
 FUNC_16(VAR_10);
 return VAR_20;
}

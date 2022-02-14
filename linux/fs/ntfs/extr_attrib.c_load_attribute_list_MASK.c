
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct super_block {unsigned long s_blocksize; unsigned char s_blocksize_bits; } ;
struct buffer_head {int b_data; } ;
typedef int s64 ;
struct TYPE_7__ {int length; scalar_t__ vcn; } ;
typedef TYPE_1__ runlist_element ;
struct TYPE_8__ {int lock; TYPE_1__* rl; } ;
typedef TYPE_2__ runlist ;
struct TYPE_9__ {unsigned char cluster_size_bits; struct super_block* sb; } ;
typedef TYPE_3__ ntfs_volume ;
typedef unsigned char LCN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int ,int const) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct super_block*,char*) ;
 unsigned char FUNC_6 (TYPE_1__*,scalar_t__) ;
 struct buffer_head* FUNC_7 (struct super_block*,unsigned long) ;
 int FUNC_8 (int *) ;

int FUNC_9(ntfs_volume *VAR_2, runlist *VAR_3, u8 *VAR_4,
  const s64 VAR_5, const s64 VAR_6)
{
 LCN VAR_7;
 u8 *VAR_8 = VAR_4;
 u8 *VAR_9 = VAR_8 + VAR_6;
 runlist_element *VAR_10;
 struct buffer_head *VAR_11;
 struct super_block *VAR_12;
 unsigned long VAR_13;
 unsigned long VAR_14, VAR_15;
 int VAR_16 = 0;
 unsigned char VAR_17;

 FUNC_4("Entering.");
 if (!VAR_2 || !VAR_3 || !VAR_8 || VAR_5 <= 0 || VAR_6 < 0 ||
   VAR_6 > VAR_5)
  return -VAR_0;
 if (!VAR_6) {
  FUNC_3(VAR_8, 0, VAR_5);
  return 0;
 }
 VAR_12 = VAR_2->sb;
 VAR_13 = VAR_12->s_blocksize;
 VAR_17 = VAR_12->s_blocksize_bits;
 FUNC_1(&VAR_3->lock);
 VAR_10 = VAR_3->rl;
 if (!VAR_10) {
  FUNC_5(VAR_12, "Cannot read attribute list since runlist is "
    "missing.");
  goto err_out;
 }

 while (VAR_10->length) {
  VAR_7 = FUNC_6(VAR_10, VAR_10->vcn);
  FUNC_4("Reading vcn = 0x%llx, lcn = 0x%llx.",
    (unsigned long long)VAR_10->vcn,
    (unsigned long long)VAR_7);

  if (VAR_7 < 0) {
   FUNC_5(VAR_12, "ntfs_rl_vcn_to_lcn() failed.  Cannot "
     "read attribute list.");
   goto err_out;
  }
  VAR_14 = VAR_7 << VAR_2->cluster_size_bits >> VAR_17;

  VAR_15 = VAR_14 + (VAR_10->length << VAR_2->cluster_size_bits >>
    VAR_17);
  FUNC_4("max_block = 0x%lx.", VAR_15);
  do {
   FUNC_4("Reading block = 0x%lx.", VAR_14);
   VAR_11 = FUNC_7(VAR_12, VAR_14);
   if (!VAR_11) {
    FUNC_5(VAR_12, "sb_bread() failed. Cannot "
      "read attribute list.");
    goto err_out;
   }
   if (VAR_8 + VAR_13 >= VAR_9)
    goto do_final;
   FUNC_2(VAR_8, VAR_11->b_data, VAR_13);
   FUNC_0(VAR_11);
   VAR_8 += VAR_13;
  } while (++VAR_14 < VAR_15);
  VAR_10++;
 }
 if (VAR_6 < VAR_5) {
initialize:
  FUNC_3(VAR_4 + VAR_6, 0, VAR_5 - VAR_6);
 }
done:
 FUNC_8(&VAR_3->lock);
 return VAR_16;
do_final:
 if (VAR_8 < VAR_9) {
  FUNC_2(VAR_8, VAR_11->b_data, VAR_9 - VAR_8);
  FUNC_0(VAR_11);
  if (VAR_6 < VAR_5)
   goto initialize;
  goto done;
 }
 FUNC_0(VAR_11);

 FUNC_5(VAR_12, "Attribute list buffer overflow. Read attribute list "
   "is truncated.");
err_out:
 VAR_16 = -VAR_1;
 goto done;
}

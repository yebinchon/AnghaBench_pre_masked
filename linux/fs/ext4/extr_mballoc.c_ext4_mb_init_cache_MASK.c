
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_blocksize_bits; } ;
struct page {int index; TYPE_1__* mapping; } ;
struct inode {struct super_block* i_sb; } ;
struct ext4_group_info {char* bb_counters; scalar_t__ bb_fragments; } ;
struct buffer_head {char* b_data; } ;
typedef int gfp_t ;
typedef size_t ext4_group_t ;
struct TYPE_2__ {struct inode* host; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ext4_group_info*) ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 int VAR_1 ;
 int FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 struct ext4_group_info* FUNC_8 (struct super_block*,size_t) ;
 size_t FUNC_9 (struct super_block*) ;
 int FUNC_10 (struct super_block*,size_t) ;
 int FUNC_11 (struct super_block*,char*,char*,size_t) ;
 int FUNC_12 (struct super_block*,char*,size_t) ;
 int FUNC_13 (struct super_block*,char*,size_t) ;
 struct buffer_head* FUNC_14 (struct super_block*,size_t) ;
 int FUNC_15 (struct super_block*,size_t) ;
 int FUNC_16 (struct super_block*,size_t,struct buffer_head*) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (struct buffer_head**) ;
 struct buffer_head** FUNC_19 (int,int ) ;
 int FUNC_20 (int,char*,size_t,...) ;
 int FUNC_21 (char*,char*,int) ;
 int FUNC_22 (char*,int,int) ;
 char* FUNC_23 (struct page*) ;
 int FUNC_24 (struct super_block*,size_t) ;
 int FUNC_25 (struct super_block*,size_t) ;

__attribute__((used)) static int FUNC_26(struct page *VAR_2, char *VAR_3, gfp_t VAR_4)
{
 ext4_group_t VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9 = 0;
 int VAR_10;
 ext4_group_t VAR_11, VAR_12;
 int VAR_13;
 struct super_block *VAR_14;
 struct buffer_head *VAR_15;
 struct buffer_head **VAR_16 = ((void*)0);
 struct inode *VAR_17;
 char *VAR_18;
 char *VAR_19;
 struct ext4_group_info *VAR_20;

 FUNC_20(1, "init page %lu\n", VAR_2->index);

 VAR_17 = VAR_2->mapping->host;
 VAR_14 = VAR_17->i_sb;
 VAR_5 = FUNC_9(VAR_14);
 VAR_6 = FUNC_17(VAR_17);
 VAR_7 = VAR_1 / VAR_6;

 VAR_8 = VAR_7 >> 1;
 if (VAR_8 == 0)
  VAR_8 = 1;


 if (VAR_8 > 1) {
  VAR_10 = sizeof(struct buffer_head *) * VAR_8;
  VAR_16 = FUNC_19(VAR_10, VAR_4);
  if (VAR_16 == ((void*)0)) {
   VAR_9 = -VAR_0;
   goto out;
  }
 } else
  VAR_16 = &VAR_15;

 VAR_11 = VAR_2->index * VAR_7 / 2;


 for (VAR_10 = 0, VAR_12 = VAR_11; VAR_10 < VAR_8; VAR_10++, VAR_12++) {
  if (VAR_12 >= VAR_5)
   break;

  VAR_20 = FUNC_8(VAR_14, VAR_12);






  if (FUNC_4(VAR_2) && !FUNC_1(VAR_20)) {
   VAR_16[VAR_10] = ((void*)0);
   continue;
  }
  VAR_16[VAR_10] = FUNC_14(VAR_14, VAR_12);
  if (FUNC_2(VAR_16[VAR_10])) {
   VAR_9 = FUNC_3(VAR_16[VAR_10]);
   VAR_16[VAR_10] = ((void*)0);
   goto out;
  }
  FUNC_20(1, "read bitmap for group %u\n", VAR_12);
 }


 for (VAR_10 = 0, VAR_12 = VAR_11; VAR_10 < VAR_8; VAR_10++, VAR_12++) {
  int VAR_21;

  if (!VAR_16[VAR_10])
   continue;
  VAR_21 = FUNC_16(VAR_14, VAR_12, VAR_16[VAR_10]);
  if (!VAR_9)
   VAR_9 = VAR_21;
 }

 VAR_13 = VAR_2->index * VAR_7;
 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  VAR_12 = (VAR_13 + VAR_10) >> 1;
  if (VAR_12 >= VAR_5)
   break;

  if (!VAR_16[VAR_12 - VAR_11])

   continue;

  if (!FUNC_7(VAR_16[VAR_12 - VAR_11]))

   continue;
  VAR_9 = 0;







  VAR_18 = FUNC_23(VAR_2) + (VAR_10 * VAR_6);
  VAR_19 = VAR_16[VAR_12 - VAR_11]->b_data;





  if ((VAR_13 + VAR_10) & 1) {

   FUNC_0(VAR_3 == ((void*)0));
   FUNC_20(1, "put buddy for group %u in page %lu/%x\n",
    VAR_12, VAR_2->index, VAR_10 * VAR_6);
   FUNC_25(VAR_14, VAR_12);
   VAR_20 = FUNC_8(VAR_14, VAR_12);
   VAR_20->bb_fragments = 0;
   FUNC_22(VAR_20->bb_counters, 0,
          sizeof(*VAR_20->bb_counters) *
    (VAR_14->s_blocksize_bits+2));



   FUNC_10(VAR_14, VAR_12);

   FUNC_22(VAR_18, 0xff, VAR_6);
   FUNC_11(VAR_14, VAR_18, VAR_3, VAR_12);
   FUNC_15(VAR_14, VAR_12);
   VAR_3 = ((void*)0);
  } else {

   FUNC_0(VAR_3 != ((void*)0));
   FUNC_20(1, "put bitmap for group %u in page %lu/%x\n",
    VAR_12, VAR_2->index, VAR_10 * VAR_6);
   FUNC_24(VAR_14, VAR_12);


   FUNC_10(VAR_14, VAR_12);
   FUNC_21(VAR_18, VAR_19, VAR_6);


   FUNC_13(VAR_14, VAR_18, VAR_12);
   FUNC_12(VAR_14, VAR_18, VAR_12);
   FUNC_15(VAR_14, VAR_12);




   VAR_3 = VAR_18;
  }
 }
 FUNC_5(VAR_2);

out:
 if (VAR_16) {
  for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++)
   FUNC_6(VAR_16[VAR_10]);
  if (VAR_16 != &VAR_15)
   FUNC_18(VAR_16);
 }
 return VAR_9;
}

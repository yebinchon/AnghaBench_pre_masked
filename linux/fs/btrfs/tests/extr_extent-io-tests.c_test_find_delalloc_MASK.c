
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct page {int dummy; } ;
struct inode {int i_mapping; } ;
struct extent_io_tree {int dummy; } ;
struct TYPE_2__ {struct extent_io_tree io_tree; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct page*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct page*) ;
 int VAR_12 ;
 struct inode* FUNC_3 () ;
 int FUNC_4 (struct extent_io_tree*,int ,int,unsigned int) ;
 int FUNC_5 (int *,struct extent_io_tree*,int ,int *) ;
 struct page* FUNC_6 (int ,int) ;
 int FUNC_7 (struct inode*,struct page*,int*,int*) ;
 struct page* FUNC_8 (int ,int) ;
 struct page* FUNC_9 (int ,unsigned long,int ) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct page*) ;
 scalar_t__ FUNC_13 (struct inode*,int,int,int) ;
 int FUNC_14 (struct page*) ;
 int FUNC_15 (struct extent_io_tree*,int,int,int ,int *) ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct extent_io_tree*,int,int) ;
 int FUNC_20 (struct page*) ;

__attribute__((used)) static int FUNC_21(u32 VAR_13)
{
 struct inode *VAR_14;
 struct extent_io_tree *VAR_15;
 struct page *VAR_16;
 struct page *VAR_17 = ((void*)0);
 unsigned long VAR_18 = 0;

 u64 VAR_19 = VAR_0;
 u64 VAR_20 = 2 * VAR_19;
 u64 VAR_21, VAR_22, VAR_23;
 bool VAR_24;
 int VAR_25 = -VAR_1;

 FUNC_17("running find delalloc tests");

 VAR_14 = FUNC_3();
 if (!VAR_14) {
  FUNC_18(VAR_12);
  return -VAR_2;
 }
 VAR_15 = &FUNC_0(VAR_14)->io_tree;





 FUNC_5(((void*)0), VAR_15, VAR_4, ((void*)0));






 for (VAR_18 = 0; VAR_18 < (VAR_20 >> VAR_5); VAR_18++) {
  VAR_16 = FUNC_9(VAR_14->i_mapping, VAR_18, VAR_3);
  if (!VAR_16) {
   FUNC_16("failed to allocate test page");
   VAR_25 = -VAR_2;
   goto out;
  }
  FUNC_2(VAR_16);
  if (VAR_18) {
   FUNC_20(VAR_16);
  } else {
   FUNC_10(VAR_16);
   VAR_17 = VAR_16;
  }
 }





 FUNC_15(VAR_15, 0, VAR_13 - 1, 0, ((void*)0));
 VAR_21 = 0;
 VAR_22 = 0;
 VAR_24 = FUNC_7(VAR_14, VAR_17, &VAR_21,
      &VAR_22);
 if (!VAR_24) {
  FUNC_16("should have found at least one delalloc");
  goto out_bits;
 }
 if (VAR_21 != 0 || VAR_22 != (VAR_13 - 1)) {
  FUNC_16("expected start 0 end %u, got start %llu end %llu",
   VAR_13 - 1, VAR_21, VAR_22);
  goto out_bits;
 }
 FUNC_19(VAR_15, VAR_21, VAR_22);
 FUNC_20(VAR_17);
 FUNC_14(VAR_17);







 VAR_23 = VAR_11;
 VAR_17 = FUNC_8(VAR_14->i_mapping,
         VAR_23 >> VAR_5);
 if (!VAR_17) {
  FUNC_16("couldn't find the locked page");
  goto out_bits;
 }
 FUNC_15(VAR_15, VAR_13, VAR_19 - 1, 0, ((void*)0));
 VAR_21 = VAR_23;
 VAR_22 = 0;
 VAR_24 = FUNC_7(VAR_14, VAR_17, &VAR_21,
      &VAR_22);
 if (!VAR_24) {
  FUNC_16("couldn't find delalloc in our range");
  goto out_bits;
 }
 if (VAR_21 != VAR_23 || VAR_22 != VAR_19 - 1) {
  FUNC_16("expected start %llu end %llu, got start %llu, end %llu",
    VAR_23, VAR_19 - 1, VAR_21, VAR_22);
  goto out_bits;
 }
 if (FUNC_13(VAR_14, VAR_21, VAR_22,
          VAR_8 | VAR_9)) {
  FUNC_16("there were unlocked pages in the range");
  goto out_bits;
 }
 FUNC_19(VAR_15, VAR_21, VAR_22);

 FUNC_14(VAR_17);






 VAR_23 = VAR_19 + VAR_13;
 VAR_17 = FUNC_8(VAR_14->i_mapping, VAR_23 >>
         VAR_5);
 if (!VAR_17) {
  FUNC_16("couldn't find the locked page");
  goto out_bits;
 }
 VAR_21 = VAR_23;
 VAR_22 = 0;
 VAR_24 = FUNC_7(VAR_14, VAR_17, &VAR_21,
      &VAR_22);
 if (VAR_24) {
  FUNC_16("found range when we shouldn't have");
  goto out_bits;
 }
 if (VAR_22 != (u64)-1) {
  FUNC_16("did not return the proper end offset");
  goto out_bits;
 }
 FUNC_15(VAR_15, VAR_19, VAR_20 - 1, 0, ((void*)0));
 VAR_21 = VAR_23;
 VAR_22 = 0;
 VAR_24 = FUNC_7(VAR_14, VAR_17, &VAR_21,
      &VAR_22);
 if (!VAR_24) {
  FUNC_16("didn't find our range");
  goto out_bits;
 }
 if (VAR_21 != VAR_23 || VAR_22 != VAR_20 - 1) {
  FUNC_16("expected start %llu end %llu, got start %llu end %llu",
    VAR_23, VAR_20 - 1, VAR_21, VAR_22);
  goto out_bits;
 }
 if (FUNC_13(VAR_14, VAR_21, VAR_22,
          VAR_8 | VAR_9)) {
  FUNC_16("pages in range were not all locked");
  goto out_bits;
 }
 FUNC_19(VAR_15, VAR_21, VAR_22);





 VAR_16 = FUNC_6(VAR_14->i_mapping,
        (VAR_19 + VAR_10) >> VAR_5);
 if (!VAR_16) {
  FUNC_16("couldn't find our page");
  goto out_bits;
 }
 FUNC_1(VAR_16);
 FUNC_14(VAR_16);


 FUNC_12(VAR_17);
 VAR_21 = VAR_23;
 VAR_22 = 0;






 VAR_24 = FUNC_7(VAR_14, VAR_17, &VAR_21,
      &VAR_22);
 if (!VAR_24) {
  FUNC_16("didn't find our range");
  goto out_bits;
 }
 if (VAR_21 != VAR_23 && VAR_22 != VAR_23 + VAR_6 - 1) {
  FUNC_16("expected start %llu end %llu, got start %llu end %llu",
    VAR_23, VAR_23 + VAR_6 - 1, VAR_21, VAR_22);
  goto out_bits;
 }
 if (FUNC_13(VAR_14, VAR_21, VAR_22, VAR_8 |
          VAR_9)) {
  FUNC_16("pages in range were not all locked");
  goto out_bits;
 }
 VAR_25 = 0;
out_bits:
 FUNC_4(VAR_15, 0, VAR_20 - 1, (unsigned)-1);
out:
 if (VAR_17)
  FUNC_14(VAR_17);
 FUNC_13(VAR_14, 0, VAR_20 - 1,
      VAR_9 | VAR_7);
 FUNC_11(VAR_14);
 return VAR_25;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u64 ;
struct page {int dummy; } ;
struct inode {int i_sb; } ;
struct extent_state {int dummy; } ;
struct btrfs_fs_info {scalar_t__ sectorsize; } ;
typedef size_t loff_t ;
struct TYPE_4__ {int flags; int io_tree; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct page*) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (TYPE_1__*,size_t,size_t,struct extent_state**) ;
 int FUNC_4 (TYPE_1__*) ;
 struct btrfs_fs_info* FUNC_5 (int ) ;
 int FUNC_6 (struct inode*,size_t,size_t,unsigned int,struct extent_state**) ;
 int FUNC_7 (int *,size_t,size_t,int,int ,int ,struct extent_state**) ;
 size_t FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,size_t) ;
 size_t FUNC_10 (size_t,scalar_t__) ;
 int FUNC_11 (struct page*) ;

int FUNC_12(struct inode *VAR_5, struct page **VAR_6,
        size_t VAR_7, loff_t VAR_8, size_t VAR_9,
        struct extent_state **VAR_10)
{
 struct btrfs_fs_info *VAR_11 = FUNC_5(VAR_5->i_sb);
 int VAR_12 = 0;
 int VAR_13;
 u64 VAR_14;
 u64 VAR_15;
 u64 VAR_16;
 u64 VAR_17 = VAR_8 + VAR_9;
 loff_t VAR_18 = FUNC_8(VAR_5);
 unsigned int VAR_19 = 0;

 VAR_15 = VAR_8 & ~((u64) VAR_11->sectorsize - 1);
 VAR_14 = FUNC_10(VAR_9 + VAR_8 - VAR_15,
        VAR_11->sectorsize);

 VAR_16 = VAR_15 + VAR_14 - 1;





 FUNC_7(&FUNC_0(VAR_5)->io_tree, VAR_15, VAR_16,
    VAR_2 | VAR_4 | VAR_1,
    0, 0, VAR_10);

 if (!FUNC_4(FUNC_0(VAR_5))) {
  if (VAR_15 >= VAR_18 &&
      !(FUNC_0(VAR_5)->flags & VAR_0)) {





   VAR_19 |= VAR_3;
  } else {
   VAR_12 = FUNC_3(FUNC_0(VAR_5),
           VAR_15,
           VAR_14, VAR_10);
   if (VAR_12)
    return VAR_12;
  }
 }

 VAR_12 = FUNC_6(VAR_5, VAR_15, VAR_16,
     VAR_19, VAR_10);
 if (VAR_12)
  return VAR_12;

 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
  struct page *VAR_20 = VAR_6[VAR_13];
  FUNC_2(VAR_20);
  FUNC_1(VAR_20);
  FUNC_11(VAR_20);
 }






 if (VAR_17 > VAR_18)
  FUNC_9(VAR_5, VAR_17);
 return 0;
}

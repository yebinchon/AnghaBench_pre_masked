
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct super_block {int dummy; } ;
struct page {int index; TYPE_1__* mapping; } ;
struct inode {int i_size; struct super_block* i_sb; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct super_block*,int,int) ;
 int FUNC_5 (void*,int,scalar_t__,int) ;
 int FUNC_6 (struct page*) ;
 void* FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (void*,scalar_t__,int) ;
 int FUNC_10 (void*,int ,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int) ;
 int FUNC_14 (char*,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (struct page*) ;

__attribute__((used)) static int FUNC_17(struct file *VAR_7, struct page *VAR_8)
{
 struct inode *VAR_9 = VAR_8->mapping->host;
 u32 VAR_10;
 int VAR_11;
 void *VAR_12;

 VAR_10 = (VAR_9->i_size + VAR_5 - 1) >> VAR_4;
 VAR_11 = 0;
 VAR_12 = FUNC_7(VAR_8);

 if (VAR_8->index < VAR_10) {
  struct super_block *VAR_13 = VAR_9->i_sb;
  u32 VAR_14 = FUNC_1(VAR_9) + VAR_8->index * 4;
  u32 VAR_15, VAR_16, VAR_17;
  bool VAR_18, VAR_19;

  FUNC_11(&VAR_6);
  VAR_15 = *(u32 *) FUNC_4(VAR_13, VAR_14, 4);
  VAR_18 = (VAR_15 & VAR_3);
  VAR_19 = (VAR_15 & VAR_2);
  VAR_15 &= ~VAR_1;

  if (VAR_19) {






   VAR_16 = VAR_15 << VAR_0;
   if (VAR_18) {
    VAR_17 = VAR_5;

    if (VAR_8->index == VAR_10 - 1)
     VAR_17 =
      FUNC_13(VAR_9->i_size);
   } else {
    VAR_17 = *(u16 *)
     FUNC_4(VAR_13, VAR_16, 2);
    VAR_16 += 2;
   }
  } else {







   VAR_16 = FUNC_1(VAR_9) + VAR_10 * 4;
   if (VAR_8->index)
    VAR_16 = *(u32 *)
     FUNC_4(VAR_13, VAR_14 - 4, 4);

   if (FUNC_15(VAR_16 & VAR_2)) {

    u32 VAR_20 = VAR_16;
    VAR_16 = VAR_20 & ~VAR_1;
    VAR_16 <<= VAR_0;
    if (VAR_20 & VAR_3) {
     VAR_16 += VAR_5;
    } else {
     VAR_17 = *(u16 *)
      FUNC_4(VAR_13, VAR_16, 2);
     VAR_16 += 2 + VAR_17;
    }
   }
   VAR_16 &= ~VAR_1;
   VAR_17 = VAR_15 - VAR_16;
  }

  if (VAR_17 == 0)
   ;
  else if (FUNC_15(VAR_17 > 2*VAR_5 ||
      (VAR_18 && VAR_17 > VAR_5))) {
   FUNC_12(&VAR_6);
   FUNC_14("bad data blocksize %u\n", VAR_17);
   goto err;
  } else if (VAR_18) {
   FUNC_9(VAR_12,
          FUNC_4(VAR_13, VAR_16, VAR_17),
          VAR_17);
   VAR_11 = VAR_17;
  } else {
   VAR_11 = FUNC_5(VAR_12,
     VAR_5,
     FUNC_4(VAR_13, VAR_16, VAR_17),
     VAR_17);
  }
  FUNC_12(&VAR_6);
  if (FUNC_15(VAR_11 < 0))
   goto err;
 }

 FUNC_10(VAR_12 + VAR_11, 0, VAR_5 - VAR_11);
 FUNC_6(VAR_8);
 FUNC_8(VAR_8);
 FUNC_3(VAR_8);
 FUNC_16(VAR_8);
 return 0;

err:
 FUNC_8(VAR_8);
 FUNC_0(VAR_8);
 FUNC_2(VAR_8);
 FUNC_16(VAR_8);
 return 0;
}

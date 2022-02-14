
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct item_head {int dummy; } ;
struct inode {scalar_t__ i_size; TYPE_2__* i_sb; } ;
struct cpu_key {int dummy; } ;
struct buffer_head {int b_page; } ;
typedef scalar_t__ sector_t ;
typedef int loff_t ;
typedef scalar_t__ b_blocknr_t ;
typedef int __le32 ;
struct TYPE_11__ {int s_blocksize; } ;
struct TYPE_10__ {int pos_in_item; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct buffer_head*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct item_head*,struct item_head*) ;
 int FUNC_7 (struct cpu_key*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int *,int) ;
 struct buffer_head* FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (struct buffer_head*,struct item_head*) ;
 int FUNC_12 (struct item_head*) ;
 int FUNC_13 (struct item_head*) ;
 scalar_t__ FUNC_14 (struct item_head*) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct item_head*) ;
 int FUNC_18 (struct cpu_key*,struct inode*,int,int ,int) ;
 int FUNC_19 (struct buffer_head*,TYPE_2__*,scalar_t__) ;
 int FUNC_20 (char*,scalar_t__,int) ;
 int FUNC_21 (char*,int ,int) ;
 TYPE_1__ VAR_9 ;
 int FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (TYPE_2__*,struct cpu_key*,TYPE_1__*) ;
 int FUNC_24 (struct buffer_head*) ;
 int FUNC_25 (struct buffer_head*) ;
 int FUNC_26 (struct cpu_key*,int) ;
 struct item_head* FUNC_27 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_28(struct inode *VAR_10, sector_t VAR_11,
          struct buffer_head *VAR_12, int VAR_13)
{
 FUNC_2(VAR_9);
 struct cpu_key VAR_14;
 struct buffer_head *VAR_15;
 struct item_head *VAR_16, VAR_17;
 b_blocknr_t VAR_18;
 char *VAR_19 = ((void*)0);
 int VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23 = 0;
 unsigned long VAR_24;


 FUNC_18(&VAR_14, VAR_10,
       (loff_t) VAR_11 * VAR_10->i_sb->s_blocksize + 1, VAR_7,
       3);

 VAR_22 = FUNC_23(VAR_10->i_sb, &VAR_14, &VAR_9);
 if (VAR_22 != VAR_6) {
  FUNC_22(&VAR_9);
  if (VAR_19)
   FUNC_16(VAR_12->b_page);
  if (VAR_22 == VAR_4)
   return -VAR_0;





  if ((VAR_13 & VAR_2)
      && !FUNC_4(VAR_12->b_page)) {
   return -VAR_1;
  }
  return 0;
 }

 VAR_15 = FUNC_10(&VAR_9);
 VAR_16 = FUNC_27(&VAR_9);
 if (FUNC_14(VAR_16)) {
  __le32 *VAR_25 = (__le32 *) FUNC_11(VAR_15, VAR_16);






  VAR_18 = FUNC_9(VAR_25, VAR_9.pos_in_item);
  VAR_21 = 0;
  if (VAR_18) {
   FUNC_19(VAR_12, VAR_10->i_sb, VAR_18);
   if (VAR_9.pos_in_item ==
       ((FUNC_12(VAR_16) / VAR_8) - 1)) {
    FUNC_24(VAR_12);
   }
  } else






  if ((VAR_13 & VAR_2)
       && !FUNC_4(VAR_12->b_page)) {
   VAR_21 = -VAR_1;
  }

  FUNC_22(&VAR_9);
  if (VAR_19)
   FUNC_16(VAR_12->b_page);
  return VAR_21;
 }

 if (!(VAR_13 & VAR_3)) {




  FUNC_22(&VAR_9);
  if (VAR_19)
   FUNC_16(VAR_12->b_page);
  return -VAR_1;
 }






 if (FUNC_5(VAR_12)) {
  goto finished;
 } else






 if (!VAR_12->b_page || FUNC_4(VAR_12->b_page)) {
  FUNC_25(VAR_12);
  goto finished;
 }

 VAR_24 = (FUNC_7(&VAR_14) - 1) & (VAR_5 - 1);
 FUNC_6(&VAR_17, VAR_16);







 if (!VAR_19)
  VAR_19 = (char *)FUNC_15(VAR_12->b_page);

 VAR_19 += VAR_24;
 FUNC_21(VAR_19, 0, VAR_10->i_sb->s_blocksize);
 do {
  if (!FUNC_13(VAR_16)) {
   FUNC_0();
  }






  if ((FUNC_17(VAR_16) + VAR_9.pos_in_item) > VAR_10->i_size)
   break;
  if ((FUNC_17(VAR_16) - 1 + FUNC_12(VAR_16)) > VAR_10->i_size) {
   VAR_20 =
       VAR_10->i_size - (FUNC_17(VAR_16) - 1) -
       VAR_9.pos_in_item;
   VAR_23 = 1;
  } else {
   VAR_20 = FUNC_12(VAR_16) - VAR_9.pos_in_item;
  }
  FUNC_20(VAR_19, FUNC_11(VAR_15, VAR_16) + VAR_9.pos_in_item, VAR_20);

  if (VAR_23)
   break;

  VAR_19 += VAR_20;







  if (FUNC_3(&VAR_9) != (FUNC_1(VAR_15) - 1))
   break;


  FUNC_26(&VAR_14, FUNC_7(&VAR_14) + VAR_20);
  VAR_22 = FUNC_23(VAR_10->i_sb, &VAR_14, &VAR_9);
  if (VAR_22 != VAR_6)

   break;
  VAR_15 = FUNC_10(&VAR_9);
  VAR_16 = FUNC_27(&VAR_9);
 } while (1);

 FUNC_8(VAR_12->b_page);
 FUNC_16(VAR_12->b_page);

finished:
 FUNC_22(&VAR_9);

 if (VAR_22 == VAR_4)
  return -VAR_0;





 FUNC_19(VAR_12, VAR_10->i_sb, 0);
 FUNC_25(VAR_12);
 return 0;
}

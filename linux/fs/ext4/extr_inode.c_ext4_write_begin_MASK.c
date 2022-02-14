
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct address_space* mapping; } ;
struct inode {int i_size; int i_sb; scalar_t__ i_nlink; } ;
struct file {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef int pgoff_t ;
typedef int loff_t ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct page*,int,unsigned int,int ) ;
 int VAR_7 ;
 int FUNC_4 (struct page*,int,unsigned int,int ) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int FUNC_6 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_7 (struct inode*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,struct inode*) ;
 int FUNC_10 (int *,struct inode*) ;
 scalar_t__ FUNC_11 (struct inode*) ;
 scalar_t__ FUNC_12 (struct inode*) ;
 scalar_t__ FUNC_13 (int ,int*) ;
 scalar_t__ FUNC_14 (struct inode*,int ) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (struct address_space*,struct inode*,int,unsigned int,unsigned int,struct page**) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (int *,int ,unsigned int,unsigned int,int *,int ) ;
 int FUNC_19 (struct inode*) ;
 struct page* FUNC_20 (struct address_space*,int,unsigned int) ;
 int FUNC_21 (struct page*) ;
 int FUNC_22 (struct page*) ;
 int FUNC_23 (struct page*) ;
 int FUNC_24 (struct inode*,int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_25 (int ) ;
 int FUNC_26 (struct page*) ;
 int FUNC_27 (struct page*) ;

__attribute__((used)) static int FUNC_28(struct file *VAR_10, struct address_space *VAR_11,
       loff_t VAR_12, unsigned VAR_13, unsigned VAR_14,
       struct page **VAR_15, void **VAR_16)
{
 struct inode *VAR_17 = VAR_11->host;
 int VAR_18, VAR_19;
 handle_t *VAR_20;
 int VAR_21 = 0;
 struct page *VAR_22;
 pgoff_t VAR_23;
 unsigned VAR_24, VAR_25;

 if (FUNC_25(FUNC_6(FUNC_0(VAR_17->i_sb))))
  return -VAR_0;

 FUNC_24(VAR_17, VAR_12, VAR_13, VAR_14);




 VAR_19 = FUNC_19(VAR_17) + 1;
 VAR_23 = VAR_12 >> VAR_5;
 VAR_24 = VAR_12 & (VAR_6 - 1);
 VAR_25 = VAR_24 + VAR_13;

 if (FUNC_14(VAR_17, VAR_4)) {
  VAR_18 = FUNC_16(VAR_11, VAR_17, VAR_12, VAR_13,
          VAR_14, VAR_15);
  if (VAR_18 < 0)
   return VAR_18;
  if (VAR_18 == 1)
   return 0;
 }
retry_grab:
 VAR_22 = FUNC_20(VAR_11, VAR_23, VAR_14);
 if (!VAR_22)
  return -VAR_1;
 FUNC_26(VAR_22);

retry_journal:
 VAR_20 = FUNC_7(VAR_17, VAR_3, VAR_19);
 if (FUNC_1(VAR_20)) {
  FUNC_23(VAR_22);
  return FUNC_2(VAR_20);
 }

 FUNC_21(VAR_22);
 if (VAR_22->mapping != VAR_11) {

  FUNC_26(VAR_22);
  FUNC_23(VAR_22);
  FUNC_8(VAR_20);
  goto retry_grab;
 }

 FUNC_27(VAR_22);
 if (FUNC_11(VAR_17))
  VAR_18 = FUNC_3(VAR_22, VAR_12, VAR_13,
       VAR_9);
 else
  VAR_18 = FUNC_3(VAR_22, VAR_12, VAR_13, VAR_8);

 if (!VAR_18 && FUNC_12(VAR_17)) {
  VAR_18 = FUNC_18(VAR_20, FUNC_22(VAR_22),
          VAR_24, VAR_25, ((void*)0),
          VAR_7);
 }

 if (VAR_18) {
  bool VAR_26 = (VAR_12 + VAR_13 > VAR_17->i_size) &&
    !FUNC_17(VAR_17);

  FUNC_26(VAR_22);
  if (VAR_26 && FUNC_5(VAR_17))
   FUNC_9(VAR_20, VAR_17);

  FUNC_8(VAR_20);
  if (VAR_26) {
   FUNC_15(VAR_17);






   if (VAR_17->i_nlink)
    FUNC_10(((void*)0), VAR_17);
  }

  if (VAR_18 == -VAR_2 &&
      FUNC_13(VAR_17->i_sb, &VAR_21))
   goto retry_journal;
  FUNC_23(VAR_22);
  return VAR_18;
 }
 *VAR_15 = VAR_22;
 return VAR_18;
}

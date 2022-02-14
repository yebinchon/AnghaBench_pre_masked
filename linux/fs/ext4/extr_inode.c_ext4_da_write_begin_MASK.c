
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct address_space* mapping; } ;
struct inode {unsigned int i_size; int i_sb; int i_mode; } ;
struct file {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef unsigned int pgoff_t ;
typedef unsigned int loff_t ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int *) ;
 unsigned int VAR_6 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct page*,unsigned int,unsigned int,int ) ;
 int FUNC_5 (struct page*,unsigned int,unsigned int,int ) ;
 int VAR_7 ;
 int FUNC_6 (struct inode*,unsigned int,unsigned int) ;
 int FUNC_7 (struct address_space*,struct inode*,unsigned int,unsigned int,unsigned int,struct page**,void**) ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (struct inode*,int ,int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ,int*) ;
 scalar_t__ FUNC_13 (struct inode*,int ) ;
 int FUNC_14 (struct inode*) ;
 scalar_t__ FUNC_15 (struct inode*) ;
 int FUNC_16 (struct file*,struct address_space*,unsigned int,unsigned int,unsigned int,struct page**,void**) ;
 struct page* FUNC_17 (struct address_space*,unsigned int,unsigned int) ;
 int FUNC_18 (struct page*) ;
 int FUNC_19 (struct page*) ;
 int FUNC_20 (struct inode*,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_21 (int ) ;
 int FUNC_22 (struct page*) ;
 int FUNC_23 (struct page*) ;

__attribute__((used)) static int FUNC_24(struct file *VAR_8, struct address_space *VAR_9,
          loff_t VAR_10, unsigned VAR_11, unsigned VAR_12,
          struct page **VAR_13, void **VAR_14)
{
 int VAR_15, VAR_16 = 0;
 struct page *VAR_17;
 pgoff_t VAR_18;
 struct inode *VAR_19 = VAR_9->host;
 handle_t *VAR_20;

 if (FUNC_21(FUNC_8(FUNC_0(VAR_19->i_sb))))
  return -VAR_0;

 VAR_18 = VAR_10 >> VAR_6;

 if (FUNC_11(VAR_19->i_sb) || FUNC_3(VAR_19->i_mode) ||
     FUNC_15(VAR_19)) {
  *VAR_14 = (void *)VAR_5;
  return FUNC_16(VAR_8, VAR_9, VAR_10,
     VAR_11, VAR_12, VAR_13, VAR_14);
 }
 *VAR_14 = (void *)0;
 FUNC_20(VAR_19, VAR_10, VAR_11, VAR_12);

 if (FUNC_13(VAR_19, VAR_4)) {
  VAR_15 = FUNC_7(VAR_9, VAR_19,
            VAR_10, VAR_11, VAR_12,
            VAR_13, VAR_14);
  if (VAR_15 < 0)
   return VAR_15;
  if (VAR_15 == 1)
   return 0;
 }
retry_grab:
 VAR_17 = FUNC_17(VAR_9, VAR_18, VAR_12);
 if (!VAR_17)
  return -VAR_1;
 FUNC_22(VAR_17);







retry_journal:
 VAR_20 = FUNC_9(VAR_19, VAR_3,
    FUNC_6(VAR_19, VAR_10, VAR_11));
 if (FUNC_1(VAR_20)) {
  FUNC_19(VAR_17);
  return FUNC_2(VAR_20);
 }

 FUNC_18(VAR_17);
 if (VAR_17->mapping != VAR_9) {

  FUNC_22(VAR_17);
  FUNC_19(VAR_17);
  FUNC_10(VAR_20);
  goto retry_grab;
 }

 FUNC_23(VAR_17);





 VAR_15 = FUNC_4(VAR_17, VAR_10, VAR_11, VAR_7);

 if (VAR_15 < 0) {
  FUNC_22(VAR_17);
  FUNC_10(VAR_20);





  if (VAR_10 + VAR_11 > VAR_19->i_size)
   FUNC_14(VAR_19);

  if (VAR_15 == -VAR_2 &&
      FUNC_12(VAR_19->i_sb, &VAR_16))
   goto retry_journal;

  FUNC_19(VAR_17);
  return VAR_15;
 }

 *VAR_13 = VAR_17;
 return VAR_15;
}

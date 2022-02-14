
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct page {int dummy; } ;
struct inode {scalar_t__ i_nlink; int i_ino; int i_mode; } ;


 int FUNC_0 (int ) ;
 struct page* FUNC_1 (int) ;
 int FUNC_2 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct inode*) ;
 struct page* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct inode*,int) ;
 int FUNC_9 (struct inode*,struct inode*,struct page*,struct page*) ;
 int FUNC_10 (struct inode*,struct inode*,struct qstr const*,struct page*) ;
 scalar_t__ FUNC_11 (struct inode*) ;
 struct page* FUNC_12 (struct inode*) ;
 int FUNC_13 (struct page*,int) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (struct inode*,struct page*) ;
 int FUNC_16 (struct inode*) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (struct inode*,struct inode*,struct page*,int) ;
 int FUNC_19 (struct page*) ;
 int FUNC_20 (struct qstr const*,struct page*) ;
 scalar_t__ FUNC_21 (struct inode*,int ) ;
 int FUNC_22 (struct page*) ;
 int FUNC_23 (struct inode*,struct inode*,struct page*) ;
 int FUNC_24 (struct page*) ;

struct page *FUNC_25(struct inode *VAR_2, struct inode *VAR_3,
   const struct qstr *VAR_4, const struct qstr *VAR_5,
   struct page *VAR_6)
{
 struct page *VAR_7;
 int VAR_8 = FUNC_0(FUNC_2(VAR_3));
 int VAR_9;

 if (FUNC_21(VAR_2, VAR_1)) {
  VAR_7 = FUNC_12(VAR_2);
  if (FUNC_4(VAR_7))
   return VAR_7;

  if (FUNC_5(VAR_2->i_mode)) {

   FUNC_19(VAR_7);
   VAR_9 = FUNC_23(VAR_2, VAR_3, VAR_7);
   if (VAR_9) {
    FUNC_22(VAR_7);
    goto put_error;
   }
   FUNC_24(VAR_7);
  }

  VAR_9 = FUNC_9(VAR_2, VAR_3, VAR_7, VAR_6);
  if (VAR_9)
   goto put_error;

  VAR_9 = FUNC_10(VAR_2, VAR_3, VAR_5, VAR_7);
  if (VAR_9)
   goto put_error;

  if ((FUNC_3(VAR_3) || VAR_8) &&
     FUNC_11(VAR_2)) {
   VAR_9 = FUNC_18(VAR_3, VAR_2, VAR_7, 0);
   if (VAR_9)
    goto put_error;
  }
 } else {
  VAR_7 = FUNC_7(FUNC_2(VAR_3), VAR_2->i_ino);
  if (FUNC_4(VAR_7))
   return VAR_7;
 }

 if (VAR_4) {
  FUNC_20(VAR_4, VAR_7);
  if (FUNC_3(VAR_3))
   FUNC_17(VAR_2);
 }





 if (FUNC_21(VAR_2, VAR_0)) {
  if (!FUNC_5(VAR_2->i_mode))
   FUNC_16(VAR_2);




  if (VAR_2->i_nlink == 0)
   FUNC_14(FUNC_2(VAR_3), VAR_2->i_ino);
  FUNC_8(VAR_2, 1);
 }
 return VAR_7;

put_error:
 FUNC_6(VAR_2);
 FUNC_15(VAR_2, VAR_7);
 FUNC_13(VAR_7, 1);
 return FUNC_1(VAR_9);
}

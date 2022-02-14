
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {scalar_t__ i_size; scalar_t__ i_nlink; } ;
struct file {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef scalar_t__ loff_t ;
typedef int handle_t ;


 unsigned int FUNC_0 (struct file*,struct address_space*,scalar_t__,unsigned int,unsigned int,struct page*,void*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct inode*) ;
 int FUNC_6 (int *,struct inode*) ;
 int FUNC_7 (int *,struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,scalar_t__) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*,scalar_t__,unsigned int,unsigned int,struct page*) ;
 int FUNC_12 (struct inode*,scalar_t__,scalar_t__) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (struct inode*,scalar_t__,unsigned int,unsigned int) ;
 int FUNC_15 (struct page*) ;

__attribute__((used)) static int FUNC_16(struct file *VAR_0,
     struct address_space *VAR_1,
     loff_t VAR_2, unsigned VAR_3, unsigned VAR_4,
     struct page *VAR_5, void *VAR_6)
{
 handle_t *VAR_7 = FUNC_3();
 struct inode *VAR_8 = VAR_1->host;
 loff_t VAR_9 = VAR_8->i_size;
 int VAR_10 = 0, VAR_11;
 int VAR_12 = 0;
 int VAR_13 = FUNC_2(VAR_8);
 bool VAR_14 = FUNC_10(VAR_8);

 FUNC_14(VAR_8, VAR_2, VAR_3, VAR_4);
 if (VAR_13) {
  VAR_10 = FUNC_11(VAR_8, VAR_2, VAR_3,
       VAR_4, VAR_5);
  if (VAR_10 < 0) {
   FUNC_15(VAR_5);
   FUNC_13(VAR_5);
   goto errout;
  }
  VAR_4 = VAR_10;
 } else
  VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2,
      VAR_3, VAR_4, VAR_5, VAR_6);







 if (!VAR_14)
  VAR_12 = FUNC_9(VAR_8, VAR_2 + VAR_4);
 FUNC_15(VAR_5);
 FUNC_13(VAR_5);

 if (VAR_9 < VAR_2 && !VAR_14)
  FUNC_12(VAR_8, VAR_9, VAR_2);






 if (VAR_12 || VAR_13)
  FUNC_5(VAR_7, VAR_8);

 if (VAR_2 + VAR_3 > VAR_8->i_size && !VAR_14 && FUNC_1(VAR_8))




  FUNC_6(VAR_7, VAR_8);
errout:
 VAR_11 = FUNC_4(VAR_7);
 if (!VAR_10)
  VAR_10 = VAR_11;

 if (VAR_2 + VAR_3 > VAR_8->i_size && !VAR_14) {
  FUNC_8(VAR_8);





  if (VAR_8->i_nlink)
   FUNC_7(((void*)0), VAR_8);
 }

 return VAR_10 ? VAR_10 : VAR_4;
}

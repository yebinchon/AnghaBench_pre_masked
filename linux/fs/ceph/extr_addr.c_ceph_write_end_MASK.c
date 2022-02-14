
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct address_space {int dummy; } ;
typedef unsigned int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,unsigned int) ;
 int FUNC_5 (char*,struct file*,struct inode*,struct page*,int,int,int) ;
 struct inode* FUNC_6 (struct file*) ;
 unsigned int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_1, struct address_space *VAR_2,
     loff_t VAR_3, unsigned VAR_4, unsigned VAR_5,
     struct page *VAR_6, void *VAR_7)
{
 struct inode *VAR_8 = FUNC_6(VAR_1);
 bool VAR_9 = 0;

 FUNC_5("write_end file %p inode %p page %p %d~%d (%d)\n", VAR_1,
      VAR_8, VAR_6, (int)VAR_3, (int)VAR_5, (int)VAR_4);


 if (!FUNC_0(VAR_6)) {
  if (VAR_5 < VAR_4) {
   VAR_5 = 0;
   goto out;
  }
  FUNC_1(VAR_6);
 }


 if (VAR_3+VAR_5 > FUNC_7(VAR_8))
  VAR_9 = FUNC_4(VAR_8, VAR_3+VAR_5);

 FUNC_9(VAR_6);

out:
 FUNC_10(VAR_6);
 FUNC_8(VAR_6);

 if (VAR_9)
  FUNC_2(FUNC_3(VAR_8), VAR_0, ((void*)0));

 return VAR_5;
}

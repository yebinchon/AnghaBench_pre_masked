
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef unsigned int pgoff_t ;
typedef unsigned int loff_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (struct address_space*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 unsigned int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct file*,struct address_space*,unsigned int,unsigned int,int ,struct page**,void**) ;
 int FUNC_5 (struct file*,struct address_space*,unsigned int,unsigned int,unsigned int,struct page*,void*) ;
 int FUNC_6 (struct page*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_5, struct address_space *VAR_6,
       loff_t VAR_7, loff_t *VAR_8)
{
 struct inode *VAR_9 = VAR_6->host;
 unsigned int VAR_10 = FUNC_3(VAR_9);
 struct page *VAR_11;
 void *VAR_12;
 pgoff_t VAR_13, VAR_14;
 loff_t VAR_15;
 unsigned VAR_16, VAR_17, VAR_18;
 int VAR_19 = 0;

 VAR_13 = VAR_7 >> VAR_2;
 VAR_17 = VAR_7 & ~VAR_1;

 while (VAR_13 > (VAR_14 = (VAR_15 = *VAR_8)>>VAR_2)) {
  VAR_16 = VAR_15 & ~VAR_1;
  if (VAR_16 & (VAR_10-1)) {
   *VAR_8 |= (VAR_10-1);
   (*VAR_8)++;
  }
  VAR_18 = VAR_3 - VAR_16;

  VAR_19 = FUNC_4(VAR_5, VAR_6, VAR_15, VAR_18, 0,
         &VAR_11, &VAR_12);
  if (VAR_19)
   goto out;
  FUNC_6(VAR_11, VAR_16, VAR_18);
  VAR_19 = FUNC_5(VAR_5, VAR_6, VAR_15, VAR_18, VAR_18,
      VAR_11, VAR_12);
  if (VAR_19 < 0)
   goto out;
  FUNC_0(VAR_19 != VAR_18);
  VAR_19 = 0;

  FUNC_1(VAR_6);

  if (FUNC_2(VAR_4)) {
   VAR_19 = -VAR_0;
   goto out;
  }
 }


 if (VAR_13 == VAR_14) {
  VAR_16 = VAR_15 & ~VAR_1;

  if (VAR_17 <= VAR_16) {
   goto out;
  }
  if (VAR_16 & (VAR_10-1)) {
   *VAR_8 |= (VAR_10-1);
   (*VAR_8)++;
  }
  VAR_18 = VAR_17 - VAR_16;

  VAR_19 = FUNC_4(VAR_5, VAR_6, VAR_15, VAR_18, 0,
         &VAR_11, &VAR_12);
  if (VAR_19)
   goto out;
  FUNC_6(VAR_11, VAR_16, VAR_18);
  VAR_19 = FUNC_5(VAR_5, VAR_6, VAR_15, VAR_18, VAR_18,
      VAR_11, VAR_12);
  if (VAR_19 < 0)
   goto out;
  FUNC_0(VAR_19 != VAR_18);
  VAR_19 = 0;
 }
out:
 return VAR_19;
}

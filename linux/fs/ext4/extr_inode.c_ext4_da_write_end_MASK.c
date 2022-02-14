
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef int loff_t ;
typedef int handle_t ;
struct TYPE_2__ {int i_disksize; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct page*,unsigned long) ;
 int FUNC_2 (struct inode*,int,unsigned int,unsigned int,struct page*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,struct inode*) ;
 scalar_t__ FUNC_7 (struct inode*,int ) ;
 int FUNC_8 (struct inode*,int) ;
 int FUNC_9 (struct file*,struct address_space*,int,unsigned int,unsigned int,struct page*,void*) ;
 int FUNC_10 (struct file*,struct address_space*,int,unsigned int,unsigned int,struct page*,void*) ;
 int FUNC_11 (struct inode*,int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_12(struct file *VAR_4,
        struct address_space *VAR_5,
        loff_t VAR_6, unsigned VAR_7, unsigned VAR_8,
        struct page *VAR_9, void *VAR_10)
{
 struct inode *VAR_11 = VAR_5->host;
 int VAR_12 = 0, VAR_13;
 handle_t *VAR_14 = FUNC_4();
 loff_t VAR_15;
 unsigned long VAR_16, VAR_17;
 int VAR_18 = (int)(unsigned long)VAR_10;

 if (VAR_18 == VAR_2)
  return FUNC_9(VAR_4, VAR_5, VAR_6,
          VAR_7, VAR_8, VAR_9, VAR_10);

 FUNC_11(VAR_11, VAR_6, VAR_7, VAR_8);
 VAR_16 = VAR_6 & (VAR_3 - 1);
 VAR_17 = VAR_16 + VAR_8 - 1;






 VAR_15 = VAR_6 + VAR_8;
 if (VAR_8 && VAR_15 > FUNC_0(VAR_11)->i_disksize) {
  if (FUNC_3(VAR_11) ||
      FUNC_1(VAR_9, VAR_17)) {
   FUNC_8(VAR_11, VAR_15);




   FUNC_6(VAR_14, VAR_11);
  }
 }

 if (VAR_18 != VAR_0 &&
     FUNC_7(VAR_11, VAR_1) &&
     FUNC_3(VAR_11))
  VAR_13 = FUNC_2(VAR_11, VAR_6, VAR_7, VAR_8,
           VAR_9);
 else
  VAR_13 = FUNC_10(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
       VAR_9, VAR_10);

 VAR_8 = VAR_13;
 if (VAR_13 < 0)
  VAR_12 = VAR_13;
 VAR_13 = FUNC_5(VAR_14);
 if (!VAR_12)
  VAR_12 = VAR_13;

 return VAR_12 ? VAR_12 : VAR_8;
}

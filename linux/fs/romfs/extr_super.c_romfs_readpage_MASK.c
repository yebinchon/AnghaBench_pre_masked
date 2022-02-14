
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct inode {int i_sb; } ;
struct file {int dummy; } ;
typedef unsigned long loff_t ;
struct TYPE_4__ {unsigned long i_dataoffset; } ;
struct TYPE_3__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 unsigned long FUNC_4 (struct inode*) ;
 void* FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (void*,int ,unsigned long) ;
 unsigned long FUNC_8 (struct page*) ;
 int FUNC_9 (int ,unsigned long,void*,unsigned long) ;
 int FUNC_10 (struct page*) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_3, struct page *VAR_4)
{
 struct inode *VAR_5 = VAR_4->mapping->host;
 loff_t VAR_6, VAR_7;
 unsigned long VAR_8, VAR_9;
 void *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_5(VAR_4);
 if (!VAR_10)
  return -VAR_1;


 VAR_6 = FUNC_8(VAR_4);
 VAR_7 = FUNC_4(VAR_5);
 VAR_8 = 0;
 VAR_11 = 0;
 if (VAR_6 < VAR_7) {
  VAR_7 -= VAR_6;
  VAR_8 = VAR_7 > VAR_2 ? VAR_2 : VAR_7;

  VAR_9 = FUNC_0(VAR_5)->i_dataoffset + VAR_6;

  VAR_11 = FUNC_9(VAR_5->i_sb, VAR_9, VAR_10, VAR_8);
  if (VAR_11 < 0) {
   FUNC_1(VAR_4);
   VAR_8 = 0;
   VAR_11 = -VAR_0;
  }
 }

 if (VAR_8 < VAR_2)
  FUNC_7(VAR_10 + VAR_8, 0, VAR_2 - VAR_8);
 if (VAR_11 == 0)
  FUNC_2(VAR_4);

 FUNC_3(VAR_4);
 FUNC_6(VAR_4);
 FUNC_10(VAR_4);
 return VAR_11;
}

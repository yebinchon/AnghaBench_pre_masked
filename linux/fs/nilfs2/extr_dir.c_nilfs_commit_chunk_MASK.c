
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {scalar_t__ i_size; } ;
struct address_space {struct inode* host; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (int *,struct address_space*,scalar_t__,unsigned int,unsigned int,struct page*,int *) ;
 int FUNC_3 (struct inode*,scalar_t__) ;
 unsigned int FUNC_4 (struct page*,unsigned int,unsigned int) ;
 int FUNC_5 (struct inode*,unsigned int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;

__attribute__((used)) static void FUNC_9(struct page *VAR_1,
          struct address_space *VAR_2,
          unsigned int VAR_3, unsigned int VAR_4)
{
 struct inode *VAR_5 = VAR_2->host;
 loff_t VAR_6 = FUNC_7(VAR_1) + VAR_3;
 unsigned int VAR_7 = VAR_4 - VAR_3;
 unsigned int VAR_8, VAR_9;
 int VAR_10;

 VAR_8 = FUNC_4(VAR_1, VAR_3, VAR_4);
 VAR_9 = FUNC_2(((void*)0), VAR_2, VAR_6, VAR_7, VAR_7, VAR_1, ((void*)0));
 if (VAR_6 + VAR_9 > VAR_5->i_size)
  FUNC_3(VAR_5, VAR_6 + VAR_9);
 if (FUNC_0(VAR_5))
  FUNC_6(VAR_0);
 VAR_10 = FUNC_5(VAR_5, VAR_8);
 FUNC_1(VAR_10);
 FUNC_8(VAR_1);
}

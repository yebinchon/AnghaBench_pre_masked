
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {scalar_t__ index; } ;
struct inode {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef scalar_t__ pgoff_t ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,scalar_t__,scalar_t__,int) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct address_space *VAR_0,
    struct page *VAR_1)
{
 struct inode *VAR_2 = VAR_0->host;
 pgoff_t VAR_3 = VAR_1->index;

 FUNC_2(VAR_1);
 if (FUNC_3(FUNC_1(VAR_2, VAR_3, VAR_3 + 1, 1)))
  FUNC_0(VAR_2);

 return 0;
}

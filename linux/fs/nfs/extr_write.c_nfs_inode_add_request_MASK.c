
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_page {int wb_kref; int wb_flags; int wb_page; struct nfs_page* wb_this_page; } ;
struct nfs_inode {int nrequests; } ;
struct inode {int dummy; } ;
struct address_space {int private_lock; } ;
struct TYPE_2__ {scalar_t__ (* have_delegation ) (struct inode*,int ) ;} ;


 int VAR_0 ;
 struct nfs_inode* FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct nfs_page*) ;
 struct address_space* FUNC_12 (int ) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int ,unsigned long) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (struct inode*,int ) ;
 int FUNC_18 (int ,int *) ;

__attribute__((used)) static void FUNC_19(struct inode *VAR_3, struct nfs_page *VAR_4)
{
 struct address_space *VAR_5 = FUNC_12(VAR_4->wb_page);
 struct nfs_inode *VAR_6 = FUNC_0(VAR_3);

 FUNC_5(VAR_4->wb_this_page != VAR_4);


 FUNC_11(VAR_4);





 FUNC_15(&VAR_5->private_lock);
 if (!FUNC_10(VAR_3) &&
     FUNC_1(VAR_3)->have_delegation(VAR_3, VAR_0))
  FUNC_7(VAR_3);
 if (FUNC_9(!FUNC_2(VAR_4->wb_page))) {
  FUNC_13(VAR_2, &VAR_4->wb_flags);
  FUNC_3(VAR_4->wb_page);
  FUNC_14(VAR_4->wb_page, (unsigned long)VAR_4);
 }
 FUNC_16(&VAR_5->private_lock);
 FUNC_6(&VAR_6->nrequests);




 FUNC_4(FUNC_18(VAR_1, &VAR_4->wb_flags));
 FUNC_8(&VAR_4->wb_kref);
}

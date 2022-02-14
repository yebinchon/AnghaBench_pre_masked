
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int flags; int index; } ;
struct inode {int i_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,struct page*,struct page*,int ,int,...) ;
 int FUNC_1 (int ,struct page*) ;
 int FUNC_2 (int ,struct page*,int ,int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,int ) ;

void FUNC_5(struct inode *VAR_5, struct page *VAR_6, int VAR_7)
{
 int VAR_8;

 FUNC_0(VAR_0,
   "NFS: readpage_to_fscache(fsc:%p/p:%p(i:%lx f:%lx)/%d)\n",
   FUNC_3(VAR_5), VAR_6, VAR_6->index, VAR_6->flags, VAR_7);

 VAR_8 = FUNC_2(FUNC_3(VAR_5), VAR_6,
     VAR_5->i_size, VAR_1);
 FUNC_0(VAR_0,
   "NFS:     readpage_to_fscache: p:%p(i:%lu f:%lx) ret %d\n",
   VAR_6, VAR_6->index, VAR_6->flags, VAR_8);

 if (VAR_8 != 0) {
  FUNC_1(FUNC_3(VAR_5), VAR_6);
  FUNC_4(VAR_5,
          VAR_3);
  FUNC_4(VAR_5, VAR_2);
 } else {
  FUNC_4(VAR_5,
          VAR_4);
 }
}

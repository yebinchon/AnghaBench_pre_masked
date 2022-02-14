
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int index; int flags; TYPE_1__* mapping; } ;
struct TYPE_4__ {int vnode; int vid; } ;
struct afs_vnode {int cache; TYPE_2__ fid; } ;
typedef int gfp_t ;
struct TYPE_3__ {int host; } ;


 struct afs_vnode* FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (char*,int ,int ,int ,int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,struct page*,int ) ;
 unsigned long FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*,int ) ;
 int FUNC_8 (struct afs_vnode*,int ,int ,unsigned long) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(struct page *VAR_0, gfp_t VAR_1)
{
 struct afs_vnode *VAR_2 = FUNC_0(VAR_0->mapping->host);
 unsigned long VAR_3;

 FUNC_3("{{%llx:%llu}[%lu],%lx},%x",
        VAR_2->fid.vid, VAR_2->fid.vnode, VAR_0->index, VAR_0->flags,
        VAR_1);
 if (FUNC_2(VAR_0)) {
  VAR_3 = FUNC_6(VAR_0);
  FUNC_8(VAR_2, FUNC_9("rel"),
         VAR_0->index, VAR_3);
  FUNC_7(VAR_0, 0);
  FUNC_1(VAR_0);
 }


 FUNC_4(" = T");
 return 1;
}

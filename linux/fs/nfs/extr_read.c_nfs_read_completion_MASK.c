
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_4__ {int next; } ;
struct nfs_pgio_header {unsigned long good_bytes; int error; int (* release ) (struct nfs_pgio_header*) ;int flags; TYPE_2__ pages; } ;
struct nfs_page {unsigned long wb_pgbase; unsigned long wb_bytes; struct page* wb_page; } ;
struct TYPE_3__ {int error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 struct nfs_page* FUNC_2 (int ) ;
 int FUNC_3 (struct nfs_page*) ;
 int FUNC_4 (struct nfs_page*) ;
 int FUNC_5 (struct nfs_page*,int) ;
 TYPE_1__* FUNC_6 (struct nfs_page*) ;
 int FUNC_7 (struct nfs_pgio_header*) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (struct page*,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_11(struct nfs_pgio_header *VAR_3)
{
 unsigned long VAR_4 = 0;
 int VAR_5;

 if (FUNC_8(VAR_2, &VAR_3->flags))
  goto out;
 while (!FUNC_1(&VAR_3->pages)) {
  struct nfs_page *VAR_6 = FUNC_2(VAR_3->pages.next);
  struct page *VAR_7 = VAR_6->wb_page;
  unsigned long VAR_8 = VAR_6->wb_pgbase;
  unsigned long VAR_9 = VAR_6->wb_pgbase + VAR_6->wb_bytes;

  if (FUNC_8(VAR_0, &VAR_3->flags)) {



   if (VAR_4 > VAR_3->good_bytes) {


    FUNC_10(VAR_7, VAR_8, VAR_9);

   } else if (VAR_3->good_bytes - VAR_4 < VAR_6->wb_bytes) {


    VAR_8 += VAR_3->good_bytes - VAR_4;
    FUNC_0(VAR_8 < VAR_6->wb_pgbase);
    FUNC_10(VAR_7, VAR_8, VAR_9);
   }
  }
  VAR_5 = 0;
  VAR_4 += VAR_6->wb_bytes;
  if (FUNC_8(VAR_1, &VAR_3->flags)) {
   if (VAR_4 <= VAR_3->good_bytes)
    FUNC_4(VAR_6);
   else {
    VAR_5 = VAR_3->error;
    FUNC_9(&FUNC_6(VAR_6)->error, VAR_5);
   }
  } else
   FUNC_4(VAR_6);
  FUNC_3(VAR_6);
  FUNC_5(VAR_6, VAR_5);
 }
out:
 VAR_3->release(VAR_3);
}

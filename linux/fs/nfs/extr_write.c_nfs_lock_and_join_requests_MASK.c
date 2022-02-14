
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct nfs_page {unsigned int wb_bytes; scalar_t__ wb_offset; int wb_kref; int wb_flags; struct nfs_page* wb_this_page; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {int nrequests; } ;
struct TYPE_3__ {struct inode* host; } ;


 int VAR_0 ;
 struct nfs_page* FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct nfs_page*) ;
 int FUNC_9 (struct nfs_page*,struct nfs_page*,struct inode*) ;
 int FUNC_10 (struct nfs_page*) ;
 struct nfs_page* FUNC_11 (struct page*) ;
 int FUNC_12 (struct nfs_page*) ;
 int FUNC_13 (struct nfs_page*) ;
 struct nfs_page* FUNC_14 (struct page*) ;
 int FUNC_15 (struct nfs_page*) ;
 int FUNC_16 (struct nfs_page*) ;
 int FUNC_17 (struct inode*,struct nfs_page*,struct nfs_page*) ;
 int FUNC_18 (struct nfs_page*) ;
 TYPE_1__* FUNC_19 (struct page*) ;
 int FUNC_20 (int ,int *) ;
 scalar_t__ FUNC_21 (int ,int *) ;

__attribute__((used)) static struct nfs_page *
FUNC_22(struct page *VAR_3)
{
 struct inode *VAR_4 = FUNC_19(VAR_3)->host;
 struct nfs_page *VAR_5, *VAR_6;
 struct nfs_page *VAR_7 = ((void*)0);
 unsigned int VAR_8;
 int VAR_9;

try_again:





 VAR_5 = FUNC_11(VAR_3);
 if (!VAR_5)
  return ((void*)0);


 if (!FUNC_10(VAR_5)) {
  VAR_9 = FUNC_18(VAR_5);
  FUNC_15(VAR_5);
  if (VAR_9 < 0)
   return FUNC_0(VAR_9);
  goto try_again;
 }


 if (VAR_5 != FUNC_14(VAR_3) && !FUNC_3(VAR_3)) {
  FUNC_16(VAR_5);
  goto try_again;
 }

 VAR_9 = FUNC_12(VAR_5);
 if (VAR_9 < 0)
  goto release_request;


 VAR_8 = VAR_5->wb_bytes;
 for (VAR_6 = VAR_5->wb_this_page; VAR_6 != VAR_5;
   VAR_6 = VAR_6->wb_this_page) {

  if (!FUNC_7(&VAR_6->wb_kref)) {
   if (VAR_6->wb_offset == VAR_5->wb_offset + VAR_8)
    VAR_8 += VAR_6->wb_bytes;
   continue;
  }

  while (!FUNC_10(VAR_6)) {




   FUNC_13(VAR_5);
   VAR_9 = FUNC_18(VAR_6);
   if (!VAR_9)
    VAR_9 = FUNC_12(VAR_5);
   if (VAR_9 < 0) {
    FUNC_17(VAR_4, VAR_5, VAR_6);
    FUNC_15(VAR_6);
    goto release_request;
   }
  }




  if (VAR_6->wb_offset == (VAR_5->wb_offset + VAR_8)) {

   VAR_8 += VAR_6->wb_bytes;
  } else if (FUNC_4(VAR_6->wb_offset < VAR_5->wb_offset ||
       ((VAR_6->wb_offset + VAR_6->wb_bytes) >
        (VAR_5->wb_offset + VAR_8)))) {
   FUNC_13(VAR_5);
   FUNC_17(VAR_4, VAR_5, VAR_6);
   FUNC_16(VAR_6);
   VAR_9 = -VAR_0;
   goto release_request;
  }
 }



 VAR_6 = VAR_5;
 do {
  FUNC_8(VAR_6);
  VAR_6 = VAR_6->wb_this_page;
 } while (VAR_6 != VAR_5);


 if (VAR_5->wb_this_page != VAR_5) {

  VAR_7 = VAR_5->wb_this_page;
  VAR_5->wb_this_page = VAR_5;



  VAR_5->wb_bytes = VAR_8;
 }


 if (FUNC_21(VAR_2, &VAR_5->wb_flags)) {
  FUNC_20(VAR_1, &VAR_5->wb_flags);
  FUNC_6(&VAR_5->wb_kref);
  FUNC_5(&FUNC_1(VAR_4)->nrequests);
 }

 FUNC_13(VAR_5);

 FUNC_9(VAR_7, VAR_5, VAR_4);


 if (!(FUNC_2(VAR_3) || FUNC_3(VAR_3))) {
  FUNC_16(VAR_5);
  return ((void*)0);
 }



 return VAR_5;

release_request:
 FUNC_16(VAR_5);
 return FUNC_0(VAR_9);
}

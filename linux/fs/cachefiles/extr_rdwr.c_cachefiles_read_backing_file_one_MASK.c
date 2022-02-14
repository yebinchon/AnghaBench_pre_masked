
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct page {int flags; int index; } ;
struct fscache_retrieval {int dummy; } ;
struct TYPE_6__ {struct page* private; } ;
struct cachefiles_one_read {int op; TYPE_2__ monitor; struct page* back_page; struct page* netfs_page; } ;
struct cachefiles_object {int backer; } ;
struct address_space {TYPE_1__* a_ops; } ;
struct TYPE_7__ {struct address_space* i_mapping; } ;
struct TYPE_5__ {int (* readpage ) (int *,struct page*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 struct page* FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct page*,TYPE_2__*) ;
 int FUNC_7 (struct page*,struct address_space*,int ,int ) ;
 int VAR_3 ;
 int FUNC_8 (struct cachefiles_object*,char*) ;
 int VAR_4 ;
 int FUNC_9 (struct page*,struct page*) ;
 TYPE_3__* FUNC_10 (int ) ;
 struct page* FUNC_11 (struct address_space*,int ) ;
 int FUNC_12 (struct fscache_retrieval*,struct page*,int ) ;
 int FUNC_13 (struct fscache_retrieval*) ;
 int FUNC_14 (struct fscache_retrieval*,struct page*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct fscache_retrieval*,int) ;
 int FUNC_17 (struct page*) ;
 int FUNC_18 (TYPE_2__*,int ) ;
 int FUNC_19 (struct cachefiles_one_read*) ;
 struct cachefiles_one_read* FUNC_20 (int,int ) ;
 int FUNC_21 (struct page*) ;
 int FUNC_22 (struct page*) ;
 int FUNC_23 (int *,struct page*) ;
 scalar_t__ FUNC_24 (struct page*) ;
 int FUNC_25 (struct page*) ;

__attribute__((used)) static int FUNC_26(struct cachefiles_object *VAR_5,
         struct fscache_retrieval *VAR_6,
         struct page *VAR_7)
{
 struct cachefiles_one_read *VAR_8;
 struct address_space *VAR_9;
 struct page *VAR_10, *VAR_11;
 int VAR_12;

 FUNC_4("");

 FUNC_3("read back %p{%lu,%d}",
        VAR_7, VAR_7->index, FUNC_21(VAR_7));

 VAR_8 = FUNC_20(sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  goto nomem;

 VAR_8->netfs_page = VAR_7;
 VAR_8->op = FUNC_13(VAR_6);

 FUNC_18(&VAR_8->monitor, VAR_4);


 VAR_9 = FUNC_10(VAR_5->backer)->i_mapping;
 VAR_10 = ((void*)0);

 for (;;) {
  VAR_11 = FUNC_11(VAR_9, VAR_7->index);
  if (VAR_11)
   goto backing_page_already_present;

  if (!VAR_10) {
   VAR_10 = FUNC_2(VAR_3);
   if (!VAR_10)
    goto nomem_monitor;
  }

  VAR_12 = FUNC_7(VAR_10, VAR_9,
         VAR_7->index, VAR_3);
  if (VAR_12 == 0)
   goto installed_new_backing_page;
  if (VAR_12 != -VAR_0)
   goto nomem_page;
 }



installed_new_backing_page:
 FUNC_3("- new %p", VAR_10);

 VAR_11 = VAR_10;
 VAR_10 = ((void*)0);

read_backing_page:
 VAR_12 = VAR_9->a_ops->readpage(((void*)0), VAR_11);
 if (VAR_12 < 0)
  goto read_error;


monitor_backing_page:
 FUNC_3("- monitor add");


 FUNC_17(VAR_8->netfs_page);
 FUNC_17(VAR_11);
 VAR_8->back_page = VAR_11;
 VAR_8->monitor.private = VAR_11;
 FUNC_6(VAR_11, &VAR_8->monitor);
 VAR_8 = ((void*)0);




 if (FUNC_24(VAR_11)) {
  FUNC_3("jumpstart %p {%lx}", VAR_11, VAR_11->flags);
  FUNC_25(VAR_11);
 }
 goto success;



backing_page_already_present:
 FUNC_3("- present");

 if (VAR_10) {
  FUNC_22(VAR_10);
  VAR_10 = ((void*)0);
 }

 if (FUNC_0(VAR_11))
  goto io_error;

 if (FUNC_1(VAR_11))
  goto backing_page_already_uptodate;

 if (!FUNC_24(VAR_11))
  goto monitor_backing_page;
 FUNC_3("read %p {%lx}", VAR_11, VAR_11->flags);
 goto read_backing_page;



backing_page_already_uptodate:
 FUNC_3("- uptodate");

 FUNC_14(VAR_6, VAR_7);

 FUNC_9(VAR_7, VAR_11);
 FUNC_12(VAR_6, VAR_7, 0);
 FUNC_16(VAR_6, 1);

success:
 FUNC_3("success");
 VAR_12 = 0;

out:
 if (VAR_11)
  FUNC_22(VAR_11);
 if (VAR_8) {
  FUNC_15(VAR_8->op);
  FUNC_19(VAR_8);
 }
 FUNC_5(" = %d", VAR_12);
 return VAR_12;

read_error:
 FUNC_3("read error %d", VAR_12);
 if (VAR_12 == -VAR_2) {
  FUNC_16(VAR_6, 1);
  goto out;
 }
io_error:
 FUNC_8(VAR_5, "Page read error on backing file");
 FUNC_16(VAR_6, 1);
 VAR_12 = -VAR_1;
 goto out;

nomem_page:
 FUNC_22(VAR_10);
nomem_monitor:
 FUNC_15(VAR_8->op);
 FUNC_19(VAR_8);
nomem:
 FUNC_16(VAR_6, 1);
 FUNC_5(" = -ENOMEM");
 return -VAR_2;
}

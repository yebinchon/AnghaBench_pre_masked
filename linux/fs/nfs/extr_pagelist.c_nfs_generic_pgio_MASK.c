
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct list_head {int next; } ;
struct nfs_pgio_mirror {int pg_count; int pg_base; struct list_head pg_list; } ;
struct nfs_page_array {unsigned int npages; struct page** pagevec; struct page** page_array; } ;
struct nfs_pgio_header {int pages; struct nfs_page_array page_array; } ;
struct nfs_pageio_descriptor {int pg_error; int pg_ioflags; int * pg_rpc_callops; scalar_t__ pg_moreio; int pg_dreq; int pg_inode; } ;
struct nfs_page {struct page* wb_page; } ;
struct nfs_commit_info {int dummy; } ;
typedef int gfp_t ;


 unsigned int FUNC_0 (struct page**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 struct page** FUNC_2 (unsigned int,int,int ) ;
 int FUNC_3 (struct list_head*) ;
 int FUNC_4 (struct nfs_commit_info*,int ,int ) ;
 struct nfs_page* FUNC_5 (int ) ;
 int FUNC_6 (struct nfs_page*,int *) ;
 unsigned int FUNC_7 (int ,int ) ;
 int VAR_4 ;
 struct nfs_pgio_mirror* FUNC_8 (struct nfs_pageio_descriptor*) ;
 int FUNC_9 (struct nfs_pgio_header*) ;
 int FUNC_10 (struct nfs_pgio_header*,int ,int,struct nfs_commit_info*) ;
 scalar_t__ FUNC_11 (struct nfs_commit_info*) ;

int FUNC_12(struct nfs_pageio_descriptor *VAR_5,
       struct nfs_pgio_header *VAR_6)
{
 struct nfs_pgio_mirror *VAR_7 = FUNC_8(VAR_5);

 struct nfs_page *VAR_8;
 struct page **VAR_9,
    *VAR_10;
 struct list_head *VAR_11 = &VAR_7->pg_list;
 struct nfs_commit_info VAR_12;
 struct nfs_page_array *VAR_13 = &VAR_6->page_array;
 unsigned int VAR_14, VAR_15;
 gfp_t VAR_16 = VAR_3;

 VAR_14 = FUNC_7(VAR_7->pg_base, VAR_7->pg_count);
 VAR_13->npages = VAR_14;

 if (VAR_14 <= FUNC_0(VAR_13->page_array))
  VAR_13->pagevec = VAR_13->page_array;
 else {
  VAR_13->pagevec = FUNC_2(VAR_14, sizeof(struct page *), VAR_16);
  if (!VAR_13->pagevec) {
   VAR_13->npages = 0;
   FUNC_9(VAR_6);
   VAR_5->pg_error = -VAR_1;
   return VAR_5->pg_error;
  }
 }

 FUNC_4(&VAR_12, VAR_5->pg_inode, VAR_5->pg_dreq);
 VAR_9 = VAR_6->page_array.pagevec;
 VAR_10 = ((void*)0);
 VAR_15 = 0;
 while (!FUNC_3(VAR_11)) {
  VAR_8 = FUNC_5(VAR_11->next);
  FUNC_6(VAR_8, &VAR_6->pages);

  if (!VAR_10 || VAR_10 != VAR_8->wb_page) {
   VAR_15++;
   if (VAR_15 > VAR_14)
    break;
   *VAR_9++ = VAR_10 = VAR_8->wb_page;
  }
 }
 if (FUNC_1(VAR_15 != VAR_14)) {
  FUNC_9(VAR_6);
  VAR_5->pg_error = -VAR_0;
  return VAR_5->pg_error;
 }

 if ((VAR_5->pg_ioflags & VAR_2) &&
     (VAR_5->pg_moreio || FUNC_11(&VAR_12)))
  VAR_5->pg_ioflags &= ~VAR_2;


 FUNC_10(VAR_6, VAR_7->pg_count, VAR_5->pg_ioflags, &VAR_12);
 VAR_5->pg_rpc_callops = &VAR_4;
 return 0;
}

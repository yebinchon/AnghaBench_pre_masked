
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct page* mpage; } ;
struct z_erofs_decompress_frontend {int headoffset; TYPE_1__ map; int clt; } ;
struct page {scalar_t__ index; int lru; int flags; } ;
struct list_head {int dummy; } ;
struct inode {int i_sb; } ;
struct file {int dummy; } ;
struct erofs_sb_info {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef int gfp_t ;
typedef int erofs_off_t ;
struct TYPE_4__ {int nid; } ;


 struct z_erofs_decompress_frontend FUNC_0 (struct inode* const) ;
 TYPE_2__* FUNC_1 (struct inode* const) ;
 struct erofs_sb_info* FUNC_2 (struct inode* const) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct page*,struct address_space*,scalar_t__,int ) ;
 int FUNC_6 (int ,char*,scalar_t__,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 struct page* FUNC_9 (struct list_head*) ;
 int FUNC_10 (struct address_space*,int ) ;
 scalar_t__ FUNC_11 (struct page*) ;
 int VAR_2 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct page*,unsigned long) ;
 int FUNC_16 (struct erofs_sb_info* const,unsigned int) ;
 int FUNC_17 (struct inode*,struct page*,unsigned int,int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct z_erofs_decompress_frontend*,struct page*,int *) ;
 int FUNC_20 (int ,int *,int *,int) ;

__attribute__((used)) static int FUNC_21(struct file *VAR_3,
           struct address_space *VAR_4,
           struct list_head *VAR_5,
           unsigned int VAR_6)
{
 struct inode *const VAR_7 = VAR_4->host;
 struct erofs_sb_info *const VAR_8 = FUNC_2(VAR_7);

 bool VAR_9 = FUNC_16(VAR_8, VAR_6);
 struct z_erofs_decompress_frontend VAR_10 = FUNC_0(VAR_7);
 gfp_t VAR_11 = FUNC_10(VAR_4, VAR_0);
 struct page *VAR_12 = ((void*)0);
 FUNC_3(VAR_2);

 FUNC_17(VAR_4->host, FUNC_9(VAR_5),
         VAR_6, 0);

 VAR_10.headoffset = (erofs_off_t)FUNC_9(VAR_5)->index << VAR_1;

 for (; VAR_6; --VAR_6) {
  struct page *VAR_13 = FUNC_9(VAR_5);

  FUNC_12(&VAR_13->flags);
  FUNC_8(&VAR_13->lru);






  VAR_9 &= !(FUNC_4(VAR_13) && !VAR_12);

  if (FUNC_5(VAR_13, VAR_4, VAR_13->index, VAR_11)) {
   FUNC_7(&VAR_13->lru, &VAR_2);
   continue;
  }

  FUNC_15(VAR_13, (unsigned long)VAR_12);
  VAR_12 = VAR_13;
 }

 while (VAR_12) {
  struct page *VAR_14 = VAR_12;
  int VAR_15;


  VAR_12 = (void *)FUNC_11(VAR_14);

  VAR_15 = FUNC_19(&VAR_10, VAR_14, &VAR_2);
  if (VAR_15)
   FUNC_6(VAR_7->i_sb,
      "readahead error at page %lu @ nid %llu",
      VAR_14->index, FUNC_1(VAR_7)->nid);
  FUNC_13(VAR_14);
 }

 (void)FUNC_18(&VAR_10.clt);

 FUNC_20(VAR_7->i_sb, &VAR_10.clt, &VAR_2, VAR_9);

 if (VAR_10.map.mpage)
  FUNC_13(VAR_10.map.mpage);


 FUNC_14(&VAR_2);
 return 0;
}

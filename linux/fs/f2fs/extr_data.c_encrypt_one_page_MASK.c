
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int dummy; } ;
struct f2fs_io_info {struct page* encrypted_page; int old_blkaddr; int sbi; TYPE_2__* page; } ;
typedef int gfp_t ;
struct TYPE_4__ {TYPE_1__* mapping; } ;
struct TYPE_3__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int VAR_5 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct page*,int) ;
 int FUNC_8 (struct inode*,int ) ;
 struct page* FUNC_9 (int ,int ) ;
 struct page* FUNC_10 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (struct page*) ;

__attribute__((used)) static int FUNC_13(struct f2fs_io_info *VAR_6)
{
 struct inode *VAR_7 = VAR_6->page->mapping->host;
 struct page *VAR_8;
 gfp_t VAR_9 = VAR_2;

 if (!FUNC_5(VAR_7))
  return 0;


 FUNC_8(VAR_7, VAR_6->old_blkaddr);

retry_encrypt:
 VAR_6->encrypted_page = FUNC_10(VAR_6->page,
              VAR_4, 0,
              VAR_9);
 if (FUNC_0(VAR_6->encrypted_page)) {

  if (FUNC_2(VAR_6->encrypted_page) == -VAR_1) {
   FUNC_6(VAR_6->sbi);
   FUNC_4(VAR_0, VAR_3/50);
   VAR_9 |= VAR_5;
   goto retry_encrypt;
  }
  return FUNC_2(VAR_6->encrypted_page);
 }

 VAR_8 = FUNC_9(FUNC_1(VAR_6->sbi), VAR_6->old_blkaddr);
 if (VAR_8) {
  if (FUNC_3(VAR_8))
   FUNC_11(FUNC_12(VAR_8),
    FUNC_12(VAR_6->encrypted_page), VAR_4);
  FUNC_7(VAR_8, 1);
 }
 return 0;
}

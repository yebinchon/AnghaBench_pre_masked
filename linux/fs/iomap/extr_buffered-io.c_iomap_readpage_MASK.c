
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct iomap_readpage_ctx {int cur_page_in_bio; scalar_t__ bio; struct page* cur_page; } ;
struct iomap_ops {int dummy; } ;
struct inode {int dummy; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {struct inode* host; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct inode*,scalar_t__,unsigned int,int ,struct iomap_ops const*,struct iomap_readpage_ctx*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct page*) ;

int
FUNC_6(struct page *VAR_2, const struct iomap_ops *VAR_3)
{
 struct iomap_readpage_ctx VAR_4 = { .cur_page = VAR_2 };
 struct inode *VAR_5 = VAR_2->mapping->host;
 unsigned VAR_6;
 loff_t VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6 += VAR_7) {
  VAR_7 = FUNC_2(VAR_5, FUNC_3(VAR_2) + VAR_6,
    VAR_0 - VAR_6, 0, VAR_3, &VAR_4,
    VAR_1);
  if (VAR_7 <= 0) {
   FUNC_1(VAR_7 == 0);
   FUNC_0(VAR_2);
   break;
  }
 }

 if (VAR_4.bio) {
  FUNC_4(VAR_4.bio);
  FUNC_1(!VAR_4.cur_page_in_bio);
 } else {
  FUNC_1(VAR_4.cur_page_in_bio);
  FUNC_5(VAR_2);
 }






 return 0;
}

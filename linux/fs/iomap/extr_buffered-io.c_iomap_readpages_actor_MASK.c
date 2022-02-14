
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iomap_readpage_ctx {int cur_page_in_bio; int * cur_page; int pages; } ;
struct iomap {int dummy; } ;
struct inode {int dummy; } ;
typedef scalar_t__ loff_t ;


 int * FUNC_0 (struct inode*,int ,scalar_t__,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_1 (struct inode*,scalar_t__,scalar_t__,struct iomap_readpage_ctx*,struct iomap*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static loff_t
FUNC_5(struct inode *VAR_0, loff_t VAR_1, loff_t VAR_2,
  void *VAR_3, struct iomap *VAR_4)
{
 struct iomap_readpage_ctx *VAR_5 = VAR_3;
 loff_t VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6 += VAR_7) {
  if (VAR_5->cur_page && FUNC_2(VAR_1 + VAR_6) == 0) {
   if (!VAR_5->cur_page_in_bio)
    FUNC_4(VAR_5->cur_page);
   FUNC_3(VAR_5->cur_page);
   VAR_5->cur_page = ((void*)0);
  }
  if (!VAR_5->cur_page) {
   VAR_5->cur_page = FUNC_0(VAR_0, VAR_5->pages,
     VAR_1, VAR_2, &VAR_6);
   if (!VAR_5->cur_page)
    break;
   VAR_5->cur_page_in_bio = 0;
  }
  VAR_7 = FUNC_1(VAR_0, VAR_1 + VAR_6, VAR_2 - VAR_6,
    VAR_5, VAR_4);
 }

 return VAR_6;
}

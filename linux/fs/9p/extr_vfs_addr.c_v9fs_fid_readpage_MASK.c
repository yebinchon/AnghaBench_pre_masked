
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct p9_fid {int dummy; } ;
struct iov_iter {int dummy; } ;
struct inode {int dummy; } ;
struct bio_vec {scalar_t__ bv_len; struct page* bv_page; } ;
struct TYPE_2__ {struct inode* host; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct page*) ;
 int VAR_2 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct iov_iter*,int ,struct bio_vec*,int,scalar_t__) ;
 int FUNC_5 (struct p9_fid*,int ,struct iov_iter*,int*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct inode*,struct page*) ;
 int FUNC_10 (struct inode*,struct page*) ;
 int FUNC_11 (struct inode*,struct page*) ;
 int FUNC_12 (struct page*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_13(void *VAR_3, struct page *VAR_4)
{
 struct p9_fid *VAR_5 = VAR_3;
 struct inode *VAR_6 = VAR_4->mapping->host;
 struct bio_vec VAR_7 = {.bv_page = VAR_4, .bv_len = VAR_1};
 struct iov_iter VAR_8;
 int VAR_9, VAR_10;

 FUNC_6(VAR_0, "\n");

 FUNC_0(!FUNC_1(VAR_4));

 VAR_9 = FUNC_9(VAR_6, VAR_4);
 if (VAR_9 == 0)
  return VAR_9;

 FUNC_4(&VAR_8, VAR_2, &VAR_7, 1, VAR_1);

 VAR_9 = FUNC_5(VAR_5, FUNC_7(VAR_4), &VAR_8, &VAR_10);
 if (VAR_10) {
  FUNC_11(VAR_6, VAR_4);
  VAR_9 = VAR_10;
  goto done;
 }

 FUNC_12(VAR_4, VAR_9, VAR_1 - VAR_9);
 FUNC_3(VAR_4);
 FUNC_2(VAR_4);

 FUNC_10(VAR_6, VAR_4);
 VAR_9 = 0;

done:
 FUNC_8(VAR_4);
 return VAR_9;
}

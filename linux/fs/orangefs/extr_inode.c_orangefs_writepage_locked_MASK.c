
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {int dummy; } ;
struct page {TYPE_1__* mapping; } ;
struct orangefs_write_range {size_t pos; size_t len; } ;
struct iov_iter {int dummy; } ;
struct inode {int dummy; } ;
struct bio_vec {size_t bv_len; size_t bv_offset; struct page* bv_page; } ;
typedef scalar_t__ ssize_t ;
typedef size_t loff_t ;
struct TYPE_2__ {struct inode* host; } ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 size_t FUNC_4 (struct inode*) ;
 int FUNC_5 (struct iov_iter*,int ,struct bio_vec*,int,size_t) ;
 int FUNC_6 (struct orangefs_write_range*) ;
 int FUNC_7 (TYPE_1__*,scalar_t__) ;
 size_t FUNC_8 (struct page*) ;
 scalar_t__ FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*,int ) ;
 int FUNC_12 (struct page*) ;
 scalar_t__ FUNC_13 (int ,struct inode*,size_t*,struct iov_iter*,size_t,size_t,struct orangefs_write_range*,int *) ;

__attribute__((used)) static int FUNC_14(struct page *VAR_3,
    struct writeback_control *VAR_4)
{
 struct inode *VAR_5 = VAR_3->mapping->host;
 struct orangefs_write_range *VAR_6 = ((void*)0);
 struct iov_iter VAR_7;
 struct bio_vec VAR_8;
 size_t VAR_9, VAR_10;
 ssize_t VAR_11;
 loff_t VAR_12;

 FUNC_12(VAR_3);

 VAR_9 = FUNC_4(VAR_5);
 if (FUNC_1(VAR_3)) {
  VAR_6 = (struct orangefs_write_range *)FUNC_9(VAR_3);
  FUNC_3(VAR_6->pos >= VAR_9);
  VAR_12 = VAR_6->pos;
  if (VAR_12 + VAR_6->len > VAR_9)
   VAR_10 = VAR_9 - VAR_12;
  else
   VAR_10 = VAR_6->len;
 } else {
  FUNC_3(1);
  VAR_12 = FUNC_8(VAR_3);
  if (VAR_12 + VAR_1 > VAR_9)
   VAR_10 = VAR_9 - VAR_12;
  else
   VAR_10 = VAR_1;
 }

 FUNC_3(VAR_12 == VAR_9 || VAR_12 + VAR_10 > VAR_9);

 VAR_8.bv_page = VAR_3;
 VAR_8.bv_len = VAR_10;
 VAR_8.bv_offset = VAR_12 % VAR_1;
 FUNC_3(VAR_10 == 0);
 FUNC_5(&VAR_7, VAR_2, &VAR_8, 1, VAR_10);

 VAR_11 = FUNC_13(VAR_0, VAR_5, &VAR_12, &VAR_7, VAR_10,
     VAR_9, VAR_6, ((void*)0));
 if (VAR_11 < 0) {
  FUNC_2(VAR_3);
  FUNC_7(VAR_3->mapping, VAR_11);
 } else {
  VAR_11 = 0;
 }
 if (VAR_6) {
  FUNC_6(VAR_6);
  FUNC_11(VAR_3, 0);
  FUNC_0(VAR_3);
  FUNC_10(VAR_3);
 }
 return VAR_11;
}

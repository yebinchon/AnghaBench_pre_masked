
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct iomap_page_ops {int (* page_prepare ) (struct inode*,unsigned int,unsigned int,struct iomap*) ;int (* page_done ) (struct inode*,unsigned int,int ,int *,struct iomap*) ;} ;
struct iomap {unsigned int offset; unsigned int length; scalar_t__ type; int flags; struct iomap_page_ops* page_ops; } ;
struct inode {int i_mapping; } ;
typedef unsigned int pgoff_t ;
typedef unsigned int loff_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (struct page*,unsigned int,unsigned int,int *,struct iomap*) ;
 int FUNC_2 (struct inode*,unsigned int,unsigned int,struct page*,struct iomap*) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ) ;
 struct page* FUNC_4 (int ,unsigned int,unsigned int) ;
 int FUNC_5 (struct inode*,struct page*,struct iomap*) ;
 int FUNC_6 (struct inode*,unsigned int,unsigned int) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct inode*,unsigned int,unsigned int,struct iomap*) ;
 int FUNC_9 (struct inode*,unsigned int,int ,int *,struct iomap*) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (struct page*) ;

__attribute__((used)) static int
FUNC_12(struct inode *VAR_6, loff_t VAR_7, unsigned VAR_8, unsigned VAR_9,
  struct page **VAR_10, struct iomap *VAR_11)
{
 const struct iomap_page_ops *VAR_12 = VAR_11->page_ops;
 pgoff_t VAR_13 = VAR_7 >> VAR_4;
 struct page *VAR_14;
 int VAR_15 = 0;

 FUNC_0(VAR_7 + VAR_8 > VAR_11->offset + VAR_11->length);

 if (FUNC_3(VAR_5))
  return -VAR_0;

 if (VAR_12 && VAR_12->page_prepare) {
  VAR_15 = VAR_12->page_prepare(VAR_6, VAR_7, VAR_8, VAR_11);
  if (VAR_15)
   return VAR_15;
 }

 VAR_14 = FUNC_4(VAR_6->i_mapping, VAR_13, VAR_9);
 if (!VAR_14) {
  VAR_15 = -VAR_1;
  goto out_no_page;
 }

 if (VAR_11->type == VAR_3)
  FUNC_5(VAR_6, VAR_14, VAR_11);
 else if (VAR_11->flags & VAR_2)
  VAR_15 = FUNC_1(VAR_14, VAR_7, VAR_8, ((void*)0), VAR_11);
 else
  VAR_15 = FUNC_2(VAR_6, VAR_7, VAR_8, VAR_14, VAR_11);

 if (FUNC_10(VAR_15))
  goto out_unlock;

 *VAR_10 = VAR_14;
 return 0;

out_unlock:
 FUNC_11(VAR_14);
 FUNC_7(VAR_14);
 FUNC_6(VAR_6, VAR_7, VAR_8);

out_no_page:
 if (VAR_12 && VAR_12->page_done)
  VAR_12->page_done(VAR_6, VAR_7, 0, ((void*)0), VAR_11);
 return VAR_15;
}

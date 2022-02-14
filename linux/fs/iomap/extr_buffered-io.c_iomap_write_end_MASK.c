
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct iomap_page_ops {int (* page_done ) (struct inode*,scalar_t__,int,struct page*,struct iomap*) ;} ;
struct iomap {scalar_t__ type; int flags; struct iomap_page_ops* page_ops; } ;
struct inode {scalar_t__ i_size; int i_mapping; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct inode*,scalar_t__,unsigned int,unsigned int,struct page*,struct iomap*) ;
 int FUNC_1 (int *,int ,scalar_t__,unsigned int,unsigned int,struct page*,int *) ;
 int FUNC_2 (struct inode*,scalar_t__) ;
 int FUNC_3 (struct inode*,struct page*,struct iomap*,scalar_t__,unsigned int) ;
 int FUNC_4 (struct inode*,scalar_t__,unsigned int) ;
 int FUNC_5 (struct inode*,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct inode*,scalar_t__,int,struct page*,struct iomap*) ;
 int FUNC_8 (struct page*) ;

__attribute__((used)) static int
FUNC_9(struct inode *VAR_3, loff_t VAR_4, unsigned VAR_5,
  unsigned VAR_6, struct page *VAR_7, struct iomap *VAR_8)
{
 const struct iomap_page_ops *VAR_9 = VAR_8->page_ops;
 loff_t VAR_10 = VAR_3->i_size;
 int VAR_11;

 if (VAR_8->type == VAR_2) {
  VAR_11 = FUNC_3(VAR_3, VAR_7, VAR_8, VAR_4, VAR_6);
 } else if (VAR_8->flags & VAR_0) {
  VAR_11 = FUNC_1(((void*)0), VAR_3->i_mapping, VAR_4, VAR_5, VAR_6,
    VAR_7, ((void*)0));
 } else {
  VAR_11 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 }






 if (VAR_4 + VAR_11 > VAR_10) {
  FUNC_2(VAR_3, VAR_4 + VAR_11);
  VAR_8->flags |= VAR_1;
 }
 FUNC_8(VAR_7);

 if (VAR_10 < VAR_4)
  FUNC_5(VAR_3, VAR_10, VAR_4);
 if (VAR_9 && VAR_9->page_done)
  VAR_9->page_done(VAR_3, VAR_4, VAR_11, VAR_7, VAR_8);
 FUNC_6(VAR_7);

 if (VAR_11 < VAR_5)
  FUNC_4(VAR_3, VAR_4, VAR_5);
 return VAR_11;
}

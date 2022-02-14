
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct page {int index; } ;
struct gfs2_inode {int i_inode; } ;
struct gfs2_dinode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct gfs2_inode*) ;
 int FUNC_4 (struct gfs2_inode*,struct buffer_head**) ;
 scalar_t__ FUNC_5 (int *) ;
 void* FUNC_6 (struct page*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (void*,scalar_t__,scalar_t__) ;
 int FUNC_9 (void*,int ,scalar_t__) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct page*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct gfs2_inode *VAR_1, struct page *VAR_2)
{
 struct buffer_head *VAR_3;
 u64 VAR_4 = FUNC_5(&VAR_1->i_inode);
 void *VAR_5;
 int VAR_6;






 if (FUNC_10(VAR_2->index)) {
  FUNC_11(VAR_2, 0, VAR_0);
  FUNC_0(VAR_2);
  return 0;
 }

 VAR_6 = FUNC_4(VAR_1, &VAR_3);
 if (VAR_6)
  return VAR_6;

 VAR_5 = FUNC_6(VAR_2);
 if (VAR_4 > FUNC_3(VAR_1))
  VAR_4 = FUNC_3(VAR_1);
 FUNC_8(VAR_5, VAR_3->b_data + sizeof(struct gfs2_dinode), VAR_4);
 FUNC_9(VAR_5 + VAR_4, 0, VAR_0 - VAR_4);
 FUNC_7(VAR_5);
 FUNC_2(VAR_2);
 FUNC_1(VAR_3);
 FUNC_0(VAR_2);

 return 0;
}

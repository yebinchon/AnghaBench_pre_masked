
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct xfs_trans {int dummy; } ;
struct xfs_buf_log_item {int bli_flags; } ;
struct xfs_buf {int b_length; struct xfs_buf_log_item* b_log_item; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct xfs_buf_log_item*) ;
 int FUNC_3 (struct xfs_buf_log_item*,int ,int ) ;
 int FUNC_4 (struct xfs_trans*,struct xfs_buf*) ;

void
FUNC_5(
 struct xfs_trans *VAR_1,
 struct xfs_buf *VAR_2,
 uint VAR_3,
 uint VAR_4)
{
 struct xfs_buf_log_item *VAR_5 = VAR_2->b_log_item;

 FUNC_0(VAR_3 <= VAR_4 && VAR_4 < FUNC_1(VAR_2->b_length));
 FUNC_0(!(VAR_5->bli_flags & VAR_0));

 FUNC_4(VAR_1, VAR_2);

 FUNC_2(VAR_5);
 FUNC_3(VAR_5, VAR_3, VAR_4);
}

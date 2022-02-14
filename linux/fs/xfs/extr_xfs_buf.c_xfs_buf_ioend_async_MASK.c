
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_buf {int b_ioend_work; TYPE_1__* b_mount; } ;
struct TYPE_2__ {int m_buf_workqueue; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(
 struct xfs_buf *VAR_1)
{
 FUNC_0(&VAR_1->b_ioend_work, VAR_0);
 FUNC_1(VAR_1->b_mount->m_buf_workqueue, &VAR_1->b_ioend_work);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
struct xfs_log_item {TYPE_1__* li_ops; } ;
struct xfs_ail {int ail_buf_list; int ail_mount; } ;
struct TYPE_2__ {int (* iop_push ) (struct xfs_log_item*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;
 int FUNC_1 (struct xfs_log_item*,int *) ;

__attribute__((used)) static inline uint
FUNC_2(
 struct xfs_ail *VAR_2,
 struct xfs_log_item *VAR_3)
{




 if (FUNC_0(0, VAR_2->ail_mount, VAR_0))
  return VAR_1;







 if (!VAR_3->li_ops->iop_push)
  return VAR_1;
 return VAR_3->li_ops->iop_push(VAR_3, &VAR_2->ail_buf_list);
}

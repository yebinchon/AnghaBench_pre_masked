
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_6__ {struct xfs_buf_log_item* b_log_item; } ;
typedef TYPE_2__ xfs_buf_t ;
typedef int uint ;
struct TYPE_5__ {int blf_flags; } ;
struct xfs_buf_log_item {TYPE_1__ __bli_format; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_1 (int *,TYPE_2__*,int) ;

void
FUNC_2(
 xfs_trans_t *VAR_4,
 xfs_buf_t *VAR_5,
 uint VAR_6)
{
 struct xfs_buf_log_item *VAR_7 = VAR_5->b_log_item;

 FUNC_0(VAR_6 == 128 ||
        VAR_6 == 129 ||
        VAR_6 == 130);

 VAR_7->__bli_format.blf_flags |= VAR_6;

 switch (VAR_6) {
 case 128:
  VAR_6 = VAR_2;
  break;
 case 129:
  VAR_6 = VAR_1;
  break;
 case 130:
  VAR_6 = VAR_0;
  break;
 default:
  VAR_6 = VAR_3;
  break;
 }

 FUNC_1(VAR_4, VAR_5, VAR_6);
}

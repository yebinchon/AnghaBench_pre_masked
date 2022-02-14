
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
struct xfs_rui_log_format {int rui_nextents; } ;
struct xfs_log_iovec {scalar_t__ i_len; struct xfs_rui_log_format* i_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_rui_log_format*,struct xfs_rui_log_format*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

int
FUNC_2(
 struct xfs_log_iovec *VAR_1,
 struct xfs_rui_log_format *VAR_2)
{
 struct xfs_rui_log_format *VAR_3;
 uint VAR_4;

 VAR_3 = VAR_1->i_addr;
 VAR_4 = FUNC_1(VAR_3->rui_nextents);

 if (VAR_1->i_len != VAR_4)
  return -VAR_0;

 FUNC_0(VAR_2, VAR_3, VAR_4);
 return 0;
}

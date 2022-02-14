
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
struct TYPE_2__ {struct xfs_mount* li_mountp; } ;
struct xfs_qoff_logitem {int qql_flags; struct xfs_qoff_logitem* qql_start_lip; TYPE_1__ qql_item; } ;
struct xfs_mount {int dummy; } ;


 int VAR_0 ;
 struct xfs_qoff_logitem* FUNC_0 (int,int ) ;
 int FUNC_1 (struct xfs_mount*,TYPE_1__*,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;

struct xfs_qoff_logitem *
FUNC_2(
 struct xfs_mount *VAR_3,
 struct xfs_qoff_logitem *VAR_4,
 uint VAR_5)
{
 struct xfs_qoff_logitem *VAR_6;

 VAR_6 = FUNC_0(sizeof(struct xfs_qoff_logitem), 0);

 FUNC_1(VAR_3, &VAR_6->qql_item, VAR_0, VAR_4 ?
   &VAR_2 : &VAR_1);
 VAR_6->qql_item.li_mountp = VAR_3;
 VAR_6->qql_start_lip = VAR_4;
 VAR_6->qql_flags = VAR_5;
 return VAR_6;
}

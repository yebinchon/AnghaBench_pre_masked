
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int m_growlock; } ;
typedef TYPE_1__ xfs_mount_t ;
typedef int xfs_growfs_log_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;

int
FUNC_4(
 xfs_mount_t *VAR_3,
 xfs_growfs_log_t *VAR_4)
{
 int VAR_5;

 if (!FUNC_0(VAR_0))
  return -VAR_1;
 if (!FUNC_1(&VAR_3->m_growlock))
  return -VAR_2;
 VAR_5 = FUNC_3(VAR_3, VAR_4);
 FUNC_2(&VAR_3->m_growlock);
 return VAR_5;
}

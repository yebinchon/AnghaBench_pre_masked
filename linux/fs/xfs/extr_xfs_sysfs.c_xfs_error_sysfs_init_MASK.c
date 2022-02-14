
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kobject; } ;
struct xfs_mount {TYPE_1__ m_error_kobj; int m_error_meta_kobj; int m_kobj; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct xfs_mount*,int ,char*,int *,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *,int *,char*) ;

int
FUNC_5(
 struct xfs_mount *VAR_4)
{
 int VAR_5;


 VAR_5 = FUNC_4(&VAR_4->m_error_kobj, &VAR_2,
    &VAR_4->m_kobj, "error");
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(&VAR_4->m_error_kobj.kobject,
      FUNC_0(VAR_1));

 if (VAR_5)
  goto out_error;


 VAR_5 = FUNC_2(VAR_4, VAR_0,
    "metadata", &VAR_4->m_error_meta_kobj,
    VAR_3);
 if (VAR_5)
  goto out_error;

 return 0;

out_error:
 FUNC_3(&VAR_4->m_error_kobj);
 return VAR_5;
}

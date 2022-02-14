
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_kobj {int dummy; } ;
struct xfs_mount {struct xfs_error_cfg** m_error_cfg; struct xfs_kobj m_error_kobj; } ;
struct xfs_error_init {char const* name; int retry_timeout; int max_retries; } ;
struct xfs_error_cfg {int retry_timeout; struct xfs_kobj kobj; int max_retries; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct xfs_kobj*) ;
 int FUNC_3 (struct xfs_kobj*,int *,struct xfs_kobj*,char const*) ;

__attribute__((used)) static int
FUNC_4(
 struct xfs_mount *VAR_6,
 int VAR_7,
 const char *VAR_8,
 struct xfs_kobj *VAR_9,
 const struct xfs_error_init VAR_10[])
{
 struct xfs_error_cfg *VAR_11;
 int VAR_12;
 int VAR_13;

 FUNC_0(VAR_7 < VAR_1);

 VAR_12 = FUNC_3(VAR_9, &VAR_5,
    &VAR_6->m_error_kobj, VAR_8);
 if (VAR_12)
  return VAR_12;

 for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
  VAR_11 = &VAR_6->m_error_cfg[VAR_7][VAR_13];
  VAR_12 = FUNC_3(&VAR_11->kobj, &VAR_4,
     VAR_9, VAR_10[VAR_13].name);
  if (VAR_12)
   goto out_error;

  VAR_11->max_retries = VAR_10[VAR_13].max_retries;
  if (VAR_10[VAR_13].retry_timeout == VAR_3)
   VAR_11->retry_timeout = VAR_3;
  else
   VAR_11->retry_timeout = FUNC_1(
     VAR_10[VAR_13].retry_timeout * VAR_0);
 }
 return 0;

out_error:

 for (VAR_13--; VAR_13 >= 0; VAR_13--) {
  VAR_11 = &VAR_6->m_error_cfg[VAR_7][VAR_13];
  FUNC_2(&VAR_11->kobj);
 }
 FUNC_2(VAR_9);
 return VAR_12;
}

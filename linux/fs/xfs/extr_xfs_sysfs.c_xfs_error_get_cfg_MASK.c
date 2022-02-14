
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {struct xfs_error_cfg** m_error_cfg; } ;
struct xfs_error_cfg {int dummy; } ;





 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;

struct xfs_error_cfg *
FUNC_0(
 struct xfs_mount *VAR_4,
 int VAR_5,
 int VAR_6)
{
 struct xfs_error_cfg *VAR_7;

 if (VAR_6 < 0)
  VAR_6 = -VAR_6;

 switch (VAR_6) {
 case 130:
  VAR_7 = &VAR_4->m_error_cfg[VAR_5][VAR_1];
  break;
 case 128:
  VAR_7 = &VAR_4->m_error_cfg[VAR_5][VAR_3];
  break;
 case 129:
  VAR_7 = &VAR_4->m_error_cfg[VAR_5][VAR_2];
  break;
 default:
  VAR_7 = &VAR_4->m_error_cfg[VAR_5][VAR_0];
  break;
 }

 return VAR_7;
}

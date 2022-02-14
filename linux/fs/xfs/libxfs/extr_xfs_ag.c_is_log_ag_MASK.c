
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sb_logstart; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;
struct aghdr_init_data {scalar_t__ agno; } ;


 scalar_t__ FUNC_0 (struct xfs_mount*,scalar_t__) ;

__attribute__((used)) static inline bool FUNC_1(struct xfs_mount *VAR_0, struct aghdr_init_data *VAR_1)
{
 return VAR_0->m_sb.sb_logstart > 0 &&
        VAR_1->agno == FUNC_0(VAR_0, VAR_0->m_sb.sb_logstart);
}

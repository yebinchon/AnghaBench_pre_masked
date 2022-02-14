
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qm_portal {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qm_portal*,int ) ;
 int FUNC_1 (struct qm_portal*,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct qm_portal *VAR_2, u8 VAR_3)
{
 FUNC_1(VAR_2, VAR_1, (FUNC_0(VAR_2, VAR_1) & 0xff0fffff) |
       ((VAR_3 & (VAR_0 - 1)) << 20));
}

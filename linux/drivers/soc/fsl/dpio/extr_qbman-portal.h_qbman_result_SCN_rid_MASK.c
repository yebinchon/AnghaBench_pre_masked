
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int rid_tok; } ;
struct dpaa2_dq {TYPE_1__ scn; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline u32 FUNC_1(const struct dpaa2_dq *VAR_1)
{
 return FUNC_0(VAR_1->scn.rid_tok) & VAR_0;
}

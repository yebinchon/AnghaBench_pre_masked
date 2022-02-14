
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink {int dummy; } ;
struct bnxt_dl {struct bnxt* bp; } ;
struct bnxt {struct devlink* dl; } ;


 struct bnxt_dl* FUNC_0 (struct devlink*) ;

__attribute__((used)) static inline void FUNC_1(struct bnxt *VAR_0, struct devlink *VAR_1)
{
 VAR_0->dl = VAR_1;


 if (VAR_1) {
  struct bnxt_dl *VAR_2 = FUNC_0(VAR_1);

  VAR_2->bp = VAR_0;
 }
}

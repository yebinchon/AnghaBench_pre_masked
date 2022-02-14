
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink {int dummy; } ;
struct bnxt_dl {struct bnxt* bp; } ;
struct bnxt {int dummy; } ;


 scalar_t__ FUNC_0 (struct devlink*) ;

__attribute__((used)) static inline struct bnxt *FUNC_1(struct devlink *VAR_0)
{
 return ((struct bnxt_dl *)FUNC_0(VAR_0))->bp;
}

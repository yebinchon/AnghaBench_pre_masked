
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlist_head {int dummy; } ;
struct dlm_ctxt {struct hlist_head** lockres_hash; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static inline struct hlist_head *FUNC_0(struct dlm_ctxt *VAR_2, unsigned VAR_3)
{
 return VAR_2->lockres_hash[(VAR_3 / VAR_0) % VAR_1] + (VAR_3 % VAR_0);
}

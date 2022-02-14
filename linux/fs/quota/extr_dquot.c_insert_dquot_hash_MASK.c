
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlist_head {int dummy; } ;
struct dquot {int dq_hash; int dq_id; int dq_sb; } ;


 struct hlist_head* VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,struct hlist_head*) ;

__attribute__((used)) static inline void FUNC_2(struct dquot *VAR_1)
{
 struct hlist_head *VAR_2;
 VAR_2 = VAR_0 + FUNC_0(VAR_1->dq_sb, VAR_1->dq_id);
 FUNC_1(&VAR_1->dq_hash, VAR_2);
}

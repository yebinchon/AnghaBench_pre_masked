
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dquot_warn {int w_type; int w_dq_id; int w_sb; } ;
struct dquot {int dq_id; int dq_sb; } ;


 scalar_t__ FUNC_0 (struct dquot*,int) ;

__attribute__((used)) static void FUNC_1(struct dquot_warn *VAR_0, struct dquot *VAR_1,
       int VAR_2)
{
 if (FUNC_0(VAR_1, VAR_2))
  return;
 VAR_0->w_type = VAR_2;
 VAR_0->w_sb = VAR_1->dq_sb;
 VAR_0->w_dq_id = VAR_1->dq_id;
}

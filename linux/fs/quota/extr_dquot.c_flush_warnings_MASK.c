
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dquot_warn {scalar_t__ w_type; TYPE_1__* w_sb; int w_dq_id; } ;
struct TYPE_2__ {int s_dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct dquot_warn*) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct dquot_warn *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2[VAR_3].w_type == VAR_1)
   continue;



  FUNC_1(VAR_2[VAR_3].w_dq_id,
       VAR_2[VAR_3].w_sb->s_dev, VAR_2[VAR_3].w_type);
 }
}

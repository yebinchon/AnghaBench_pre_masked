
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcmu_cmd {struct se_cmd* se_cmd; } ;
struct se_cmd {int se_cmd_flags; TYPE_1__* t_bidi_data_sg; scalar_t__ t_bidi_data_nents; int data_length; } ;
struct TYPE_2__ {int length; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (int ,int ) ;

__attribute__((used)) static inline size_t FUNC_2(struct tcmu_cmd *VAR_2)
{
 struct se_cmd *VAR_3 = VAR_2->se_cmd;
 size_t VAR_4 = FUNC_1(VAR_3->data_length, VAR_0);

 if (VAR_3->se_cmd_flags & VAR_1) {
  FUNC_0(!(VAR_3->t_bidi_data_sg && VAR_3->t_bidi_data_nents));
  VAR_4 += FUNC_1(VAR_3->t_bidi_data_sg->length,
    VAR_0);
 }

 return VAR_4;
}

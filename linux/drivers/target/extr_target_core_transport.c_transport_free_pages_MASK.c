
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {int se_cmd_flags; scalar_t__ t_bidi_data_nents; int * t_bidi_data_sg; scalar_t__ t_data_nents; int * t_data_sg; scalar_t__ t_prot_nents; int * t_prot_sg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (struct se_cmd*) ;

__attribute__((used)) static inline void FUNC_2(struct se_cmd *VAR_3)
{
 if (!(VAR_3->se_cmd_flags & VAR_1)) {
  FUNC_0(VAR_3->t_prot_sg, VAR_3->t_prot_nents);
  VAR_3->t_prot_sg = ((void*)0);
  VAR_3->t_prot_nents = 0;
 }

 if (VAR_3->se_cmd_flags & VAR_2) {




  if (VAR_3->se_cmd_flags & VAR_0) {
   FUNC_0(VAR_3->t_bidi_data_sg,
        VAR_3->t_bidi_data_nents);
   VAR_3->t_bidi_data_sg = ((void*)0);
   VAR_3->t_bidi_data_nents = 0;
  }
  FUNC_1(VAR_3);
  return;
 }
 FUNC_1(VAR_3);

 FUNC_0(VAR_3->t_data_sg, VAR_3->t_data_nents);
 VAR_3->t_data_sg = ((void*)0);
 VAR_3->t_data_nents = 0;

 FUNC_0(VAR_3->t_bidi_data_sg, VAR_3->t_bidi_data_nents);
 VAR_3->t_bidi_data_sg = ((void*)0);
 VAR_3->t_bidi_data_nents = 0;
}

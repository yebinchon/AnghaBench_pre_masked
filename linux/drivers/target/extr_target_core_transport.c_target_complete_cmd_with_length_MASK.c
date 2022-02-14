
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct se_cmd {int se_cmd_flags; int data_length; int residual_count; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct se_cmd*,scalar_t__) ;

void FUNC_1(struct se_cmd *VAR_3, u8 VAR_4, int VAR_5)
{
 if ((VAR_4 == VAR_0 ||
      VAR_3->se_cmd_flags & VAR_1) &&
     VAR_5 < VAR_3->data_length) {
  if (VAR_3->se_cmd_flags & VAR_2) {
   VAR_3->residual_count += VAR_3->data_length - VAR_5;
  } else {
   VAR_3->se_cmd_flags |= VAR_2;
   VAR_3->residual_count = VAR_3->data_length - VAR_5;
  }

  VAR_3->data_length = VAR_5;
 }

 FUNC_0(VAR_3, VAR_4);
}

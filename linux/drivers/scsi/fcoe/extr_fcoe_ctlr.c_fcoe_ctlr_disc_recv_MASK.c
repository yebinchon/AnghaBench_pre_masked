
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_seq_els_data {int explan; int reason; } ;
struct fc_lport {int dummy; } ;
struct fc_frame {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fc_frame*) ;
 int FUNC_1 (struct fc_frame*,int ,struct fc_seq_els_data*) ;

__attribute__((used)) static void FUNC_2(struct fc_lport *VAR_3, struct fc_frame *VAR_4)
{
 struct fc_seq_els_data VAR_5;

 VAR_5.reason = VAR_2;
 VAR_5.explan = VAR_0;
 FUNC_1(VAR_4, VAR_1, &VAR_5);
 FUNC_0(VAR_4);
}

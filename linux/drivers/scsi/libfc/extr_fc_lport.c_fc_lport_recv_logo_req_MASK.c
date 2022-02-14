
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_lport {int lp_mutex; } ;
struct fc_frame {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fc_frame*) ;
 int FUNC_1 (struct fc_lport*) ;
 int FUNC_2 (struct fc_frame*,int ,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct fc_lport *VAR_1, struct fc_frame *VAR_2)
{
 FUNC_3(&VAR_1->lp_mutex);

 FUNC_2(VAR_2, VAR_0, ((void*)0));
 FUNC_1(VAR_1);
 FUNC_0(VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_lport {int lp_mutex; } ;


 int FUNC_0 (struct fc_lport*,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct fc_lport*) ;
 int FUNC_2 (struct fc_lport*) ;
 int FUNC_3 (struct fc_lport*,int ) ;
 int FUNC_4 (struct fc_lport*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct fc_lport *VAR_1)
{
 FUNC_5(&VAR_1->lp_mutex);

 FUNC_0(VAR_1, "Entered disabled state from %s state\n",
       FUNC_2(VAR_1));

 FUNC_3(VAR_1, VAR_0);
 FUNC_4(VAR_1);
 FUNC_1(VAR_1);
}

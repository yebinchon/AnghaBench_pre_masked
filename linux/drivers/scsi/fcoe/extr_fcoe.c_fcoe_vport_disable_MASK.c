
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_vport {struct fc_lport* dd_data; } ;
struct fc_lport {int boot_time; } ;


 int VAR_0 ;
 int FUNC_0 (struct fc_lport*) ;
 int FUNC_1 (struct fc_lport*) ;
 int FUNC_2 (struct fc_vport*,int ) ;
 int FUNC_3 (struct fc_lport*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct fc_vport *VAR_2, bool VAR_3)
{
 struct fc_lport *VAR_4 = VAR_2->dd_data;

 if (VAR_3) {
  FUNC_2(VAR_2, VAR_0);
  FUNC_1(VAR_4);
 } else {
  VAR_4->boot_time = VAR_1;
  FUNC_0(VAR_4);
  FUNC_3(VAR_4);
 }

 return 0;
}

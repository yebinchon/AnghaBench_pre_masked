
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_lport {int service_params; } ;
struct fc4_prov {scalar_t__ recv; } ;
typedef enum fc_fh_type { ____Placeholder_fc_fh_type } fc_fh_type ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fc4_prov** VAR_3 ;

void FUNC_1(struct fc_lport *VAR_4, enum fc_fh_type VAR_5)
{
 struct fc4_prov *VAR_6;
 FUNC_0(VAR_5 >= VAR_1);
 FUNC_0(!VAR_4);
 VAR_6 = VAR_3[VAR_5];
 if (VAR_5 == VAR_2) {
  if (VAR_6 && VAR_6->recv)
   VAR_4->service_params |= VAR_0;
 }
}

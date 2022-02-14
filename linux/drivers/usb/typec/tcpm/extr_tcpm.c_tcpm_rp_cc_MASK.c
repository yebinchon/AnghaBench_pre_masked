
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcpm_port {int nr_src_pdo; int * src_pdo; } ;
typedef enum typec_cc_status { ____Placeholder_typec_cc_status } typec_cc_status ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const) ;
 unsigned int FUNC_1 (int const) ;
 scalar_t__ FUNC_2 (int const) ;

__attribute__((used)) static enum typec_cc_status FUNC_3(struct tcpm_port *VAR_4)
{
 const u32 *VAR_5 = VAR_4->src_pdo;
 int VAR_6 = VAR_4->nr_src_pdo;
 int VAR_7;





 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  const u32 VAR_8 = VAR_5[VAR_7];

  if (FUNC_2(VAR_8) == VAR_0 &&
      FUNC_0(VAR_8) == 5000) {
   unsigned int VAR_9 = FUNC_1(VAR_8);

   if (VAR_9 >= 3000)
    return VAR_2;
   else if (VAR_9 >= 1500)
    return VAR_1;
   return VAR_3;
  }
 }

 return VAR_3;
}

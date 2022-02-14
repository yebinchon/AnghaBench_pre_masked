
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcpm_port {int sink_request; unsigned int nr_src_pdo; int* src_pdo; int op_vsafe5v; } ;
typedef enum pd_pdo_type { ____Placeholder_pd_pdo_type } pd_pdo_type ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;
 unsigned int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 unsigned int FUNC_6 (int) ;
 unsigned int FUNC_7 (int) ;
 unsigned int FUNC_8 (int) ;
 unsigned int FUNC_9 (int) ;
 unsigned int FUNC_10 (int) ;
 int FUNC_11 (struct tcpm_port*,char*,int ,unsigned int,unsigned int,unsigned int,...) ;

__attribute__((used)) static int FUNC_12(struct tcpm_port *VAR_2)
{
 u32 VAR_3, VAR_4 = VAR_2->sink_request;
 unsigned int VAR_5, VAR_6, VAR_7, VAR_8;
 enum pd_pdo_type VAR_9;

 VAR_8 = FUNC_6(VAR_4);
 if (!VAR_8 || VAR_8 > VAR_2->nr_src_pdo)
  return -VAR_0;

 VAR_3 = VAR_2->src_pdo[VAR_8 - 1];
 VAR_9 = FUNC_5(VAR_3);
 switch (VAR_9) {
 case 129:
 case 128:
  VAR_5 = FUNC_7(VAR_4);
  VAR_6 = FUNC_9(VAR_4);
  VAR_7 = FUNC_1(VAR_3);

  if (VAR_6 > VAR_7)
   return -VAR_0;
  if (VAR_5 > VAR_7 && !(VAR_4 & VAR_1))
   return -VAR_0;

  if (VAR_9 == 129)
   FUNC_11(VAR_2,
     "Requested %u mV, %u mA for %u / %u mA",
     FUNC_0(VAR_3), VAR_7, VAR_6, VAR_5);
  else
   FUNC_11(VAR_2,
     "Requested %u -> %u mV, %u mA for %u / %u mA",
     FUNC_4(VAR_3), FUNC_3(VAR_3),
     VAR_7, VAR_6, VAR_5);
  break;
 case 130:
  VAR_5 = FUNC_8(VAR_4);
  VAR_6 = FUNC_10(VAR_4);
  VAR_7 = FUNC_2(VAR_3);

  if (VAR_6 > VAR_7)
   return -VAR_0;
  if (VAR_5 > VAR_7 && !(VAR_4 & VAR_1))
   return -VAR_0;
  FUNC_11(VAR_2,
    "Requested %u -> %u mV, %u mW for %u / %u mW",
    FUNC_4(VAR_3), FUNC_3(VAR_3),
    VAR_7, VAR_6, VAR_5);
  break;
 default:
  return -VAR_0;
 }

 VAR_2->op_vsafe5v = VAR_8 == 1;

 return 0;
}

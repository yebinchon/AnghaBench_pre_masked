
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcpm_port {int state; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;


 unsigned int VAR_2 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (struct tcpm_port*,char*) ;
 int FUNC_2 (struct tcpm_port*,int ) ;
 int FUNC_3 (struct tcpm_port*,int ,int ) ;
 unsigned int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct tcpm_port *VAR_3, const __le32 *VAR_4,
         int VAR_5)
{
 u32 VAR_6 = FUNC_0(VAR_4[0]);
 unsigned int VAR_7 = FUNC_4(VAR_6);

 if (!VAR_7) {
  FUNC_1(VAR_3, "Alert message received with no type");
  return;
 }


 if (!(VAR_7 & VAR_2)) {
  switch (VAR_3->state) {
  case 128:
  case 129:
   FUNC_3(VAR_3, VAR_0, 0);
   break;
  default:
   FUNC_2(VAR_3, VAR_1);
   break;
  }
 }
}

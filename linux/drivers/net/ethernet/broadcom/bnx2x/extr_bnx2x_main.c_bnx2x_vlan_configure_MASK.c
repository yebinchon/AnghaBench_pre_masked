
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x {int accept_any_vlan; } ;


 int FUNC_0 (int ,char*,char*) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 int VAR_0 ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (struct bnx2x*) ;

__attribute__((used)) static void FUNC_5(struct bnx2x *VAR_1, bool VAR_2)
{
 bool VAR_3;

 VAR_3 = !!FUNC_4(VAR_1);

 if (VAR_1->accept_any_vlan != VAR_3) {
  VAR_1->accept_any_vlan = VAR_3;
  FUNC_0(VAR_0, "Accept all VLAN %s\n",
     VAR_1->accept_any_vlan ? "raised" : "cleared");
  if (VAR_2) {
   if (FUNC_1(VAR_1))
    FUNC_2(VAR_1);
   else
    FUNC_3(VAR_1);
  }
 }
}

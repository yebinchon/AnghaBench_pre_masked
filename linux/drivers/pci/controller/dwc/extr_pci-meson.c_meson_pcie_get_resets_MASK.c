
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_pcie_rc_reset {void* apb; void* port; void* phy; } ;
struct meson_pcie {struct meson_pcie_rc_reset mrst; } ;


 scalar_t__ FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (struct meson_pcie*,char*,int ) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static int FUNC_4(struct meson_pcie *VAR_2)
{
 struct meson_pcie_rc_reset *VAR_3 = &VAR_2->mrst;

 VAR_3->phy = FUNC_2(VAR_2, "phy", VAR_1);
 if (FUNC_0(VAR_3->phy))
  return FUNC_1(VAR_3->phy);
 FUNC_3(VAR_3->phy);

 VAR_3->port = FUNC_2(VAR_2, "port", VAR_0);
 if (FUNC_0(VAR_3->port))
  return FUNC_1(VAR_3->port);
 FUNC_3(VAR_3->port);

 VAR_3->apb = FUNC_2(VAR_2, "apb", VAR_1);
 if (FUNC_0(VAR_3->apb))
  return FUNC_1(VAR_3->apb);
 FUNC_3(VAR_3->apb);

 return 0;
}

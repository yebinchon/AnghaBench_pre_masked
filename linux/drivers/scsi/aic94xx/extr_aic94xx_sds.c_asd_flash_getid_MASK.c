
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int present; int wide; int bar; } ;
struct TYPE_4__ {TYPE_1__ flash; } ;
struct asd_ha_struct {TYPE_2__ hw_prof; int pcidev; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct asd_ha_struct*,int ) ;
 int FUNC_3 (struct asd_ha_struct*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_6(struct asd_ha_struct *VAR_4)
{
 int VAR_5 = 0;
 u32 VAR_6;

 VAR_6 = FUNC_2(VAR_4, VAR_1);

 if (FUNC_5(VAR_4->pcidev, VAR_3,
      &VAR_4->hw_prof.flash.bar)) {
  FUNC_1("couldn't read PCI_CONF_FLSH_BAR of %s\n",
      FUNC_4(VAR_4->pcidev));
  return -VAR_0;
 }
 VAR_4->hw_prof.flash.present = 1;
 VAR_4->hw_prof.flash.wide = VAR_6 & VAR_2 ? 1 : 0;
 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5) {
  FUNC_0("couldn't reset flash(%d)\n", VAR_5);
  return VAR_5;
 }
 return 0;
}

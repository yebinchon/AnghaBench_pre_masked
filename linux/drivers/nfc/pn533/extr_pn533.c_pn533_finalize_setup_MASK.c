
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pn533_fw_version {int rev; int ver; int ic; } ;
struct pn533 {int dev; } ;
typedef int fw_ver ;


 int FUNC_0 (struct pn533_fw_version*,int ,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;
 int FUNC_3 (struct pn533*,struct pn533_fw_version*) ;
 int FUNC_4 (struct pn533*) ;

int FUNC_5(struct pn533 *VAR_0)
{

 struct pn533_fw_version VAR_1;
 int VAR_2;

 FUNC_0(&VAR_1, 0, sizeof(VAR_1));

 VAR_2 = FUNC_3(VAR_0, &VAR_1);
 if (VAR_2) {
  FUNC_1(VAR_0->dev, "Unable to get FW version\n");
  return VAR_2;
 }

 FUNC_2(VAR_0->dev, "NXP PN5%02X firmware ver %d.%d now attached\n",
  VAR_1.ic, VAR_1.ver, VAR_1.rev);

 VAR_2 = FUNC_4(VAR_0);
 if (VAR_2)
  return VAR_2;

 return 0;
}

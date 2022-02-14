
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_mei_phy {int hdev; } ;
struct mei_cl_device {int dummy; } ;


 struct nfc_mei_phy* FUNC_0 (struct mei_cl_device*) ;
 int FUNC_1 (struct nfc_mei_phy*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct mei_cl_device *VAR_0)
{
 struct nfc_mei_phy *VAR_1 = FUNC_0(VAR_0);

 FUNC_3("Removing pn544\n");

 FUNC_2(VAR_1->hdev);

 FUNC_1(VAR_1);

 return 0;
}

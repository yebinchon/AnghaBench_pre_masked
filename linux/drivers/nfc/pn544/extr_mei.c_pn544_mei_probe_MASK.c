
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_mei_phy {int hdev; } ;
struct mei_cl_device_id {int dummy; } ;
struct mei_cl_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct nfc_mei_phy* FUNC_0 (struct mei_cl_device*) ;
 int FUNC_1 (struct nfc_mei_phy*) ;
 int FUNC_2 (struct nfc_mei_phy*,int *,int ,int ,int ,int ,int *,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct mei_cl_device *VAR_5,
          const struct mei_cl_device_id *VAR_6)
{
 struct nfc_mei_phy *VAR_7;
 int VAR_8;

 FUNC_4("Probing NFC pn544\n");

 VAR_7 = FUNC_0(VAR_5);
 if (!VAR_7) {
  FUNC_3("Cannot allocate memory for pn544 mei phy.\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_2(VAR_7, &VAR_4, VAR_1,
       VAR_2, 0, VAR_3,
       ((void*)0), &VAR_7->hdev);
 if (VAR_8 < 0) {
  FUNC_1(VAR_7);

  return VAR_8;
 }

 return 0;
}

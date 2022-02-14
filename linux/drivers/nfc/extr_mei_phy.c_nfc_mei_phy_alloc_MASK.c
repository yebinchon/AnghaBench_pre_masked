
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_mei_phy {int send_wq; struct mei_cl_device* cldev; } ;
struct mei_cl_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct nfc_mei_phy* FUNC_1 (int,int ) ;
 int FUNC_2 (struct mei_cl_device*,struct nfc_mei_phy*) ;

struct nfc_mei_phy *FUNC_3(struct mei_cl_device *VAR_1)
{
 struct nfc_mei_phy *VAR_2;

 VAR_2 = FUNC_1(sizeof(struct nfc_mei_phy), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->cldev = VAR_1;
 FUNC_0(&VAR_2->send_wq);
 FUNC_2(VAR_1, VAR_2);

 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pn533 {scalar_t__ device_type; } ;
struct nfc_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct pn533* FUNC_0 (struct nfc_dev*) ;
 int FUNC_1 (struct nfc_dev*) ;
 int FUNC_2 (struct nfc_dev*,int) ;

__attribute__((used)) static int FUNC_3(struct nfc_dev *VAR_1)
{
 struct pn533 *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->device_type == VAR_0) {
  int VAR_3 = FUNC_1(VAR_1);

  if (VAR_3)
   return VAR_3;
 }

 return FUNC_2(VAR_1, 1);
}

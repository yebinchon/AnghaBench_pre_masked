
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pn533 {int dev; } ;
struct nfc_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct pn533* FUNC_1 (struct nfc_dev*) ;
 int FUNC_2 (struct pn533*,int ,int*,int) ;

__attribute__((used)) static int FUNC_3(struct nfc_dev *VAR_2, u8 VAR_3)
{
 struct pn533 *VAR_4 = FUNC_1(VAR_2);
 u8 VAR_5 = !!VAR_3;
 int VAR_6;

 VAR_5 |= VAR_1;

 VAR_6 = FUNC_2(VAR_4, VAR_0,
         (u8 *)&VAR_5, 1);
 if (VAR_6) {
  FUNC_0(VAR_4->dev, "Error on setting RF field\n");
  return VAR_6;
 }

 return VAR_6;
}

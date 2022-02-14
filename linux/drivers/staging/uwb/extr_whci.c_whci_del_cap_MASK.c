
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct whci_card {struct umc_dev** devs; } ;
struct umc_dev {int dummy; } ;


 int FUNC_0 (struct umc_dev*) ;

__attribute__((used)) static void FUNC_1(struct whci_card *VAR_0, int VAR_1)
{
 struct umc_dev *VAR_2 = VAR_0->devs[VAR_1];

 FUNC_0(VAR_2);
}

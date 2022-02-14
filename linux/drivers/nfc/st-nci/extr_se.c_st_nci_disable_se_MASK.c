
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nci_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nci_dev*,int ,int ,int *,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct nci_dev*,scalar_t__,int ) ;

int FUNC_3(struct nci_dev *VAR_4, u32 VAR_5)
{
 int VAR_6;

 FUNC_1("st_nci_disable_se\n");






 VAR_6 = FUNC_2(VAR_4, VAR_5, VAR_3);
 if (VAR_6 < 0) {

  if (VAR_5 == VAR_0) {
   VAR_6 = FUNC_0(VAR_4, VAR_1,
     VAR_2,
     ((void*)0), 0);
  }
  return VAR_6;
 }

 return 0;
}

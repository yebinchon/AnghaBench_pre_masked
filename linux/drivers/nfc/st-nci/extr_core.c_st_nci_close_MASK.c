
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_nci_info {int flags; int ndlc; } ;
struct nci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct st_nci_info* FUNC_1 (struct nci_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct nci_dev *VAR_1)
{
 struct st_nci_info *VAR_2 = FUNC_1(VAR_1);

 if (!FUNC_3(VAR_0, &VAR_2->flags))
  return 0;

 FUNC_2(VAR_2->ndlc);

 FUNC_0(VAR_0, &VAR_2->flags);

 return 0;
}

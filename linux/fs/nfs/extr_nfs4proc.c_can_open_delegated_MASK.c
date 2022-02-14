
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_delegation {int type; int flags; } ;
typedef int fmode_t ;
typedef enum open_claim_type4 { ____Placeholder_open_claim_type4 } open_claim_type4 ;





 int VAR_0 ;
 int FUNC_0 (struct nfs_delegation*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct nfs_delegation *VAR_1, fmode_t VAR_2,
  enum open_claim_type4 VAR_3)
{
 if (VAR_1 == ((void*)0))
  return 0;
 if ((VAR_1->type & VAR_2) != VAR_2)
  return 0;
 switch (VAR_3) {
 case 129:
 case 130:
  break;
 case 128:
  if (!FUNC_1(VAR_0, &VAR_1->flags))
   break;

 default:
  return 0;
 }
 FUNC_0(VAR_1);
 return 1;
}

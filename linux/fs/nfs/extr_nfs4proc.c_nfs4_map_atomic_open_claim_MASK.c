
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int caps; } ;
typedef enum open_claim_type4 { ____Placeholder_open_claim_type4 } open_claim_type4 ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static enum open_claim_type4
FUNC_0(struct nfs_server *VAR_4,
  enum open_claim_type4 VAR_5)
{
 if (VAR_4->caps & VAR_3)
  return VAR_5;
 switch (VAR_5) {
 default:
  return VAR_5;
 case 128:
  return VAR_2;
 case 130:
  return VAR_0;
 case 129:
  return VAR_1;
 }
}

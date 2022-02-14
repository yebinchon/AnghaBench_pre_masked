
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pn533_target_type_b {int dummy; } ;
struct nfc_target {int supported_protocols; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pn533_target_type_b*,int) ;

__attribute__((used)) static int FUNC_1(struct nfc_target *VAR_2, u8 *VAR_3,
       int VAR_4)
{
 struct pn533_target_type_b *VAR_5;

 VAR_5 = (struct pn533_target_type_b *)VAR_3;

 if (!FUNC_0(VAR_5, VAR_4))
  return -VAR_0;

 VAR_2->supported_protocols = VAR_1;

 return 0;
}

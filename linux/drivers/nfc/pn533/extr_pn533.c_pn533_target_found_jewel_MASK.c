
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pn533_target_jewel {int jewelid; int sens_res; } ;
struct nfc_target {int nfcid1_len; int nfcid1; int sens_res; int supported_protocols; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct pn533_target_jewel*,int) ;

__attribute__((used)) static int FUNC_3(struct nfc_target *VAR_2, u8 *VAR_3,
       int VAR_4)
{
 struct pn533_target_jewel *VAR_5;

 VAR_5 = (struct pn533_target_jewel *)VAR_3;

 if (!FUNC_2(VAR_5, VAR_4))
  return -VAR_0;

 VAR_2->supported_protocols = VAR_1;
 VAR_2->sens_res = FUNC_0(VAR_5->sens_res);
 VAR_2->nfcid1_len = 4;
 FUNC_1(VAR_2->nfcid1, VAR_5->jewelid, VAR_2->nfcid1_len);

 return 0;
}

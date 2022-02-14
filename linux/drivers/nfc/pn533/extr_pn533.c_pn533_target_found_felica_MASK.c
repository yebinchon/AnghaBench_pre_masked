
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pn533_target_felica {scalar_t__* nfcid2; scalar_t__ opcode; } ;
struct nfc_target {int sensf_res_len; int nfcid2_len; int nfcid2; int sensf_res; int supported_protocols; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,scalar_t__*,int) ;
 int FUNC_1 (struct pn533_target_felica*,int) ;

__attribute__((used)) static int FUNC_2(struct nfc_target *VAR_6, u8 *VAR_7,
       int VAR_8)
{
 struct pn533_target_felica *VAR_9;

 VAR_9 = (struct pn533_target_felica *)VAR_7;

 if (!FUNC_1(VAR_9, VAR_8))
  return -VAR_0;

 if ((VAR_9->nfcid2[0] == VAR_4) &&
     (VAR_9->nfcid2[1] == VAR_5))
  VAR_6->supported_protocols = VAR_3;
 else
  VAR_6->supported_protocols = VAR_2;

 FUNC_0(VAR_6->sensf_res, &VAR_9->opcode, 9);
 VAR_6->sensf_res_len = 9;

 FUNC_0(VAR_6->nfcid2, VAR_9->nfcid2, VAR_1);
 VAR_6->nfcid2_len = VAR_1;

 return 0;
}

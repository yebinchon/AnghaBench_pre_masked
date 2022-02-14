
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct brcmf_p2p_info {int dummy; } ;
struct brcmf_if {int dummy; } ;
struct brcmf_fil_p2p_if_le {void* chspec; void* type; int addr; } ;
typedef int if_request ;
typedef enum brcmf_fil_p2p_if_types { ____Placeholder_brcmf_fil_p2p_if_types } brcmf_fil_p2p_if_types ;


 int VAR_0 ;
 int FUNC_0 (struct brcmf_if*,char*,struct brcmf_fil_p2p_if_le*,int) ;
 int FUNC_1 (struct brcmf_p2p_info*,int *) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct brcmf_p2p_info *VAR_1,
        struct brcmf_if *VAR_2, u8 VAR_3[VAR_0],
        enum brcmf_fil_p2p_if_types VAR_4)
{
 struct brcmf_fil_p2p_if_le VAR_5;
 int VAR_6;
 u16 VAR_7;


 FUNC_1(VAR_1, &VAR_7);


 FUNC_3(VAR_5.addr, VAR_3, VAR_0);
 VAR_5.type = FUNC_2((u16)VAR_4);
 VAR_5.chspec = FUNC_2(VAR_7);

 VAR_6 = FUNC_0(VAR_2, "p2p_ifadd", &VAR_5,
           sizeof(VAR_5));

 return VAR_6;
}

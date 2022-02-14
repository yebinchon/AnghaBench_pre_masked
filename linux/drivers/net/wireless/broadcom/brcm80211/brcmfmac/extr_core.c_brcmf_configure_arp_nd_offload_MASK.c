
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcmf_if {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct brcmf_if*,char*,int) ;

void FUNC_2(struct brcmf_if *VAR_3, bool VAR_4)
{
 s32 VAR_5;
 u32 VAR_6;

 if (VAR_4)
  VAR_6 = VAR_0 | VAR_1;
 else
  VAR_6 = 0;



 VAR_5 = FUNC_1(VAR_3, "arp_ol", VAR_6);
 if (VAR_5) {
  FUNC_0(VAR_2, "failed to set ARP offload mode to 0x%x, err = %d\n",
     VAR_6, VAR_5);
 } else {
  VAR_5 = FUNC_1(VAR_3, "arpoe", VAR_4);
  if (VAR_5) {
   FUNC_0(VAR_2, "failed to configure (%d) ARP offload err = %d\n",
      VAR_4, VAR_5);
  } else {
   FUNC_0(VAR_2, "successfully configured (%d) ARP offload to 0x%x\n",
      VAR_4, VAR_6);
  }
 }

 VAR_5 = FUNC_1(VAR_3, "ndoe", VAR_4);
 if (VAR_5) {
  FUNC_0(VAR_2, "failed to configure (%d) ND offload err = %d\n",
     VAR_4, VAR_5);
 } else {
  FUNC_0(VAR_2, "successfully configured (%d) ND offload to 0x%x\n",
     VAR_4, VAR_6);
 }
}

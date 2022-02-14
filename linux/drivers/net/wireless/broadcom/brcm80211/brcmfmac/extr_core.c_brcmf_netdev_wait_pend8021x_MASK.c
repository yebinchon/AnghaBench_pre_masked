
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_pub {int dummy; } ;
struct brcmf_if {int pend_8021x_wait; struct brcmf_pub* drvr; } ;


 int VAR_0 ;
 int FUNC_0 (struct brcmf_pub*,char*) ;
 int FUNC_1 (struct brcmf_if*) ;
 int FUNC_2 (int ,int,int ) ;

int FUNC_3(struct brcmf_if *VAR_1)
{
 struct brcmf_pub *VAR_2 = VAR_1->drvr;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_1->pend_8021x_wait,
     !FUNC_1(VAR_1),
     VAR_0);

 if (!VAR_3)
  FUNC_0(VAR_2, "Timed out waiting for no pending 802.1x packets\n");

 return !VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int gidft_inp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct lpfc_vport*,int ,int ,int ) ;
 int FUNC_1 (struct lpfc_vport*,int ,int ,char*,char*,int ,char*) ;

int
FUNC_2(struct lpfc_vport *VAR_4)
{

 if (FUNC_0(VAR_4, VAR_3, 0, VAR_0)) {



  FUNC_1(VAR_4, VAR_1, VAR_2,
     "0606 %s Port TYPE %x %s\n",
     "Failed to issue GID_PT to ",
     VAR_0,
     "Finishing discovery.");
  return 0;
 }
 VAR_4->gidft_inp++;
 return 1;
}

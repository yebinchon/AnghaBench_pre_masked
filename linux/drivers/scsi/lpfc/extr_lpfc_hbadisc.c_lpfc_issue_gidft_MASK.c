
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {scalar_t__ cfg_enable_fc4_type; scalar_t__ gidft_inp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct lpfc_vport*,int ,int ,int ) ;
 int FUNC_1 (struct lpfc_vport*,int ,int ,char*,char*,int ,char*,...) ;

int
FUNC_2(struct lpfc_vport *VAR_10)
{

 if ((VAR_10->cfg_enable_fc4_type == VAR_4) ||
     (VAR_10->cfg_enable_fc4_type == VAR_5)) {
  if (FUNC_0(VAR_10, VAR_7, 0, VAR_8)) {



   FUNC_1(VAR_10, VAR_2, VAR_3,
      "0604 %s FC TYPE %x %s\n",
      "Failed to issue GID_FT to ",
      VAR_0,
      "Finishing discovery.");
   return 0;
  }
  VAR_10->gidft_inp++;
 }

 if ((VAR_10->cfg_enable_fc4_type == VAR_4) ||
     (VAR_10->cfg_enable_fc4_type == VAR_6)) {
  if (FUNC_0(VAR_10, VAR_7, 0, VAR_9)) {



   FUNC_1(VAR_10, VAR_2, VAR_3,
      "0605 %s FC_TYPE %x %s %d\n",
      "Failed to issue GID_FT to ",
      VAR_1,
      "Finishing discovery: gidftinp ",
      VAR_10->gidft_inp);
   if (VAR_10->gidft_inp == 0)
    return 0;
  } else
   VAR_10->gidft_inp++;
 }
 return VAR_10->gidft_inp;
}

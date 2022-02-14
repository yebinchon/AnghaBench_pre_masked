
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sas_identify_frame {int _un1; int phy_id; int * sas_addr; int * _un4_11; int target_bits; int initiator_bits; scalar_t__ frame_type; int dev_type; } ;
struct hisi_hba {int sas_addr; } ;
typedef int identify_frame ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hisi_hba*,int,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (struct sas_identify_frame*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct hisi_hba *VAR_10, int VAR_11)
{
 struct sas_identify_frame VAR_12;
 u32 *VAR_13;

 FUNC_3(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.dev_type = VAR_1;
 VAR_12.frame_type = 0;
 VAR_12._un1 = 1;
 VAR_12.initiator_bits = VAR_2;
 VAR_12.target_bits = VAR_3;
 FUNC_2(&VAR_12._un4_11[0], VAR_10->sas_addr, VAR_0);
 FUNC_2(&VAR_12.sas_addr[0], VAR_10->sas_addr, VAR_0);
 VAR_12.phy_id = VAR_11;
 VAR_13 = (u32 *)(&VAR_12);

 FUNC_1(VAR_10, VAR_11, VAR_4,
   FUNC_0(VAR_13[0]));
 FUNC_1(VAR_10, VAR_11, VAR_5,
   FUNC_0(VAR_13[1]));
 FUNC_1(VAR_10, VAR_11, VAR_6,
   FUNC_0(VAR_13[2]));
 FUNC_1(VAR_10, VAR_11, VAR_7,
   FUNC_0(VAR_13[3]));
 FUNC_1(VAR_10, VAR_11, VAR_8,
   FUNC_0(VAR_13[4]));
 FUNC_1(VAR_10, VAR_11, VAR_9,
   FUNC_0(VAR_13[5]));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u32 ;
struct vpd_params {int id; int na; int pn; int sn; int member_0; } ;
struct cudbg_vpd_data {char scfg_vers; char vpd_vers; int fw_build; int fw_micro; int fw_minor; int fw_major; int mn; int na; int bn; int sn; } ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int dummy; } ;
struct cudbg_buffer {scalar_t__ data; int member_0; } ;
struct adapter {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char) ;
 int FUNC_1 (char) ;
 int FUNC_2 (char) ;
 int FUNC_3 (char) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (struct cudbg_init*,struct cudbg_buffer*,int,struct cudbg_buffer*) ;
 int FUNC_5 (struct adapter*,int ,int,char*) ;
 int FUNC_6 (struct cudbg_init*,struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_7 (char*,int ,char*) ;
 int FUNC_8 (int ,int ,scalar_t__) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct adapter*,char*) ;
 int FUNC_11 (struct adapter*,struct vpd_params*) ;

int FUNC_12(struct cudbg_init *VAR_10,
      struct cudbg_buffer *VAR_11,
      struct cudbg_error *VAR_12)
{
 struct adapter *VAR_13 = VAR_10->adap;
 struct cudbg_buffer VAR_14 = { 0 };
 char VAR_15[VAR_4 + 1];
 u32 VAR_16, VAR_17, VAR_18;
 struct cudbg_vpd_data *VAR_19;
 struct vpd_params VAR_20 = { 0 };
 int VAR_21, VAR_22;

 VAR_21 = FUNC_11(VAR_13, &VAR_20);
 if (VAR_21)
  return VAR_21;

 VAR_21 = FUNC_10(VAR_13, &VAR_18);
 if (VAR_21)
  return VAR_21;




 VAR_21 = FUNC_9(VAR_13->pdev, VAR_5);
 if (VAR_21 < 0)
  return VAR_21;

 VAR_22 = FUNC_5(VAR_13, VAR_0, VAR_1,
     &VAR_16);


 VAR_21 = FUNC_9(VAR_13->pdev, VAR_2);
 if (VAR_21 < 0)
  return VAR_21;

 if (VAR_22)
  return VAR_22;

 VAR_21 = FUNC_5(VAR_13, VAR_3, VAR_4,
    VAR_15);
 if (VAR_21)
  return VAR_21;

 VAR_15[VAR_4] = '\0';
 VAR_21 = FUNC_7(VAR_15, 0, &VAR_17);
 if (VAR_21)
  return VAR_21;

 VAR_21 = FUNC_4(VAR_10, VAR_11, sizeof(struct cudbg_vpd_data),
       &VAR_14);
 if (VAR_21)
  return VAR_21;

 VAR_19 = (struct cudbg_vpd_data *)VAR_14.data;
 FUNC_8(VAR_19->sn, VAR_20.sn, VAR_9 + 1);
 FUNC_8(VAR_19->bn, VAR_20.pn, VAR_8 + 1);
 FUNC_8(VAR_19->na, VAR_20.na, VAR_7 + 1);
 FUNC_8(VAR_19->mn, VAR_20.id, VAR_6 + 1);
 VAR_19->scfg_vers = VAR_16;
 VAR_19->vpd_vers = VAR_17;
 VAR_19->fw_major = FUNC_1(VAR_18);
 VAR_19->fw_minor = FUNC_3(VAR_18);
 VAR_19->fw_micro = FUNC_2(VAR_18);
 VAR_19->fw_build = FUNC_0(VAR_18);
 return FUNC_6(VAR_10, &VAR_14, VAR_11);
}

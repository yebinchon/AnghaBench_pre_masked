
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct esas2r_request {int dummy; } ;
struct esas2r_adapter {scalar_t__ fw_version; scalar_t__ disc_start_time; int disable_cnt; int flags; int int_mask; scalar_t__* fw_rev; int * image_type; int * flash_rev; struct esas2r_request* first_ae_req; } ;


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
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct esas2r_adapter*) ;
 int FUNC_8 (struct esas2r_adapter*) ;
 int FUNC_9 (struct esas2r_adapter*) ;
 int FUNC_10 (struct esas2r_adapter*) ;
 int FUNC_11 (struct esas2r_adapter*) ;
 int FUNC_12 (struct esas2r_adapter*) ;
 int FUNC_13 (struct esas2r_adapter*) ;
 int FUNC_14 (char*,scalar_t__*) ;
 int FUNC_15 (struct esas2r_adapter*) ;
 scalar_t__ FUNC_16 (struct esas2r_adapter*) ;
 int FUNC_17 (int ,char*) ;
 int FUNC_18 (struct esas2r_adapter*) ;
 int FUNC_19 (struct esas2r_adapter*) ;
 int FUNC_20 (struct esas2r_adapter*) ;
 int FUNC_21 (struct esas2r_adapter*,char*) ;
 int FUNC_22 (struct esas2r_adapter*,struct esas2r_request*) ;
 int FUNC_23 (struct esas2r_adapter*) ;
 int FUNC_24 (struct esas2r_adapter*) ;
 int VAR_10 ;
 scalar_t__ FUNC_25 (int ) ;
 int FUNC_26 (int) ;
 scalar_t__ VAR_11 ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int ,int *) ;
 int FUNC_29 (scalar_t__*,char*,int,int) ;
 scalar_t__ FUNC_30 (int ,int *) ;

bool FUNC_31(struct esas2r_adapter *VAR_12, bool VAR_13)
{
 bool VAR_14 = 0;
 struct esas2r_request *VAR_15;
 u32 VAR_16;

 if (FUNC_30(VAR_2, &VAR_12->flags))
  goto exit;

 if (!FUNC_30(VAR_6, &VAR_12->flags)) {
  if (!FUNC_18(VAR_12))
   FUNC_17(VAR_9,
       "invalid/missing NVRAM parameters");
 }

 if (!FUNC_15(VAR_12)) {
  FUNC_21(VAR_12, "init messages failed");
  goto exit;
 }


 FUNC_6(VAR_2, &VAR_12->flags);
 FUNC_6(VAR_1, &VAR_12->flags);


 for (VAR_16 = 0, VAR_15 = VAR_12->first_ae_req; VAR_16 < VAR_11; VAR_16++, VAR_15++)
  FUNC_22(VAR_12, VAR_15);

 if (!VAR_12->flash_rev[0])
  FUNC_19(VAR_12);

 if (!VAR_12->image_type[0])
  FUNC_20(VAR_12);

 if (VAR_12->fw_version == 0)
  VAR_12->fw_rev[0] = 0;
 else
  FUNC_29(VAR_12->fw_rev, "%1d.%02d",
   (int)FUNC_2(FUNC_1(VAR_12->fw_version)),
   (int)FUNC_0(FUNC_1(VAR_12->fw_version)));

 FUNC_14("firmware revision: %s", VAR_12->fw_rev);

 if (FUNC_30(VAR_0, &VAR_12->flags)
     && (FUNC_30(VAR_5, &VAR_12->flags))) {
  FUNC_12(VAR_12);
  return 1;
 }


 FUNC_8(VAR_12);
 if (VAR_13) {
  u32 VAR_17 = VAR_12->disc_start_time;
  u32 VAR_18 = 100;
  u32 VAR_19;





  FUNC_28(VAR_7, &VAR_12->flags);
  FUNC_28(VAR_4, &VAR_12->flags);






  if (FUNC_30(VAR_5, &VAR_12->flags))
   FUNC_3(&VAR_12->disable_cnt);

  while (FUNC_30(VAR_3, &VAR_12->flags)) {
   FUNC_27(FUNC_26(100));
   VAR_19 = FUNC_25(VAR_10) - VAR_17;
   VAR_17 += VAR_19;







   if (!FUNC_30(VAR_1, &VAR_12->flags))
    FUNC_7(VAR_12);


   if (VAR_18 <= VAR_19) {


    VAR_18 += 100;
    FUNC_24(VAR_12);
   }

   if (VAR_18 > VAR_19)
    VAR_18 -= VAR_19;


   if (FUNC_16(VAR_12))
    FUNC_11(VAR_12);

  }

  if (FUNC_30(VAR_5, &VAR_12->flags))
   FUNC_5(&VAR_12->disable_cnt);

  FUNC_6(VAR_4, &VAR_12->flags);
  FUNC_6(VAR_7, &VAR_12->flags);
 }


 FUNC_23(VAR_12);
 FUNC_9(VAR_12);


 VAR_12->int_mask = VAR_8;
 FUNC_12(VAR_12);
 FUNC_13(VAR_12);
 VAR_14 = 1;

exit:





 if (FUNC_30(VAR_0, &VAR_12->flags) &&
     FUNC_30(VAR_5, &VAR_12->flags)) {





  if (!VAR_14)
   FUNC_6(VAR_1, &VAR_12->flags);
 } else {

  if (!VAR_14) {
   FUNC_6(VAR_1, &VAR_12->flags);
   FUNC_6(VAR_3, &VAR_12->flags);
  }



  if (FUNC_30(VAR_5, &VAR_12->flags)) {
   FUNC_6(VAR_5, &VAR_12->flags);

   if (FUNC_4(&VAR_12->disable_cnt) == 0)
    FUNC_10(VAR_12);
  }
 }

 return VAR_14;
}

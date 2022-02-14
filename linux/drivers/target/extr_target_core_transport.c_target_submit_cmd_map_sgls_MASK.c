
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct se_session {struct se_portal_group* se_tpg; } ;
struct se_portal_group {int se_tpg_tfo; } ;
struct se_cmd {int se_cmd_flags; int unknown_data_length; scalar_t__ data_direction; scalar_t__ t_prot_nents; struct scatterlist* t_prot_sg; int cpuid; scalar_t__ se_sess; scalar_t__ se_tfo; } ;
struct scatterlist {int offset; int length; } ;
typedef scalar_t__ sense_reason_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct se_cmd*) ;
 int FUNC_2 () ;
 unsigned char* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned char*,int ,int ) ;
 int FUNC_6 (struct scatterlist*) ;
 int FUNC_7 (struct se_cmd*,int) ;
 int FUNC_8 (struct se_cmd*) ;
 scalar_t__ FUNC_9 (struct se_cmd*,unsigned char*) ;
 scalar_t__ FUNC_10 (struct se_cmd*,struct scatterlist*,scalar_t__,struct scatterlist*,scalar_t__) ;
 int FUNC_11 (struct se_cmd*,scalar_t__) ;
 int FUNC_12 (struct se_cmd*) ;
 int FUNC_13 (struct se_cmd*,int ,struct se_session*,scalar_t__,int,int,unsigned char*) ;
 scalar_t__ FUNC_14 (struct se_cmd*,int ) ;
 int FUNC_15 (struct se_cmd*,scalar_t__,int ) ;

int FUNC_16(struct se_cmd *VAR_10, struct se_session *VAR_11,
  unsigned char *VAR_12, unsigned char *VAR_13, u64 VAR_14,
  u32 VAR_15, int VAR_16, int VAR_17, int VAR_18,
  struct scatterlist *VAR_19, u32 VAR_20,
  struct scatterlist *VAR_21, u32 VAR_22,
  struct scatterlist *VAR_23, u32 VAR_24)
{
 struct se_portal_group *VAR_25;
 sense_reason_t VAR_26;
 int VAR_27;

 VAR_25 = VAR_11->se_tpg;
 FUNC_0(!VAR_25);
 FUNC_0(VAR_10->se_tfo || VAR_10->se_sess);
 FUNC_0(FUNC_2());





 FUNC_13(VAR_10, VAR_25->se_tpg_tfo, VAR_11,
    VAR_15, VAR_17, VAR_16, VAR_13);

 if (VAR_18 & VAR_8)
  VAR_10->se_cmd_flags |= VAR_4;
 else
  VAR_10->cpuid = VAR_9;

 if (VAR_18 & VAR_7)
  VAR_10->unknown_data_length = 1;






 VAR_27 = FUNC_7(VAR_10, VAR_18 & VAR_5);
 if (VAR_27)
  return VAR_27;



 if (VAR_18 & VAR_6)
  VAR_10->se_cmd_flags |= VAR_1;



 VAR_26 = FUNC_14(VAR_10, VAR_14);
 if (VAR_26) {
  FUNC_15(VAR_10, VAR_26, 0);
  FUNC_8(VAR_10);
  return 0;
 }

 VAR_26 = FUNC_9(VAR_10, VAR_12);
 if (VAR_26 != 0) {
  FUNC_11(VAR_10, VAR_26);
  return 0;
 }





 if (VAR_24) {
  VAR_10->t_prot_sg = VAR_23;
  VAR_10->t_prot_nents = VAR_24;
  VAR_10->se_cmd_flags |= VAR_2;
 }






 if (VAR_20 != 0) {
  FUNC_0(!VAR_19);
  if (!(VAR_10->se_cmd_flags & VAR_3) &&
       VAR_10->data_direction == VAR_0) {
   unsigned char *VAR_28 = ((void*)0);

   if (VAR_19)
    VAR_28 = FUNC_3(FUNC_6(VAR_19)) + VAR_19->offset;

   if (VAR_28) {
    FUNC_5(VAR_28, 0, VAR_19->length);
    FUNC_4(FUNC_6(VAR_19));
   }
  }

  VAR_26 = FUNC_10(VAR_10, VAR_19, VAR_20,
    VAR_21, VAR_22);
  if (VAR_26 != 0) {
   FUNC_11(VAR_10, VAR_26);
   return 0;
  }
 }





 FUNC_1(VAR_10);

 FUNC_12(VAR_10);
 return 0;
}

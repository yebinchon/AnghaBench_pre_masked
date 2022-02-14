
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xcopy_op {unsigned short stdi; unsigned short dtdi; unsigned short src_dev; unsigned short dst_dev; int op_origin; int * dst_tid_wwn; int * local_dev_wwn; int * src_tid_wwn; } ;
struct se_cmd {unsigned short se_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned short FUNC_0 (unsigned char*) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,unsigned char*,int ) ;
 int FUNC_3 (char*,unsigned short) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int FUNC_5(struct se_cmd *VAR_4, struct xcopy_op *VAR_5,
    unsigned char *VAR_6, unsigned short VAR_7)
{
 unsigned char *VAR_8 = VAR_6;
 unsigned short VAR_9;
 u8 VAR_10;



 VAR_9 = FUNC_0(&VAR_8[2]);
 FUNC_3("XCOPY 0xe4: RELATIVE INITIATOR PORT IDENTIFIER: %hu\n", VAR_9);



 if ((VAR_8[4] & 0x0f) != 0x1) {
  FUNC_4("XCOPY 0xe4: code set of non binary type not supported\n");
  return -VAR_0;
 }
 if ((VAR_8[5] & 0x30) != 0x00) {
  FUNC_4("XCOPY 0xe4: association other than LUN not supported\n");
  return -VAR_0;
 }
 if ((VAR_8[5] & 0x0f) != 0x3) {
  FUNC_4("XCOPY 0xe4: designator type unsupported: 0x%02x\n",
    (VAR_8[5] & 0x0f));
  return -VAR_0;
 }




 VAR_10 = VAR_8[7];
 if (VAR_10 != 16) {
  FUNC_4("XCOPY 0xe4: invalid desig_len: %d\n", (int)VAR_10);
  return -VAR_0;
 }
 FUNC_3("XCOPY 0xe4: desig_len: %d\n", (int)VAR_10);



 if ((VAR_8[8] & 0xf0) != 0x60) {
  FUNC_4("XCOPY 0xe4: Unsupported DESIGNATOR TYPE: 0x%02x\n",
     (VAR_8[8] & 0xf0));
  return -VAR_0;
 }

 if (VAR_7 != VAR_5->stdi && VAR_7 != VAR_5->dtdi) {
  FUNC_3("XCOPY 0xe4: ignoring CSCD entry %d - neither src nor "
    "dest\n", VAR_7);
  return 0;
 }

 if (VAR_7 == VAR_5->stdi) {
  FUNC_2(&VAR_5->src_tid_wwn[0], &VAR_8[8], VAR_3);



  if (!FUNC_1(&VAR_5->local_dev_wwn[0], &VAR_5->src_tid_wwn[0],
    VAR_3)) {
   VAR_5->op_origin = VAR_2;
   VAR_5->src_dev = VAR_4->se_dev;
   FUNC_3("XCOPY 0xe4: Set xop->src_dev %p from source"
     " received xop\n", VAR_5->src_dev);
  }
 }

 if (VAR_7 == VAR_5->dtdi) {
  FUNC_2(&VAR_5->dst_tid_wwn[0], &VAR_8[8], VAR_3);






  if (!FUNC_1(&VAR_5->local_dev_wwn[0], &VAR_5->dst_tid_wwn[0],
    VAR_3)) {
   VAR_5->op_origin = VAR_1;
   VAR_5->dst_dev = VAR_4->se_dev;
   FUNC_3("XCOPY 0xe4: Set xop->dst_dev: %p from destination"
    " received xop\n", VAR_5->dst_dev);
  }
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xcopy_op {int op_origin; int * dst_tid_wwn; int dst_dev; int * src_tid_wwn; int src_dev; int dtdi; int stdi; int * local_dev_wwn; } ;
struct se_device {int dummy; } ;
struct se_cmd {struct se_device* se_dev; } ;
typedef int sense_reason_t ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 unsigned short VAR_7 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (char*,int ,int *) ;
 int FUNC_2 (char*,unsigned short,...) ;
 int FUNC_3 (struct se_device*,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct se_cmd*,struct xcopy_op*,unsigned char*,unsigned short) ;

__attribute__((used)) static int FUNC_6(struct se_cmd *VAR_8,
    struct xcopy_op *VAR_9, unsigned char *VAR_10,
    unsigned short VAR_11, sense_reason_t *VAR_12)
{
 struct se_device *VAR_13 = VAR_8->se_dev;
 unsigned char *VAR_14 = VAR_10;
 int VAR_15 = VAR_11 % VAR_7, VAR_16;
 unsigned short VAR_17 = 0;
 unsigned short VAR_18 = 0;

 *VAR_12 = VAR_3;

 if (VAR_15 != 0) {
  FUNC_2("XCOPY target descriptor list length is not"
   " multiple of %d\n", VAR_7);
  *VAR_12 = VAR_5;
  return -VAR_0;
 }
 if (VAR_11 > VAR_1 * VAR_7) {
  FUNC_2("XCOPY target descriptor supports a maximum"
   " two src/dest descriptors, tdll: %hu too large..\n", VAR_11);

  *VAR_12 = VAR_4;
  return -VAR_0;
 }




 FUNC_0(&VAR_9->local_dev_wwn[0], 0, VAR_6);
 FUNC_3(VAR_13, &VAR_9->local_dev_wwn[0]);

 while (VAR_18 < VAR_11) {





  switch (VAR_14[0]) {
  case 0xe4:
   VAR_16 = FUNC_5(VAR_8, VAR_9,
       &VAR_14[0], VAR_17);
   if (VAR_16 != 0)
    goto out;
   VAR_18 += VAR_7;
   VAR_14 += VAR_7;
   VAR_17++;
   break;
  default:
   FUNC_2("XCOPY unsupported descriptor type code:"
     " 0x%02x\n", VAR_14[0]);
   *VAR_12 = VAR_5;
   goto out;
  }
 }

 switch (VAR_9->op_origin) {
 case 128:
  VAR_16 = FUNC_4(VAR_9->dst_tid_wwn,
      &VAR_9->dst_dev);
  break;
 case 129:
  VAR_16 = FUNC_4(VAR_9->src_tid_wwn,
      &VAR_9->src_dev);
  break;
 default:
  FUNC_2("XCOPY CSCD descriptor IDs not found in CSCD list - "
   "stdi: %hu dtdi: %hu\n", VAR_9->stdi, VAR_9->dtdi);
  VAR_16 = -VAR_0;
  break;
 }






 if (VAR_16 < 0) {
  *VAR_12 = VAR_2;
  goto out;
 }

 FUNC_1("XCOPY TGT desc: Source dev: %p NAA IEEE WWN: 0x%16phN\n",
   VAR_9->src_dev, &VAR_9->src_tid_wwn[0]);
 FUNC_1("XCOPY TGT desc: Dest dev: %p NAA IEEE WWN: 0x%16phN\n",
   VAR_9->dst_dev, &VAR_9->dst_tid_wwn[0]);

 return VAR_17;

out:
 return -VAR_0;
}

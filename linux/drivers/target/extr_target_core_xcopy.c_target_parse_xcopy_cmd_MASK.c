
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xcopy_op {TYPE_4__* dst_dev; TYPE_2__* src_dev; struct se_cmd* xop_se_cmd; } ;
struct se_cmd {scalar_t__ data_length; } ;
typedef int sense_reason_t ;
struct TYPE_7__ {scalar_t__ block_size; } ;
struct TYPE_8__ {TYPE_3__ dev_attrib; } ;
struct TYPE_5__ {scalar_t__ block_size; } ;
struct TYPE_6__ {TYPE_1__ dev_attrib; } ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned short FUNC_0 (unsigned char*) ;
 unsigned int FUNC_1 (unsigned char*) ;
 int FUNC_2 (char*,int,int,...) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct se_cmd*,struct xcopy_op*,unsigned char*,unsigned int,int *) ;
 int FUNC_5 (struct se_cmd*,struct xcopy_op*,unsigned char*,unsigned short,int *) ;
 unsigned char* FUNC_6 (struct se_cmd*) ;
 int FUNC_7 (struct se_cmd*) ;
 int FUNC_8 (struct xcopy_op*) ;

__attribute__((used)) static sense_reason_t FUNC_9(struct xcopy_op *VAR_9)
{
 struct se_cmd *VAR_10 = VAR_9->xop_se_cmd;
 unsigned char *VAR_11 = ((void*)0), *VAR_12;
 unsigned int VAR_13, VAR_14, VAR_15, VAR_16;
 sense_reason_t VAR_17 = VAR_1;
 int VAR_18;
 unsigned short VAR_19;

 VAR_11 = FUNC_6(VAR_10);
 if (!VAR_11) {
  FUNC_3("transport_kmap_data_sg() failed in target_do_xcopy\n");
  return VAR_4;
 }

 VAR_13 = VAR_11[0];
 VAR_14 = (VAR_11[1] & 0x18) >> 3;




 VAR_19 = FUNC_0(&VAR_11[2]);
 VAR_15 = FUNC_1(&VAR_11[8]);
 if (VAR_19 + VAR_15 > VAR_0) {
  FUNC_3("XCOPY descriptor list length %u exceeds maximum %u\n",
         VAR_19 + VAR_15, VAR_0);
  VAR_17 = VAR_5;
  goto out;
 }

 VAR_16 = FUNC_1(&VAR_11[12]);
 if (VAR_16 != 0) {
  FUNC_3("XCOPY with non zero inline data length\n");
  goto out;
 }

 if (VAR_10->data_length < (VAR_6 + VAR_19 + VAR_15 + VAR_16)) {
  FUNC_3("XCOPY parameter truncation: data length %u too small "
   "for tdll: %hu sdll: %u inline_dl: %u\n",
   VAR_10->data_length, VAR_19, VAR_15, VAR_16);
  VAR_17 = VAR_5;
  goto out;
 }

 FUNC_2("Processing XCOPY with list_id: 0x%02x list_id_usage: 0x%02x"
  " tdll: %hu sdll: %u inline_dl: %u\n", VAR_13, VAR_14,
  VAR_19, VAR_15, VAR_16);





 VAR_12 = &VAR_11[16] + VAR_19;

 VAR_18 = FUNC_4(VAR_10, VAR_9, VAR_12,
          VAR_15, &VAR_17);
 if (VAR_18 <= 0)
  goto out;

 FUNC_2("XCOPY: Processed %d segment descriptors, length: %u\n", VAR_18,
    VAR_18 * VAR_7);

 VAR_18 = FUNC_5(VAR_10, VAR_9, &VAR_11[16], VAR_19, &VAR_17);
 if (VAR_18 <= 0)
  goto out;

 if (VAR_9->src_dev->dev_attrib.block_size !=
     VAR_9->dst_dev->dev_attrib.block_size) {
  FUNC_3("XCOPY: Non matching src_dev block_size: %u + dst_dev"
         " block_size: %u currently unsupported\n",
   VAR_9->src_dev->dev_attrib.block_size,
   VAR_9->dst_dev->dev_attrib.block_size);
  FUNC_8(VAR_9);
  VAR_17 = VAR_2;
  goto out;
 }

 FUNC_2("XCOPY: Processed %d target descriptors, length: %u\n", VAR_18,
    VAR_18 * VAR_8);
 FUNC_7(VAR_10);
 return VAR_3;

out:
 if (VAR_11)
  FUNC_7(VAR_10);
 return VAR_17;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int block_size; } ;
struct se_device {TYPE_1__ dev_attrib; } ;
struct se_cmd {int t_data_nents; struct iblock_req* priv; struct se_device* se_dev; struct scatterlist* t_data_sg; scalar_t__ prot_op; int t_task_lba; } ;
struct scatterlist {int length; int offset; } ;
struct iblock_req {int pending; } ;
struct block_device {int dummy; } ;
struct bio_list {int dummy; } ;
struct bio {int dummy; } ;
typedef int sense_reason_t ;
typedef int sector_t ;
struct TYPE_4__ {struct block_device* ibd_bd; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct se_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct block_device*) ;
 int FUNC_2 (struct bio*,int ,int,int ) ;
 int FUNC_3 (struct bio_list*,struct bio*) ;
 int FUNC_4 (struct bio_list*) ;
 struct bio* FUNC_5 (struct bio_list*) ;
 int FUNC_6 (struct bio*) ;
 int FUNC_7 (struct block_device*,struct se_cmd*) ;
 struct bio* FUNC_8 (struct se_cmd*,int,int,int ,int ) ;
 int FUNC_9 (struct bio_list*) ;
 int FUNC_10 (struct iblock_req*) ;
 struct iblock_req* FUNC_11 (int,int ) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (struct se_cmd*) ;
 int FUNC_16 (struct scatterlist*) ;
 int FUNC_17 (struct se_device*,int ) ;

__attribute__((used)) static sense_reason_t
FUNC_18(struct se_cmd *VAR_5)
{
 struct block_device *VAR_6 = FUNC_0(VAR_5->se_dev)->ibd_bd;
 struct iblock_req *VAR_7;
 struct scatterlist *VAR_8;
 struct bio *VAR_9;
 struct bio_list VAR_10;
 struct se_device *VAR_11 = VAR_5->se_dev;
 sector_t VAR_12 = FUNC_17(VAR_11, VAR_5->t_task_lba);
 sector_t VAR_13 = FUNC_17(VAR_11,
     FUNC_15(VAR_5));

 if (VAR_5->prot_op) {
  FUNC_12("WRITE_SAME: Protection information with IBLOCK"
         " backends not supported\n");
  return VAR_4;
 }
 VAR_8 = &VAR_5->t_data_sg[0];

 if (VAR_5->t_data_nents > 1 ||
     VAR_8->length != VAR_5->se_dev->dev_attrib.block_size) {
  FUNC_12("WRITE_SAME: Illegal SGL t_data_nents: %u length: %u"
   " block_size: %u\n", VAR_5->t_data_nents, VAR_8->length,
   VAR_5->se_dev->dev_attrib.block_size);
  return VAR_3;
 }

 if (FUNC_1(VAR_6)) {
  if (!FUNC_7(VAR_6, VAR_5))
   return 0;
 }

 VAR_7 = FUNC_11(sizeof(struct iblock_req), VAR_0);
 if (!VAR_7)
  goto fail;
 VAR_5->priv = VAR_7;

 VAR_9 = FUNC_8(VAR_5, VAR_12, 1, VAR_1, 0);
 if (!VAR_9)
  goto fail_free_ibr;

 FUNC_4(&VAR_10);
 FUNC_3(&VAR_10, VAR_9);

 FUNC_14(&VAR_7->pending, 1);

 while (VAR_13) {
  while (FUNC_2(VAR_9, FUNC_16(VAR_8), VAR_8->length, VAR_8->offset)
    != VAR_8->length) {

   VAR_9 = FUNC_8(VAR_5, VAR_12, 1, VAR_1,
          0);
   if (!VAR_9)
    goto fail_put_bios;

   FUNC_13(&VAR_7->pending);
   FUNC_3(&VAR_10, VAR_9);
  }


  VAR_12 += VAR_8->length >> VAR_2;
  VAR_13 -= VAR_8->length >> VAR_2;
 }

 FUNC_9(&VAR_10);
 return 0;

fail_put_bios:
 while ((VAR_9 = FUNC_5(&VAR_10)))
  FUNC_6(VAR_9);
fail_free_ibr:
 FUNC_10(VAR_7);
fail:
 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int block_size; int optimal_sectors; int max_unmap_lba_count; int max_unmap_block_desc_count; int unmap_granularity; int unmap_granularity_alignment; int max_write_same_len; int hw_max_sectors; scalar_t__ emulate_caw; scalar_t__ emulate_tpws; scalar_t__ emulate_tpu; } ;
struct se_device {TYPE_3__ dev_attrib; TYPE_2__* transport; } ;
struct se_cmd {TYPE_1__* se_tfo; struct se_device* se_dev; } ;
typedef int sense_reason_t ;
struct TYPE_5__ {unsigned char (* get_device_type ) (struct se_device*) ;int (* get_io_min ) (struct se_device*) ;int (* get_io_opt ) (struct se_device*) ;} ;
struct TYPE_4__ {int max_data_sg_nents; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,unsigned char*) ;
 int FUNC_2 (int,unsigned char*) ;
 int FUNC_3 (int ,unsigned char*) ;
 unsigned char FUNC_4 (struct se_device*) ;
 int FUNC_5 (struct se_device*) ;
 int FUNC_6 (struct se_device*) ;

__attribute__((used)) static sense_reason_t
FUNC_7(struct se_cmd *VAR_1, unsigned char *VAR_2)
{
 struct se_device *VAR_3 = VAR_1->se_dev;
 u32 VAR_4 = 0;
 int VAR_5 = 0, VAR_6, VAR_7;






 if (VAR_3->dev_attrib.emulate_tpu || VAR_3->dev_attrib.emulate_tpws)
  VAR_5 = 1;

 VAR_2[0] = VAR_3->transport->get_device_type(VAR_3);
 VAR_2[3] = VAR_5 ? 0x3c : 0x10;


 VAR_2[4] = 0x01;



 if (VAR_3->dev_attrib.emulate_caw)
  VAR_2[5] = 0x01;




 if (VAR_3->transport->get_io_min && (VAR_7 = VAR_3->transport->get_io_min(VAR_3)))
  FUNC_1(VAR_7 / VAR_3->dev_attrib.block_size, &VAR_2[6]);
 else
  FUNC_1(1, &VAR_2[6]);







 if (VAR_1->se_tfo->max_data_sg_nents) {
  VAR_4 = (VAR_1->se_tfo->max_data_sg_nents * VAR_0) /
         VAR_3->dev_attrib.block_size;
 }
 FUNC_2(FUNC_0(VAR_4, VAR_3->dev_attrib.hw_max_sectors), &VAR_2[8]);




 if (VAR_3->transport->get_io_opt && (VAR_6 = VAR_3->transport->get_io_opt(VAR_3)))
  FUNC_2(VAR_6 / VAR_3->dev_attrib.block_size, &VAR_2[12]);
 else
  FUNC_2(VAR_3->dev_attrib.optimal_sectors, &VAR_2[12]);




 if (!VAR_5)
  goto max_write_same;




 FUNC_2(VAR_3->dev_attrib.max_unmap_lba_count, &VAR_2[20]);




 FUNC_2(VAR_3->dev_attrib.max_unmap_block_desc_count,
      &VAR_2[24]);




 FUNC_2(VAR_3->dev_attrib.unmap_granularity, &VAR_2[28]);




 FUNC_2(VAR_3->dev_attrib.unmap_granularity_alignment,
      &VAR_2[32]);
 if (VAR_3->dev_attrib.unmap_granularity_alignment != 0)
  VAR_2[32] |= 0x80;




max_write_same:
 FUNC_3(VAR_3->dev_attrib.max_write_same_len, &VAR_2[36]);

 return 0;
}

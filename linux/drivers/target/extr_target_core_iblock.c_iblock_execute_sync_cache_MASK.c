
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {int* t_task_cdb; int se_dev; } ;
struct iblock_dev {int ibd_bd; } ;
struct bio {int bi_opf; struct se_cmd* bi_private; int bi_end_io; } ;
typedef int sense_reason_t ;


 int VAR_0 ;
 struct iblock_dev* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bio* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct bio*,int ) ;
 int VAR_4 ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (struct se_cmd*,int ) ;

__attribute__((used)) static sense_reason_t
FUNC_5(struct se_cmd *VAR_5)
{
 struct iblock_dev *VAR_6 = FUNC_0(VAR_5->se_dev);
 int VAR_7 = (VAR_5->t_task_cdb[1] & 0x2);
 struct bio *VAR_8;





 if (VAR_7)
  FUNC_4(VAR_5, VAR_3);

 VAR_8 = FUNC_1(VAR_0, 0);
 VAR_8->bi_end_io = VAR_4;
 FUNC_2(VAR_8, VAR_6->ibd_bd);
 VAR_8->bi_opf = VAR_1 | VAR_2;
 if (!VAR_7)
  VAR_8->bi_private = VAR_5;
 FUNC_3(VAR_8);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_device {int dummy; } ;
struct se_cmd {struct se_device* se_dev; } ;
struct block_device {int dummy; } ;
typedef int sense_reason_t ;
typedef int sector_t ;
struct TYPE_2__ {struct block_device* ibd_bd; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct se_device*) ;
 int VAR_1 ;
 int FUNC_1 (struct block_device*,int ,int ,int ,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct se_device*,int ) ;

__attribute__((used)) static sense_reason_t
FUNC_4(struct se_cmd *VAR_2, sector_t VAR_3, sector_t VAR_4)
{
 struct block_device *VAR_5 = FUNC_0(VAR_2->se_dev)->ibd_bd;
 struct se_device *VAR_6 = VAR_2->se_dev;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_5,
       FUNC_3(VAR_6, VAR_3),
       FUNC_3(VAR_6, VAR_4),
       VAR_0, 0);
 if (VAR_7 < 0) {
  FUNC_2("blkdev_issue_discard() failed: %d\n", VAR_7);
  return VAR_1;
 }

 return 0;
}

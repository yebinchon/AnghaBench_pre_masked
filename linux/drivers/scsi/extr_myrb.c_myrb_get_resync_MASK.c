
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {scalar_t__ channel; scalar_t__ id; int host; } ;
struct myrb_rbld_progress {scalar_t__ ldev_num; unsigned int ldev_size; unsigned int blocks_left; } ;
struct myrb_hba {int dummy; } ;
struct device {int dummy; } ;


 unsigned short VAR_0 ;
 unsigned short FUNC_0 (struct myrb_hba*,struct myrb_rbld_progress*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,struct device*,unsigned int) ;
 struct myrb_hba* FUNC_3 (int ) ;
 struct scsi_device* FUNC_4 (struct device*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_2)
{
 struct scsi_device *VAR_3 = FUNC_4(VAR_2);
 struct myrb_hba *VAR_4 = FUNC_3(VAR_3->host);
 struct myrb_rbld_progress VAR_5;
 unsigned int VAR_6 = 0;
 unsigned short VAR_7;
 unsigned int VAR_8 = 0, VAR_9 = 0;

 if (VAR_3->channel < FUNC_1(VAR_3->host))
  return;
 VAR_7 = FUNC_0(VAR_4, &VAR_5);
 if (VAR_7 == VAR_0) {
  if (VAR_5.ldev_num == VAR_3->id) {
   VAR_8 = VAR_5.ldev_size;
   VAR_9 = VAR_5.blocks_left;
  }
 }
 if (VAR_9 && VAR_8)
  VAR_6 = (VAR_8 - VAR_9) * 100 / VAR_8;
 FUNC_2(VAR_1, VAR_2, VAR_6);
}

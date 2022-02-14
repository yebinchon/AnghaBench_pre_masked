
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_scsi_dev {int dummy; } ;
struct pqi_ctrl_info {int dummy; } ;
struct completion {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pqi_ctrl_info*) ;
 scalar_t__ FUNC_1 (struct pqi_ctrl_info*) ;
 scalar_t__ FUNC_2 (struct completion*,int) ;

__attribute__((used)) static int FUNC_3(struct pqi_ctrl_info *VAR_3,
 struct pqi_scsi_dev *VAR_4, struct completion *VAR_5)
{
 int VAR_6;

 while (1) {
  if (FUNC_2(VAR_5,
   VAR_2 * VAR_1)) {
   VAR_6 = 0;
   break;
  }

  FUNC_0(VAR_3);
  if (FUNC_1(VAR_3)) {
   VAR_6 = -VAR_0;
   break;
  }
 }

 return VAR_6;
}

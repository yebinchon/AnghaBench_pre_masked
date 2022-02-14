
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_scsi_dev {int dummy; } ;
struct pqi_ctrl_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pqi_ctrl_info*,struct pqi_scsi_dev*,unsigned long) ;
 int FUNC_2 (struct pqi_ctrl_info*,struct pqi_scsi_dev*) ;

__attribute__((used)) static int FUNC_3(struct pqi_ctrl_info *VAR_7,
 struct pqi_scsi_dev *VAR_8)
{
 int VAR_9;
 unsigned int VAR_10;
 unsigned long VAR_11;

 for (VAR_10 = 0;;) {
  VAR_9 = FUNC_2(VAR_7, VAR_8);
  if (VAR_9 != -VAR_0 || ++VAR_10 > VAR_4)
   break;
  FUNC_0(VAR_5);
 }

 VAR_11 = VAR_9 ? VAR_3 : VAR_2;

 VAR_9 |= FUNC_1(VAR_7, VAR_8, VAR_11);

 return VAR_9 == 0 ? VAR_6 : VAR_1;
}

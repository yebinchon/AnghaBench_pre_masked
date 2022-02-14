
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pqi_scsi_dev {scalar_t__ raid_level; int scsi3addr; } ;
struct pqi_ctrl_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__* FUNC_1 (int,int ) ;
 int FUNC_2 (struct pqi_ctrl_info*,int ,int,scalar_t__*,int) ;

__attribute__((used)) static void FUNC_3(struct pqi_ctrl_info *VAR_5,
 struct pqi_scsi_dev *VAR_6)
{
 int VAR_7;
 u8 VAR_8;
 u8 *VAR_9;

 VAR_8 = VAR_3;

 VAR_9 = FUNC_1(64, VAR_1);
 if (VAR_9) {
  VAR_7 = FUNC_2(VAR_5, VAR_6->scsi3addr,
   VAR_4 | VAR_0, VAR_9, 64);
  if (VAR_7 == 0) {
   VAR_8 = VAR_9[8];
   if (VAR_8 > VAR_2)
    VAR_8 = VAR_3;
  }
  FUNC_0(VAR_9);
 }

 VAR_6->raid_level = VAR_8;
}

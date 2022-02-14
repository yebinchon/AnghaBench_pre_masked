
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_ctrl_info {char* serial_number; } ;
struct bmic_sense_subsystem_info {int ctrl_serial_number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bmic_sense_subsystem_info*) ;
 struct bmic_sense_subsystem_info* FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (struct pqi_ctrl_info*,struct bmic_sense_subsystem_info*) ;

__attribute__((used)) static int FUNC_4(struct pqi_ctrl_info *VAR_2)
{
 int VAR_3;
 struct bmic_sense_subsystem_info *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_3 = FUNC_3(VAR_2, VAR_4);
 if (VAR_3)
  goto out;

 FUNC_2(VAR_2->serial_number, VAR_4->ctrl_serial_number,
  sizeof(VAR_4->ctrl_serial_number));
 VAR_2->serial_number[sizeof(VAR_4->ctrl_serial_number)] = '\0';

out:
 FUNC_0(VAR_4);

 return VAR_3;
}

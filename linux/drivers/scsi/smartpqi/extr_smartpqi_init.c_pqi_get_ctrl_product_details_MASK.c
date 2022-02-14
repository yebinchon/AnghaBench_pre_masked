
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_ctrl_info {char* firmware_version; char* model; char* vendor; } ;
struct bmic_identify_controller {int vendor_id; int product_id; int firmware_build_number; int firmware_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct bmic_identify_controller*) ;
 struct bmic_identify_controller* FUNC_2 (int,int ) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (struct pqi_ctrl_info*,struct bmic_identify_controller*) ;
 int FUNC_5 (char*,int,char*,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct pqi_ctrl_info *VAR_2)
{
 int VAR_3;
 struct bmic_identify_controller *VAR_4;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_3 = FUNC_4(VAR_2, VAR_4);
 if (VAR_3)
  goto out;

 FUNC_3(VAR_2->firmware_version, VAR_4->firmware_version,
  sizeof(VAR_4->firmware_version));
 VAR_2->firmware_version[sizeof(VAR_4->firmware_version)] = '\0';
 FUNC_5(VAR_2->firmware_version +
  FUNC_6(VAR_2->firmware_version),
  sizeof(VAR_2->firmware_version),
  "-%u", FUNC_0(&VAR_4->firmware_build_number));

 FUNC_3(VAR_2->model, VAR_4->product_id,
  sizeof(VAR_4->product_id));
 VAR_2->model[sizeof(VAR_4->product_id)] = '\0';

 FUNC_3(VAR_2->vendor, VAR_4->vendor_id,
  sizeof(VAR_4->vendor_id));
 VAR_2->vendor[sizeof(VAR_4->vendor_id)] = '\0';

out:
 FUNC_1(VAR_4);

 return VAR_3;
}

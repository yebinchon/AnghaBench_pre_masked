
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ctlr_info {int dummy; } ;
struct bmic_identify_physical_device {int more_flags; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct ctlr_info*,int *,int ,struct bmic_identify_physical_device*,int) ;
 int FUNC_2 (struct bmic_identify_physical_device*) ;
 struct bmic_identify_physical_device* FUNC_3 (int,int ) ;

__attribute__((used)) static bool FUNC_4(struct ctlr_info *VAR_1, u8 *VAR_2)
{
 struct bmic_identify_physical_device *VAR_3;
 bool VAR_4 = 0;
 int VAR_5;

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return 0;

 VAR_5 = FUNC_1(VAR_1,
     VAR_2,
     FUNC_0(VAR_2),
     VAR_3, sizeof(*VAR_3));
 if (VAR_5 == 0)
  VAR_4 = (VAR_3->more_flags >> 6) & 0x01;

 FUNC_2(VAR_3);
 return VAR_4;
}

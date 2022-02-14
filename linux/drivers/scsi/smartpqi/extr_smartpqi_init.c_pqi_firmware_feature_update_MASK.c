
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_firmware_feature {int (* feature_status ) (struct pqi_ctrl_info*,struct pqi_firmware_feature*) ;} ;
struct pqi_ctrl_info {int dummy; } ;


 int FUNC_0 (struct pqi_ctrl_info*,struct pqi_firmware_feature*) ;

__attribute__((used)) static inline void FUNC_1(struct pqi_ctrl_info *VAR_0,
 struct pqi_firmware_feature *VAR_1)
{
 if (VAR_1->feature_status)
  VAR_1->feature_status(VAR_0, VAR_1);
}

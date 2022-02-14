
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_ctrl_info {int dummy; } ;
struct bmic_identify_controller {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pqi_ctrl_info*,int ,struct bmic_identify_controller*,int) ;

__attribute__((used)) static inline int FUNC_1(struct pqi_ctrl_info *VAR_1,
  struct bmic_identify_controller *VAR_2)
{
 return FUNC_0(VAR_1, VAR_0,
   VAR_2, sizeof(*VAR_2));
}

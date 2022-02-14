
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_fw {struct fw_img const* img; } ;
struct fw_img {int dummy; } ;
typedef enum iwl_ucode_type { ____Placeholder_iwl_ucode_type } iwl_ucode_type ;


 int VAR_0 ;

__attribute__((used)) static inline const struct fw_img *
FUNC_0(const struct iwl_fw *VAR_1, enum iwl_ucode_type VAR_2)
{
 if (VAR_2 >= VAR_0)
  return ((void*)0);

 return &VAR_1->img[VAR_2];
}

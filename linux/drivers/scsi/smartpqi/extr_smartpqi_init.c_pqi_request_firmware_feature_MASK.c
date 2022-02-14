
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_config_table_firmware_features {int* features_supported; int num_elements; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(
 struct pqi_config_table_firmware_features *VAR_1,
 unsigned int VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = (VAR_2 / VAR_0) +
  FUNC_0(VAR_1->num_elements);

 VAR_1->features_supported[VAR_3] |=
  (1 << (VAR_2 % VAR_0));
}

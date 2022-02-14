
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct qla_hw_data {struct nvram_81xx* nvram; } ;
struct nvram_81xx {int enhanced_features; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline uint16_t FUNC_4(struct qla_hw_data *VAR_1)
{
 uint16_t VAR_2 = VAR_0;

 if (FUNC_2(VAR_1) || FUNC_0(VAR_1) || FUNC_1(VAR_1)) {
  struct nvram_81xx *VAR_3 = VAR_1->nvram;

  VAR_2 |= FUNC_3(VAR_3->enhanced_features);
 }

 return VAR_2;
}

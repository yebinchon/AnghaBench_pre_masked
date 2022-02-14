
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qtnf_bus {int fw_state; } ;
typedef enum qtnf_fw_state { ____Placeholder_qtnf_fw_state } qtnf_fw_state ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct qtnf_bus *VAR_2)
{
 enum qtnf_fw_state VAR_3 = VAR_2->fw_state;

 return ((VAR_3 == VAR_0) ||
  (VAR_3 == VAR_1));
}

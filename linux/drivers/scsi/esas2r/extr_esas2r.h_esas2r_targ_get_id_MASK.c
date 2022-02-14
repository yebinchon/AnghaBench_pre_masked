
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct esas2r_target {int dummy; } ;
struct esas2r_adapter {struct esas2r_target* targetdb; } ;



__attribute__((used)) static inline u16 FUNC_0(struct esas2r_target *VAR_0,
         struct esas2r_adapter *VAR_1)
{
 return (u16)(uintptr_t)(VAR_0 - VAR_1->targetdb);
}

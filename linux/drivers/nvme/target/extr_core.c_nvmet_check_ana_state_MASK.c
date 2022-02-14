
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nvmet_port {int* ana_state; } ;
struct nvmet_ns {size_t anagrpid; } ;
typedef enum nvme_ana_state { ____Placeholder_nvme_ana_state } nvme_ana_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline u16 FUNC_1(struct nvmet_port *VAR_6,
  struct nvmet_ns *VAR_7)
{
 enum nvme_ana_state VAR_8 = VAR_6->ana_state[VAR_7->anagrpid];

 if (FUNC_0(VAR_8 == VAR_1))
  return VAR_3;
 if (FUNC_0(VAR_8 == VAR_2))
  return VAR_4;
 if (FUNC_0(VAR_8 == VAR_0))
  return VAR_5;
 return 0;
}

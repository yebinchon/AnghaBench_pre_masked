
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input {scalar_t__ resp_addr; } ;
struct bnxt {int fw_cap; int hwrm_cmd_kong_resp_dma_addr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct bnxt *VAR_1, struct input *VAR_2)
{
 return (VAR_1->fw_cap & VAR_0 &&
  VAR_2->resp_addr == FUNC_0(VAR_1->hwrm_cmd_kong_resp_dma_addr));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct nfp_net_fw_version {scalar_t__ resv; scalar_t__ class; scalar_t__ major; scalar_t__ minor; } ;



__attribute__((used)) static inline bool FUNC_0(struct nfp_net_fw_version *VAR_0,
         u8 VAR_1, u8 VAR_2, u8 VAR_3, u8 VAR_4)
{
 return VAR_0->resv == VAR_1 &&
        VAR_0->class == VAR_2 &&
        VAR_0->major == VAR_3 &&
        VAR_0->minor == VAR_4;
}

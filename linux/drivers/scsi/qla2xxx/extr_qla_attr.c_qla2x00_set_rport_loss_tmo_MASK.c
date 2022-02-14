
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fc_rport {int dev_loss_tmo; } ;



__attribute__((used)) static inline void
FUNC_0(struct fc_rport *VAR_0, uint32_t VAR_1)
{
 VAR_0->dev_loss_tmo = VAR_1 ? VAR_1 : 1;
}

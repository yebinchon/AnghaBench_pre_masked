
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_fcoe_ddp {int err; unsigned long udp; scalar_t__ sgc; int * sgl; int * udl; scalar_t__ len; } ;



__attribute__((used)) static inline void FUNC_0(struct ixgbe_fcoe_ddp *VAR_0)
{
 VAR_0->len = 0;
 VAR_0->err = 1;
 VAR_0->udl = ((void*)0);
 VAR_0->udp = 0UL;
 VAR_0->sgl = ((void*)0);
 VAR_0->sgc = 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zd_addr_t ;
typedef scalar_t__ u16 ;
struct zd_chip {scalar_t__ fw_regs_base; } ;



__attribute__((used)) static zd_addr_t FUNC_0(struct zd_chip *VAR_0, u16 VAR_1)
{
 return (zd_addr_t)((u16)VAR_0->fw_regs_base + VAR_1);
}

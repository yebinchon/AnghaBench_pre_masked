
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct alcor_pci_priv {scalar_t__ iobase; } ;


 int FUNC_0 (scalar_t__) ;

u32 FUNC_1(struct alcor_pci_priv *VAR_0, unsigned int VAR_1)
{
 return FUNC_0(VAR_0->iobase + VAR_1);
}

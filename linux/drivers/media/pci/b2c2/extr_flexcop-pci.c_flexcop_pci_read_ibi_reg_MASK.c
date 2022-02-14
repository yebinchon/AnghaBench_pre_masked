
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct flexcop_pci {scalar_t__ io_mem; } ;
struct flexcop_device {struct flexcop_pci* bus_specific; } ;
struct TYPE_3__ {scalar_t__ raw; } ;
typedef TYPE_1__ flexcop_ibi_value ;
typedef scalar_t__ flexcop_ibi_register ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static flexcop_ibi_value FUNC_2(struct flexcop_device *VAR_2,
  flexcop_ibi_register VAR_3)
{
 struct flexcop_pci *VAR_4 = VAR_2->bus_specific;
 flexcop_ibi_value VAR_5;
 VAR_5.raw = FUNC_1(VAR_4->io_mem + VAR_3);

 if (VAR_0 != VAR_3 || VAR_1 != VAR_5.raw) {
  VAR_0 = VAR_3; VAR_1 = VAR_5.raw;
  FUNC_0("new rd: %3x: %08x\n", VAR_3, VAR_5.raw);
 }

 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {scalar_t__* pcie_bar; scalar_t__ rmmio; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct hl_device*,char const* const*,int*) ;

__attribute__((used)) static int FUNC_1(struct hl_device *VAR_3)
{
 static const char * const VAR_4[] = {"SRAM_CFG", "MSIX", "DDR"};
 bool VAR_5[3] = {0, 0, 1};
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_3->rmmio = VAR_3->pcie_bar[VAR_2] +
   (VAR_0 - VAR_1);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mvebu_pcie_port {TYPE_2__* pcie; } ;
typedef size_t phys_addr_t ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,char*,size_t*,size_t*,int) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (unsigned int,unsigned int,size_t,size_t,size_t) ;
 int FUNC_3 (struct mvebu_pcie_port*,size_t,size_t) ;

__attribute__((used)) static void FUNC_4(struct mvebu_pcie_port *VAR_1,
       unsigned int VAR_2, unsigned int VAR_3,
       phys_addr_t VAR_4, size_t VAR_5,
       phys_addr_t VAR_6)
{
 size_t VAR_7 = 0;

 while (VAR_5) {
  size_t VAR_8 = 1 << (FUNC_1(VAR_5) - 1);
  int VAR_9;

  VAR_9 = FUNC_2(VAR_2, VAR_3, VAR_4,
       VAR_8, VAR_6);
  if (VAR_9) {
   phys_addr_t VAR_10 = VAR_4 + VAR_8 - 1;

   FUNC_0(&VAR_1->pcie->pdev->dev,
    "Could not create MBus window at [mem %pa-%pa]: %d\n",
    &VAR_4, &VAR_10, VAR_9);
   FUNC_3(VAR_1, VAR_4 - VAR_7,
            VAR_7);
   return;
  }

  VAR_5 -= VAR_8;
  VAR_7 += VAR_8;
  VAR_4 += VAR_8;
  if (VAR_6 != VAR_0)
   VAR_6 += VAR_8;
 }
}

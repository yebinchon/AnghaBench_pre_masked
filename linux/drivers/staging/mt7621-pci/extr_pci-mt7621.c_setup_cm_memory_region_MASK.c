
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int end; int start; } ;
struct mt7621_pcie {struct device* dev; struct resource mem; } ;
struct device {int dummy; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,unsigned long long,unsigned long long) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct mt7621_pcie *VAR_1)
{
 struct resource *VAR_2 = &VAR_1->mem;
 struct device *VAR_3 = VAR_1->dev;
 resource_size_t VAR_4;

 if (FUNC_1(0)) {





  VAR_4 = ~(VAR_2->end - VAR_2->start);

  FUNC_4(VAR_2->start);
  FUNC_5(VAR_4 | VAR_0);
  FUNC_0(VAR_3, "PCI coherence region base: 0x%08llx, mask/settings: 0x%08llx\n",
   (unsigned long long)FUNC_2(),
   (unsigned long long)FUNC_3());
 }
}

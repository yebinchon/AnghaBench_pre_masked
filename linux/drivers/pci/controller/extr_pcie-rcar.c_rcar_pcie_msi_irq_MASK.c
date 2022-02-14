
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_msi {int used; int domain; } ;
struct rcar_pcie {struct device* dev; struct rcar_msi msi; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 unsigned int FUNC_2 (unsigned long*,int) ;
 int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (int ,unsigned int) ;
 unsigned long FUNC_5 (struct rcar_pcie*,int ) ;
 int FUNC_6 (struct rcar_pcie*,int,int ) ;
 scalar_t__ FUNC_7 (unsigned int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_3, void *VAR_4)
{
 struct rcar_pcie *VAR_5 = VAR_4;
 struct rcar_msi *VAR_6 = &VAR_5->msi;
 struct device *VAR_7 = VAR_5->dev;
 unsigned long VAR_8;

 VAR_8 = FUNC_5(VAR_5, VAR_2);


 if (!VAR_8)
  return VAR_1;

 while (VAR_8) {
  unsigned int VAR_9 = FUNC_2(&VAR_8, 32);
  unsigned int VAR_10;


  FUNC_6(VAR_5, 1 << VAR_9, VAR_2);

  VAR_10 = FUNC_4(VAR_6->domain, VAR_9);
  if (VAR_10) {
   if (FUNC_7(VAR_9, VAR_6->used))
    FUNC_3(VAR_10);
   else
    FUNC_1(VAR_7, "unhandled MSI\n");
  } else {

   FUNC_0(VAR_7, "unexpected MSI\n");
  }


  VAR_8 = FUNC_5(VAR_5, VAR_2);
 }

 return VAR_0;
}

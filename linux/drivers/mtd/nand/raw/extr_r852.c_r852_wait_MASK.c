
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct r852_device {scalar_t__ dma_error; } ;
struct TYPE_2__ {scalar_t__ (* dev_ready ) (struct nand_chip*) ;} ;
struct nand_chip {TYPE_1__ legacy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (int) ;
 struct r852_device* FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (struct nand_chip*,int*) ;
 scalar_t__ FUNC_3 (struct nand_chip*) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct nand_chip *VAR_2)
{
 struct r852_device *VAR_3 = FUNC_1(VAR_2);

 unsigned long VAR_4;
 u8 VAR_5;

 VAR_4 = VAR_1 + FUNC_0(400);

 while (FUNC_4(VAR_1, VAR_4))
  if (VAR_2->legacy.dev_ready(VAR_2))
   break;

 FUNC_2(VAR_2, &VAR_5);


 if (VAR_3->dma_error) {
  VAR_5 |= VAR_0;
  VAR_3->dma_error = 0;
 }
 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tb_nhi {TYPE_1__* pdev; scalar_t__ iobase; } ;
struct tb {struct tb_nhi* nhi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct tb_nhi*) ;

__attribute__((used)) static int FUNC_4(struct tb *VAR_3)
{
 struct tb_nhi *VAR_4 = VAR_3->nhi;
 int VAR_5 = 60;
 u32 VAR_6;

 do {
  VAR_6 = FUNC_1(VAR_4->iobase + VAR_1);
  if (VAR_6 & VAR_2)
   break;
  FUNC_2(50);
 } while (--VAR_5);

 if (!VAR_5) {
  FUNC_0(&VAR_4->pdev->dev, "ICM firmware not authenticated\n");
  return -VAR_0;
 }

 return FUNC_3(VAR_4);
}

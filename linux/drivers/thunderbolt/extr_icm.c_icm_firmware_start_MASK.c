
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tb_nhi {scalar_t__ iobase; TYPE_1__* pdev; } ;
struct tb {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct tb*,struct tb_nhi*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct tb *VAR_4, struct tb_nhi *VAR_5)
{
 unsigned int VAR_6 = 10;
 int VAR_7;
 u32 VAR_8;


 VAR_8 = FUNC_2(VAR_5->iobase + VAR_1);
 if (VAR_8 & VAR_2)
  return 0;

 FUNC_0(&VAR_5->pdev->dev, "starting ICM firmware\n");

 VAR_7 = FUNC_1(VAR_4, VAR_5);
 if (VAR_7)
  return VAR_7;


 do {

  VAR_8 = FUNC_2(VAR_5->iobase + VAR_1);
  if (VAR_8 & VAR_3)
   return 0;

  FUNC_3(300);
 } while (--VAR_6);

 return -VAR_0;
}

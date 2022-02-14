
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tmio_nand {TYPE_1__* dev; scalar_t__ fcr; int comp; } ;
struct nand_chip {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (long) ;
 struct tmio_nand* FUNC_2 (int ) ;
 int FUNC_3 (struct nand_chip*,int*) ;
 int FUNC_4 (struct nand_chip*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (struct nand_chip*) ;
 scalar_t__ FUNC_8 (int) ;
 long FUNC_9 (int *,int ) ;

__attribute__((used)) static int FUNC_10(struct nand_chip *VAR_2)
{
 struct tmio_nand *VAR_3 = FUNC_2(FUNC_4(VAR_2));
 long VAR_4;
 u8 VAR_5;



 FUNC_6(0x0f, VAR_3->fcr + VAR_1);
 FUNC_5(&VAR_3->comp);
 FUNC_6(0x81, VAR_3->fcr + VAR_0);

 VAR_4 = 400;
 VAR_4 = FUNC_9(&VAR_3->comp,
           FUNC_1(VAR_4));

 if (FUNC_8(!FUNC_7(VAR_2))) {
  FUNC_6(0x00, VAR_3->fcr + VAR_0);
  FUNC_0(&VAR_3->dev->dev, "still busy after 400 ms\n");

 } else if (FUNC_8(!VAR_4)) {
  FUNC_6(0x00, VAR_3->fcr + VAR_0);
  FUNC_0(&VAR_3->dev->dev, "timeout waiting for interrupt\n");
 }

 FUNC_3(VAR_2, &VAR_5);
 return VAR_5;
}

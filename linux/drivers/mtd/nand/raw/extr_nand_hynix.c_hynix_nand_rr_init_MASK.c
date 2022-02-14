
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int* data; } ;
struct nand_chip {TYPE_1__ id; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nand_chip*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_1)
{
 int VAR_2, VAR_3 = 0;
 bool VAR_4;

 VAR_4 = FUNC_2(VAR_1);





 if (VAR_4) {
  u8 VAR_5 = VAR_1->id.data[5] >> 4;


  if (VAR_5 == 4) {
   for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0);
        VAR_2++) {




    VAR_3 = FUNC_1(VAR_1,
      VAR_0);
    if (!VAR_3)
     break;
   }
  }
 }

 if (VAR_3)
  FUNC_3("failed to initialize read-retry infrastructure");

 return 0;
}

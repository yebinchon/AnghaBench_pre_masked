
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct genwqe_reg {int dummy; } ;
struct genwqe_dev {TYPE_1__* ffdc; } ;
struct TYPE_2__ {unsigned int entries; int regs; } ;






 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct genwqe_dev*,int) ;
 int FUNC_1 (unsigned int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct genwqe_dev *VAR_3)
{
 unsigned int VAR_4, VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  switch (VAR_4) {
  case 130:
   VAR_5 = FUNC_0(VAR_3, 0);
   break;
  case 129:
   VAR_5 = FUNC_0(VAR_3, 1);
   break;
  case 128:
   VAR_5 = FUNC_0(VAR_3, 2);
   break;
  case 131:
   VAR_5 = VAR_1;
   break;
  }


  VAR_3->ffdc[VAR_4].entries = VAR_5;
  VAR_3->ffdc[VAR_4].regs =
   FUNC_1(VAR_5, sizeof(struct genwqe_reg),
          VAR_2);




 }
 return 0;
}

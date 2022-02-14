
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct_device {int** regs; } ;
struct ni_gpct {unsigned int counter_index; unsigned int chip_index; struct ni_gpct_device* counter_dev; } ;


 int VAR_0 ;
 size_t FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 size_t FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int) ;
 size_t FUNC_7 (unsigned int) ;
 size_t FUNC_8 (unsigned int) ;
 int FUNC_9 (unsigned int) ;
 scalar_t__ FUNC_10 (struct ni_gpct_device*) ;
 scalar_t__ FUNC_11 (struct ni_gpct_device*) ;
 int FUNC_12 (struct ni_gpct*) ;
 int FUNC_13 (struct ni_gpct*,int ,int ,int) ;
 int FUNC_14 (struct ni_gpct*,int,size_t) ;

void FUNC_15(struct ni_gpct *VAR_1)
{
 struct ni_gpct_device *VAR_2 = VAR_1->counter_dev;
 unsigned int VAR_3 = VAR_1->counter_index;
 unsigned int VAR_4 = VAR_1->chip_index;

 FUNC_12(VAR_1);


 VAR_2->regs[VAR_4][FUNC_0(VAR_3)] = 0x0;
 FUNC_14(VAR_1, 0x0, FUNC_0(VAR_3));

 FUNC_13(VAR_1, FUNC_1(VAR_3),
   ~0, VAR_0);

 FUNC_13(VAR_1, FUNC_9(VAR_3), ~0, 0);

 VAR_2->regs[VAR_4][FUNC_7(VAR_3)] = 0x0;
 FUNC_14(VAR_1, 0x0, FUNC_7(VAR_3));

 VAR_2->regs[VAR_4][FUNC_8(VAR_3)] = 0x0;
 FUNC_14(VAR_1, 0x0, FUNC_8(VAR_3));

 FUNC_13(VAR_1, FUNC_5(VAR_3), ~0, 0);

 if (FUNC_10(VAR_2))
  FUNC_13(VAR_1, FUNC_2(VAR_3), ~0, 0);

 if (FUNC_11(VAR_2)) {
  VAR_2->regs[VAR_4][FUNC_4(VAR_3)] = 0x0;
  FUNC_14(VAR_1, 0x0, FUNC_4(VAR_3));
 }

 FUNC_13(VAR_1, FUNC_3(VAR_3), ~0, 0x0);

 FUNC_13(VAR_1, FUNC_6(VAR_3), ~0, 0x0);
}

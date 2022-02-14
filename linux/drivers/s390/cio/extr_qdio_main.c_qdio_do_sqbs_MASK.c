
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qdio_q {int nr; TYPE_1__* irq_ptr; int first_to_kick; int (* handler ) (int ,int ,int,int ,int,int ) ;int is_input_q; } ;
struct TYPE_2__ {int int_parm; int cdev; int sch_token; scalar_t__ nr_input_qs; } ;


 int FUNC_0 (int ,TYPE_1__*,char*,unsigned int) ;
 int FUNC_1 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct qdio_q*) ;
 int FUNC_3 (int) ;
 unsigned int FUNC_4 (int ,unsigned char,int,int*,int*) ;
 int FUNC_5 (struct qdio_q*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,int ,int,int ,int,int ) ;

__attribute__((used)) static int FUNC_7(struct qdio_q *VAR_4, unsigned char VAR_5, int VAR_6,
   int VAR_7)
{
 unsigned int VAR_8 = 0;
 int VAR_9 = VAR_7, VAR_10 = VAR_6;
 int VAR_11 = VAR_4->nr;

 if (!VAR_7)
  return 0;
 FUNC_5(VAR_4, VAR_2);

 if (!VAR_4->is_input_q)
  VAR_11 += VAR_4->irq_ptr->nr_input_qs;
again:
 VAR_8 = FUNC_4(VAR_4->irq_ptr->sch_token, VAR_5, VAR_11, &VAR_10, &VAR_9);

 switch (VAR_8) {
 case 0:
 case 32:

  FUNC_3(VAR_9);
  return VAR_7 - VAR_9;
 case 96:

  FUNC_0(VAR_0, VAR_4->irq_ptr, "SQBS again:%2d", VAR_8);
  FUNC_5(VAR_4, VAR_3);
  goto again;
 default:
  FUNC_1("%4x ccq:%3d", FUNC_2(VAR_4), VAR_8);
  FUNC_1("%4x SQBS ERROR", FUNC_2(VAR_4));
  FUNC_1("%3d%3d%2d", VAR_7, VAR_9, VAR_11);
  VAR_4->handler(VAR_4->irq_ptr->cdev, VAR_1, VAR_4->nr,
      VAR_4->first_to_kick, VAR_7, VAR_4->irq_ptr->int_parm);
  return 0;
 }
}

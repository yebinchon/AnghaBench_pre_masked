
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
 unsigned int FUNC_3 (int ,unsigned char*,int,int*,int*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct qdio_q*,int ) ;
 int FUNC_5 (int ,int ,int,int ,int,int ) ;

__attribute__((used)) static int FUNC_6(struct qdio_q *VAR_4, unsigned char *VAR_5,
   int VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9 = VAR_7, VAR_10 = VAR_6, VAR_11 = VAR_4->nr;
 unsigned int VAR_12 = 0;

 FUNC_4(VAR_4, VAR_2);

 if (!VAR_4->is_input_q)
  VAR_11 += VAR_4->irq_ptr->nr_input_qs;
again:
 VAR_12 = FUNC_3(VAR_4->irq_ptr->sch_token, VAR_5, VAR_11, &VAR_10, &VAR_9,
        VAR_8);

 switch (VAR_12) {
 case 0:
 case 32:

  return VAR_7 - VAR_9;
 case 96:

  FUNC_4(VAR_4, VAR_3);
  FUNC_0(VAR_0, VAR_4->irq_ptr, "EQBS part:%02x",
   VAR_9);
  return VAR_7 - VAR_9;
 case 97:

  FUNC_0(VAR_0, VAR_4->irq_ptr, "EQBS again:%2d", VAR_12);
  goto again;
 default:
  FUNC_1("%4x ccq:%3d", FUNC_2(VAR_4), VAR_12);
  FUNC_1("%4x EQBS ERROR", FUNC_2(VAR_4));
  FUNC_1("%3d%3d%2d", VAR_7, VAR_9, VAR_11);
  VAR_4->handler(VAR_4->irq_ptr->cdev, VAR_1, VAR_4->nr,
      VAR_4->first_to_kick, VAR_7, VAR_4->irq_ptr->int_parm);
  return 0;
 }
}

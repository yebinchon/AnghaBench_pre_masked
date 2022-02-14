
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qdio_irq {scalar_t__ state; int * output_qs; int * input_qs; } ;
struct ccw_device {TYPE_1__* private; } ;
struct TYPE_2__ {struct qdio_irq* qdio_data; } ;


 int FUNC_0 (int ,struct qdio_irq*,char*,unsigned int,unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_1 (int ,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (int ,unsigned int,unsigned int,unsigned int) ;

int FUNC_3(struct ccw_device *VAR_8, unsigned int VAR_9,
     int VAR_10, unsigned int VAR_11, unsigned int VAR_12)
{
 struct qdio_irq *VAR_13;

 if (VAR_11 >= VAR_7 || VAR_12 > VAR_7)
  return -VAR_1;

 VAR_13 = VAR_8->private->qdio_data;
 if (!VAR_13)
  return -VAR_3;

 FUNC_0(VAR_0, VAR_13,
        "do%02x b:%02x c:%02x", VAR_9, VAR_11, VAR_12);

 if (VAR_13->state != VAR_6)
  return -VAR_2;
 if (!VAR_12)
  return 0;
 if (VAR_9 & VAR_4)
  return FUNC_1(VAR_13->input_qs[VAR_10],
          VAR_9, VAR_11, VAR_12);
 else if (VAR_9 & VAR_5)
  return FUNC_2(VAR_13->output_qs[VAR_10],
           VAR_9, VAR_11, VAR_12);
 return -VAR_1;
}

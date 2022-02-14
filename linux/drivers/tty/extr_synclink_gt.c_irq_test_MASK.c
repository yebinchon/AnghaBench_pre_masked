
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tty_struct {int dummy; } ;
struct TYPE_4__ {struct tty_struct* tty; } ;
struct TYPE_3__ {int data_rate; } ;
struct slgt_info {int irq_occurred; void* init_error; TYPE_2__ port; TYPE_1__ params; int lock; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct slgt_info*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct slgt_info*,int ) ;
 int FUNC_3 (struct slgt_info*) ;
 int FUNC_4 (struct slgt_info*,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct slgt_info*,int ,unsigned short) ;

__attribute__((used)) static int FUNC_8(struct slgt_info *VAR_6)
{
 unsigned long VAR_7;
 unsigned long VAR_8;
 struct tty_struct *VAR_9 = VAR_6->port.tty;
 u32 VAR_10 = VAR_6->params.data_rate;

 VAR_6->params.data_rate = 921600;
 VAR_6->port.tty = ((void*)0);

 FUNC_5(&VAR_6->lock, VAR_8);
 FUNC_0(VAR_6);
 FUNC_4(VAR_6, VAR_3);


 FUNC_7(VAR_6, VAR_4,
  (unsigned short)(FUNC_2(VAR_6, VAR_4) | VAR_0));


 FUNC_7(VAR_6, VAR_5, 0);


 VAR_6->init_error = VAR_1;
 VAR_6->irq_occurred = 0;

 FUNC_6(&VAR_6->lock, VAR_8);

 VAR_7=100;
 while(VAR_7-- && !VAR_6->irq_occurred)
  FUNC_1(10);

 FUNC_5(&VAR_6->lock,VAR_8);
 FUNC_3(VAR_6);
 FUNC_6(&VAR_6->lock,VAR_8);

 VAR_6->params.data_rate = VAR_10;
 VAR_6->port.tty = VAR_9;

 VAR_6->init_error = VAR_6->irq_occurred ? 0 : VAR_1;
 return VAR_6->irq_occurred ? 0 : -VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cx23885_dev {size_t board; int lmmio; int * i2c_bus; int ts2; int ts1; int refcount; int pci; } ;
struct TYPE_2__ {scalar_t__ porta; scalar_t__ portb; scalar_t__ portc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct cx23885_dev*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct cx23885_dev*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static void FUNC_9(struct cx23885_dev *VAR_4)
{
 FUNC_8(FUNC_7(VAR_4->pci, 0),
      FUNC_6(VAR_4->pci, 0));

 if (!FUNC_0(&VAR_4->refcount))
  return;

 if (VAR_3[VAR_4->board].porta == VAR_0)
  FUNC_4(VAR_4);

 if (VAR_3[VAR_4->board].portb == VAR_1)
  FUNC_2(&VAR_4->ts1);

 if (VAR_3[VAR_4->board].portb == VAR_2)
  FUNC_1(VAR_4);

 if (VAR_3[VAR_4->board].portc == VAR_1)
  FUNC_2(&VAR_4->ts2);

 if (VAR_3[VAR_4->board].portc == VAR_2)
  FUNC_1(VAR_4);

 FUNC_3(&VAR_4->i2c_bus[2]);
 FUNC_3(&VAR_4->i2c_bus[1]);
 FUNC_3(&VAR_4->i2c_bus[0]);

 FUNC_5(VAR_4->lmmio);
}

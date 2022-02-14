
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rc_dev {struct ite_dev* priv; } ;
struct TYPE_2__ {int tx_carrier_freq; } ;
struct ite_dev {int lock; TYPE_1__ params; } ;


 int FUNC_0 (struct ite_dev*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct rc_dev *VAR_0, u32 VAR_1)
{
 unsigned long VAR_2;
 struct ite_dev *VAR_3 = VAR_0->priv;

 FUNC_1(&VAR_3->lock, VAR_2);
 VAR_3->params.tx_carrier_freq = VAR_1;
 FUNC_0(VAR_3);
 FUNC_2(&VAR_3->lock, VAR_2);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct rc_dev {struct ite_dev* priv; } ;
struct TYPE_2__ {void* rx_high_carrier_freq; void* rx_low_carrier_freq; } ;
struct ite_dev {int lock; TYPE_1__ params; } ;


 int FUNC_0 (struct ite_dev*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct rc_dev *VAR_0, u32 VAR_1, u32
        VAR_2)
{
 unsigned long VAR_3;
 struct ite_dev *VAR_4 = VAR_0->priv;

 FUNC_1(&VAR_4->lock, VAR_3);
 VAR_4->params.rx_low_carrier_freq = VAR_1;
 VAR_4->params.rx_high_carrier_freq = VAR_2;
 FUNC_0(VAR_4);
 FUNC_2(&VAR_4->lock, VAR_3);

 return 0;
}

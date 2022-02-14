
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pi433_device {int spi; int * irq_num; void** irq_state; int rx_cfg; int rx_active; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int VAR_7 ;
 int FUNC_1 (int ,size_t,void*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct pi433_device*,int *) ;

__attribute__((used)) static int
FUNC_5(struct pi433_device *VAR_8)
{
 int VAR_9;


 if (!VAR_8->rx_active)
  return 0;


 VAR_9 = FUNC_4(VAR_8, &VAR_8->rx_cfg);
 if (VAR_9)
  return VAR_9;


 VAR_9 = FUNC_1(VAR_8->spi, VAR_0, VAR_3);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_8->irq_state[VAR_0] = VAR_3;
 FUNC_0(VAR_8->irq_num[VAR_0], VAR_6);


 VAR_9 = FUNC_2(VAR_8->spi, VAR_4 - VAR_5);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_9 = FUNC_1(VAR_8->spi, VAR_1, VAR_2);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_8->irq_state[VAR_1] = VAR_2;
 FUNC_0(VAR_8->irq_num[VAR_1], VAR_6);


 VAR_9 = FUNC_3(VAR_8->spi, VAR_7);
 if (VAR_9 < 0)
  return VAR_9;

 return 0;
}

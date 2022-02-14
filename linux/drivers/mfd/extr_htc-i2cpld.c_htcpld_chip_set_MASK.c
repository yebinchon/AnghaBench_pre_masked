
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct htcpld_chip {int cache_out; int set_val_work; int lock; struct i2c_client* client; } ;
struct gpio_chip {int dummy; } ;


 struct htcpld_chip* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct gpio_chip *VAR_0, unsigned VAR_1, int VAR_2)
{
 struct i2c_client *VAR_3;
 struct htcpld_chip *VAR_4 = FUNC_0(VAR_0);
 unsigned long VAR_5;

 VAR_3 = VAR_4->client;
 if (!VAR_3)
  return;

 FUNC_2(&VAR_4->lock, VAR_5);
 if (VAR_2)
  VAR_4->cache_out |= (1 << VAR_1);
 else
  VAR_4->cache_out &= ~(1 << VAR_1);
 FUNC_3(&VAR_4->lock, VAR_5);

 FUNC_1(&(VAR_4->set_val_work));
}

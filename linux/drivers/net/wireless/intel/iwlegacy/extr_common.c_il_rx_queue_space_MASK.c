
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_rx_queue {int read; int write; } ;


 scalar_t__ VAR_0 ;

int
FUNC_0(const struct il_rx_queue *VAR_1)
{
 int VAR_2 = VAR_1->read - VAR_1->write;
 if (VAR_2 <= 0)
  VAR_2 += VAR_0;

 VAR_2 -= 2;
 if (VAR_2 < 0)
  VAR_2 = 0;
 return VAR_2;
}

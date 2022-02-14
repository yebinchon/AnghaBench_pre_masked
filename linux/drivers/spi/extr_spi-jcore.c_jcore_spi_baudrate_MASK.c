
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct jcore_spi {int speed_hz; int clock_freq; int speed_reg; TYPE_2__* master; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct jcore_spi*) ;

__attribute__((used)) static void FUNC_2(struct jcore_spi *VAR_0, int VAR_1)
{
 if (VAR_1 == VAR_0->speed_hz) return;
 VAR_0->speed_hz = VAR_1;
 if (VAR_1 >= VAR_0->clock_freq / 2)
  VAR_0->speed_reg = 0;
 else
  VAR_0->speed_reg = ((VAR_0->clock_freq / 2 / VAR_1) - 1) << 27;
 FUNC_1(VAR_0);
 FUNC_0(VAR_0->master->dev.parent, "speed=%d reg=0x%x\n",
  VAR_1, VAR_0->speed_reg);
}

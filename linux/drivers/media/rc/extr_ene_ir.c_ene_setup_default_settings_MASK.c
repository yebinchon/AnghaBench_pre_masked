
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ene_device {int tx_period; int tx_duty_cycle; int transmitter_mask; TYPE_1__* rdev; int learning_mode_enabled; } ;
struct TYPE_2__ {int timeout; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct ene_device *VAR_1)
{
 VAR_1->tx_period = 32;
 VAR_1->tx_duty_cycle = 50;
 VAR_1->transmitter_mask = 0x03;
 VAR_1->learning_mode_enabled = VAR_0;


 VAR_1->rdev->timeout = FUNC_0(150000);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {struct kp_spi_controller_state* controller_state; } ;
struct kp_spi_controller_state {int dummy; } ;


 int FUNC_0 (struct kp_spi_controller_state*) ;

__attribute__((used)) static void
FUNC_1(struct spi_device *VAR_0)
{
 struct kp_spi_controller_state *VAR_1 = VAR_0->controller_state;

 FUNC_0(VAR_1);
}

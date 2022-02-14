
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ffen; scalar_t__ trm; scalar_t__ spi_en; int cs; scalar_t__ wl; } ;
union kp_spi_config {int reg; TYPE_1__ bitfield; } ;
struct spi_device {struct kp_spi_controller_state* controller_state; int chip_select; scalar_t__ bits_per_word; int master; } ;
struct kp_spi_controller_state {int conf_cache; int base; } ;
struct kp_spi {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kp_spi_controller_state*,int ,int ) ;
 struct kp_spi_controller_state* FUNC_1 (int,int ) ;
 struct kp_spi* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct spi_device *VAR_3)
{
 union kp_spi_config VAR_4;
 struct kp_spi *VAR_5 = FUNC_2(VAR_3->master);
 struct kp_spi_controller_state *VAR_6;


 VAR_6 = VAR_3->controller_state;
 if (!VAR_6) {
  VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);
  if (!VAR_6)
   return -VAR_0;
  VAR_6->base = VAR_5->base;
  VAR_6->conf_cache = -1;
  VAR_3->controller_state = VAR_6;
 }


 VAR_4.bitfield.wl = VAR_3->bits_per_word - 1;
 VAR_4.bitfield.cs = VAR_3->chip_select;
 VAR_4.bitfield.spi_en = 0;
 VAR_4.bitfield.trm = 0;
 VAR_4.bitfield.ffen = 0;
 FUNC_0(VAR_3->controller_state, VAR_2, VAR_4.reg);
 return 0;
}

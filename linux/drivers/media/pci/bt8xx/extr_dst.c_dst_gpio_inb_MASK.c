
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ value; } ;
union dst_gpio_packet {TYPE_1__ rd; } ;
typedef scalar_t__ u8 ;
struct dst_state {int bt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,union dst_gpio_packet*) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(struct dst_state *VAR_2, u8 *VAR_3)
{
 union dst_gpio_packet VAR_4;
 int VAR_5;

 *VAR_3 = 0;
 if ((VAR_5 = FUNC_0(VAR_2->bt, VAR_0, &VAR_4)) < 0) {
  FUNC_1("dst_gpio_inb error (err == %i)\n", VAR_5);
  return -VAR_1;
 }
 *VAR_3 = (u8) VAR_4.rd.value;

 return 0;
}

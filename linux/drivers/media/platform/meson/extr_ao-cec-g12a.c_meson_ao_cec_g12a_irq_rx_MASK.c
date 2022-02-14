
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int len; int* msg; } ;
struct meson_ao_cec_g12a_device {TYPE_1__ rx_msg; int adap; int regmap_cec; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,scalar_t__,int*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct meson_ao_cec_g12a_device *VAR_4)
{
 int VAR_5, VAR_6 = 0;
 u32 VAR_7;

 VAR_6 = FUNC_1(VAR_4->regmap_cec, VAR_1, &VAR_7);

 VAR_4->rx_msg.len = VAR_7;
 if (VAR_4->rx_msg.len > VAR_3)
  VAR_4->rx_msg.len = VAR_3;

 for (VAR_5 = 0; VAR_5 < VAR_4->rx_msg.len; VAR_5++) {
  VAR_6 |= FUNC_1(VAR_4->regmap_cec,
       VAR_2 + VAR_5, &VAR_7);

  VAR_4->rx_msg.msg[VAR_5] = VAR_7 & 0xff;
 }

 VAR_6 |= FUNC_2(VAR_4->regmap_cec, VAR_0, 0);
 if (VAR_6)
  return;

 FUNC_0(VAR_4->adap, &VAR_4->rx_msg);
}

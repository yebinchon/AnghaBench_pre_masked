
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int len; int* msg; } ;
struct meson_ao_cec_device {scalar_t__ base; TYPE_1__ rx_msg; int adap; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (struct meson_ao_cec_device*,scalar_t__,int*,int*) ;
 int FUNC_2 (struct meson_ao_cec_device*,int ,int ,int*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct meson_ao_cec_device *VAR_14)
{
 int VAR_15, VAR_16 = 0;
 u8 VAR_17;

 FUNC_1(VAR_14, VAR_7, &VAR_17, &VAR_16);
 if (VAR_17 != VAR_12)
  goto rx_out;

 FUNC_1(VAR_14, VAR_8, &VAR_17, &VAR_16);
 if (VAR_17 != 1)
  goto rx_out;

 FUNC_1(VAR_14, VAR_6, &VAR_17, &VAR_16);

 VAR_14->rx_msg.len = VAR_17 + 1;
 if (VAR_14->rx_msg.len > VAR_2)
  VAR_14->rx_msg.len = VAR_2;

 for (VAR_15 = 0; VAR_15 < VAR_14->rx_msg.len; VAR_15++) {
  u8 VAR_18;

  FUNC_1(VAR_14, VAR_4 + VAR_15, &VAR_18, &VAR_16);

  VAR_14->rx_msg.msg[VAR_15] = VAR_18;
 }

 if (VAR_16)
  goto rx_out;

 FUNC_0(VAR_14->adap, &VAR_14->rx_msg);

rx_out:

 FUNC_3(VAR_1, VAR_14->base + VAR_0);


 FUNC_2(VAR_14, VAR_5, VAR_11, &VAR_16);
 FUNC_2(VAR_14, VAR_5, VAR_13, &VAR_16);


 FUNC_2(VAR_14, VAR_3, VAR_9, &VAR_16);
 FUNC_2(VAR_14, VAR_3, VAR_10, &VAR_16);
}

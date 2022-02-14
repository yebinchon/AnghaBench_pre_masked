
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct meson_ao_cec_device {int adap; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;




 int VAR_9 ;
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (struct meson_ao_cec_device*,int ,int*,int*) ;
 int FUNC_2 (struct meson_ao_cec_device*,int ,int ,int*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct meson_ao_cec_device *VAR_10)
{
 unsigned long VAR_11 = 0;
 u8 VAR_12;
 int VAR_13 = 0;

 FUNC_1(VAR_10, VAR_3, &VAR_12, &VAR_13);
 if (VAR_13)
  goto tx_reg_err;

 switch (VAR_12) {
 case 130:
  VAR_11 = VAR_8;
  break;

 case 131:
  VAR_11 = VAR_4;
  break;

 case 128:
  VAR_11 = VAR_6;
  break;

 case 129:
 default:
  VAR_11 = VAR_7;
  break;
 }


 FUNC_3(VAR_1, VAR_10->base + VAR_0);


 FUNC_2(VAR_10, VAR_2, VAR_9, &VAR_13);
 if (VAR_13)
  goto tx_reg_err;

 FUNC_0(VAR_10->adap, VAR_11);
 return;

tx_reg_err:
 FUNC_0(VAR_10->adap, VAR_5);
}

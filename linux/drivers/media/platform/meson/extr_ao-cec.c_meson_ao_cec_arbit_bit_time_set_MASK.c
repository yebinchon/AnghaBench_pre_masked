
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_ao_cec_device {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct meson_ao_cec_device*,int ,unsigned int,int*) ;

__attribute__((used)) static int FUNC_1(struct meson_ao_cec_device *VAR_6,
        unsigned int VAR_7,
        unsigned int VAR_8)
{
 int VAR_9 = 0;

 switch (VAR_7) {
 case 128:
  FUNC_0(VAR_6, VAR_5,
       VAR_8 & 0xff, &VAR_9);
  FUNC_0(VAR_6, VAR_4,
       (VAR_8 >> 8) & 0x7, &VAR_9);
  break;

 case 130:
  FUNC_0(VAR_6, VAR_3,
       VAR_8 & 0xff, &VAR_9);
  FUNC_0(VAR_6, VAR_2,
       (VAR_8 >> 8) & 0x7, &VAR_9);
  break;

 case 129:
  FUNC_0(VAR_6, VAR_1,
       VAR_8 & 0xff, &VAR_9);
  FUNC_0(VAR_6, VAR_0,
       (VAR_8 >> 8) & 0x7, &VAR_9);
  break;
 }

 return VAR_9;
}

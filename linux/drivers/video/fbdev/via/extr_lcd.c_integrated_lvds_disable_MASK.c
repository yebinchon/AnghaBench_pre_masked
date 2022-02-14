
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lvds_setting_information {int dummy; } ;
struct lvds_chip_information {int output_interface; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int VAR_9 ;
 int FUNC_0 (int ,int ,int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct lvds_setting_information
        *VAR_10,
        struct lvds_chip_information *VAR_11)
{
 bool VAR_12 = 0;
 bool VAR_13 = 0;
 if (129 == VAR_11->output_interface)
  VAR_12 = 1;
 if (130 == VAR_11->output_interface)
  VAR_12 = 1;
 if (128 == VAR_11->output_interface)
  VAR_13 = 1;
 if (VAR_13) {



  FUNC_0(VAR_8, VAR_9, 0, VAR_0);


  FUNC_0(VAR_7, VAR_9, 0xC0, VAR_2 + VAR_3);
 }
 if (VAR_12) {



  FUNC_0(VAR_4, VAR_9, 0, VAR_1);


  FUNC_0(VAR_5, VAR_9, 0xC0, VAR_2 + VAR_3);
 }


 switch (VAR_11->output_interface) {
 case 130:
  {
   FUNC_0(VAR_6, VAR_9, 0x80, VAR_3);
   break;
  }

 case 128:
  {
   FUNC_0(VAR_6, VAR_9, 0x40, VAR_2);
   break;
  }

 case 129:
  {
   FUNC_0(VAR_6, VAR_9, 0xC0, VAR_2 + VAR_3);
   break;
  }
 }
}

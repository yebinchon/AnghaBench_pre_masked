
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum dss_io_pad_mode { ____Placeholder_dss_io_pad_mode } dss_io_pad_mode ;


 int FUNC_0 () ;
 int VAR_0 ;



 int FUNC_1 (int ,int,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(enum dss_io_pad_mode VAR_1)
{
 u32 VAR_2;
 int VAR_3, VAR_4;

 switch (VAR_1) {
 case 129:
  VAR_3 = 0;
  VAR_4 = 0;
  break;
 case 128:
  VAR_3 = 1;
  VAR_4 = 0;
  break;
 case 130:
  VAR_3 = 1;
  VAR_4 = 1;
  break;
 default:
  FUNC_0();
  return;
 }

 VAR_2 = FUNC_2(VAR_0);
 VAR_2 = FUNC_1(VAR_2, VAR_3, 15, 15);
 VAR_2 = FUNC_1(VAR_2, VAR_4, 16, 16);
 FUNC_3(VAR_0, VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tm6000_core {scalar_t__ dev_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct tm6000_core*,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct tm6000_core *VAR_5, u8 VAR_6)
{
 u8 VAR_7 = 0;

 if (VAR_6)
  VAR_7 = 0x20;

 if (VAR_5->dev_type == VAR_2) {
  FUNC_0(VAR_5, VAR_3,
       VAR_7, 0x20);
  FUNC_0(VAR_5, VAR_4,
       VAR_7, 0x20);
 } else {
  FUNC_0(VAR_5, VAR_0,
       VAR_7, 0x20);
  FUNC_0(VAR_5, VAR_1,
       VAR_7, 0x20);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ath6kl {int fw_capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct ath6kl *VAR_6, u16 VAR_7,
           u8 *VAR_8, u8 *VAR_9)
{
 int VAR_10 = 0;

 switch (VAR_7) {
 case 133:
 case 132:
  *VAR_8 = VAR_2;

  *VAR_9 = VAR_1;
  break;
 case 131:
 case 130:
  *VAR_8 = VAR_3;




  *VAR_9 = VAR_1;
  break;
 case 129:

  if (FUNC_0(VAR_0,
        VAR_6->fw_capabilities))
   *VAR_8 = VAR_3;
  else
   *VAR_8 = VAR_4;




  *VAR_9 = VAR_1;
  break;
 case 128:

  if (FUNC_0(VAR_0,
        VAR_6->fw_capabilities))
   *VAR_8 = VAR_3;
  else
   *VAR_8 = VAR_4;




  *VAR_9 = VAR_1;
  break;
 default:
  VAR_10 = -VAR_5;
  break;
 }

 return VAR_10;
}

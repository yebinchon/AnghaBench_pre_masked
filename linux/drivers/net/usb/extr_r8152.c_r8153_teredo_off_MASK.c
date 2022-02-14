
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct r8152 {int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct r8152*,int ,int ) ;
 int FUNC_1 (struct r8152*,int ,int ,int) ;
 int FUNC_2 (struct r8152*,int ,int ,int ) ;
 int FUNC_3 (struct r8152*,int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct r8152 *VAR_9)
{
 u32 VAR_10;

 switch (VAR_9->version) {
 case 136:
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
  VAR_10 = FUNC_0(VAR_9, VAR_0, VAR_3);
  VAR_10 &= ~(VAR_7 | VAR_6 |
         VAR_1);
  FUNC_3(VAR_9, VAR_0, VAR_3, VAR_10);
  break;

 case 129:
 case 128:



  FUNC_1(VAR_9, VAR_0, VAR_3, 0xff);
  break;

 default:
  break;
 }

 FUNC_3(VAR_9, VAR_0, VAR_5, VAR_8);
 FUNC_3(VAR_9, VAR_0, VAR_2, 0);
 FUNC_2(VAR_9, VAR_0, VAR_4, 0);
}

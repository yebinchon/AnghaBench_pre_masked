
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


 int FUNC_0 (struct r8152*,int ,int ) ;
 int FUNC_1 (struct r8152*,int ,int ,int) ;
 int FUNC_2 (struct r8152*) ;
 int FUNC_3 (struct r8152*) ;
 int FUNC_4 (struct r8152*,int) ;

__attribute__((used)) static int FUNC_5(struct r8152 *VAR_4)
{
 u32 VAR_5;

 FUNC_2(VAR_4);

 VAR_5 = FUNC_0(VAR_4, VAR_2, VAR_3);
 VAR_5 |= VAR_0 | VAR_1;
 FUNC_1(VAR_4, VAR_2, VAR_3, VAR_5);

 switch (VAR_4->version) {
 case 129:
 case 128:
  FUNC_3(VAR_4);
  break;
 default:
  break;
 }

 FUNC_4(VAR_4, 0);

 return 0;
}

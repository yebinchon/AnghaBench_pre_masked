
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int work; } ;
 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static bool FUNC_5(void)
{
 u8 VAR_4;
 bool VAR_5 = 1;

 VAR_4 = FUNC_3(VAR_3 + VAR_1);
 switch (VAR_4) {
 case 128:
 case 131:
 case 130:
 case 129:
 case 136:
 case 134:
 case 135:
 case 132:
 case 133:
  break;
 default:
  FUNC_2(4, VAR_4);
  VAR_5 = 0;
  break;
 }

 FUNC_4(FUNC_0(4), VAR_0);

 if (VAR_5)
  FUNC_1(&VAR_2.work);

 return 0;
}

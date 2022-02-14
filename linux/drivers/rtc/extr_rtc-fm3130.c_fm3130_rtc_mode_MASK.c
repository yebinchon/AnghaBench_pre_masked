
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm3130 {int* regs; int client; } ;
struct device {int dummy; } ;





 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct fm3130* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,size_t) ;
 int FUNC_3 (int ,size_t,int) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_3, int VAR_4)
{
 struct fm3130 *VAR_5 = FUNC_1(VAR_3);

 VAR_5->regs[VAR_0] =
  FUNC_2(VAR_5->client, VAR_0);
 switch (VAR_4) {
 case 130:
  VAR_5->regs[VAR_0] &=
   ~(VAR_2 |
   VAR_1);
  break;
 case 128:
  VAR_5->regs[VAR_0] |= VAR_2;
  break;
 case 129:
  VAR_5->regs[VAR_0] |= VAR_1;
  break;
 default:
  FUNC_0(VAR_3, "invalid mode %d\n", VAR_4);
  break;
 }

 FUNC_3(VAR_5->client,
   VAR_0, VAR_5->regs[VAR_0]);
}

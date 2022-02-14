
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,int ,int *,int) ;
 int FUNC_3 (struct device*,int ,int *,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2, unsigned int VAR_3)
{
 int VAR_4;
 u8 VAR_5;

 VAR_4 = FUNC_2(VAR_2, VAR_0, &VAR_5, 1);
 if (VAR_4 < 0) {
  FUNC_1(VAR_2, "Read IRQ Control Register error %d\n", VAR_4);
  return VAR_4;
 }


 if (VAR_3)
  VAR_5 |= VAR_1;
 else
  VAR_5 &= ~VAR_1;

 VAR_4 = FUNC_3(VAR_2, VAR_0, &VAR_5, 1);
 if (VAR_4 < 0) {
  FUNC_0(VAR_2, "can't update INT reg\n");
  return VAR_4;
 }

 return 0;
}

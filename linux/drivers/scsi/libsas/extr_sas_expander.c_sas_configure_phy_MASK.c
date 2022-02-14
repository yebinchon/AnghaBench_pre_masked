
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct domain_device {int dummy; } ;


 int FUNC_0 (struct domain_device*,int,int *,int*,int*) ;
 int FUNC_1 (struct domain_device*,int,int *,int,int) ;

__attribute__((used)) static int FUNC_2(struct domain_device *VAR_0, int VAR_1,
        u8 *VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_4, &VAR_5);
 if (VAR_6)
  return VAR_6;
 if (VAR_3 ^ VAR_5)
  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4,VAR_3);

 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcs_cmd {unsigned int data; int addr; } ;
struct rpmhpd {int dev; int addr; } ;


 int FUNC_0 (int ,int,struct tcs_cmd*,int) ;
 int FUNC_1 (int ,int,struct tcs_cmd*,int) ;

__attribute__((used)) static int FUNC_2(struct rpmhpd *VAR_0, int VAR_1,
         unsigned int VAR_2, bool VAR_3)
{
 struct tcs_cmd VAR_4 = {
  .addr = VAR_0->addr,
  .data = VAR_2,
 };





 if (VAR_3)
  return FUNC_0(VAR_0->dev, VAR_1, &VAR_4, 1);
 else
  return FUNC_1(VAR_0->dev, VAR_1, &VAR_4, 1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcs_cmd {int dummy; } ;
struct rpmh_vreg {int dev; scalar_t__ always_wait_for_ack; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct tcs_cmd*,int) ;
 int FUNC_1 (int ,int ,struct tcs_cmd*,int) ;

__attribute__((used)) static int FUNC_2(struct rpmh_vreg *VAR_1,
   struct tcs_cmd *VAR_2, bool VAR_3)
{
 int VAR_4;

 if (VAR_3 || VAR_1->always_wait_for_ack)
  VAR_4 = FUNC_0(VAR_1->dev, VAR_0, VAR_2, 1);
 else
  VAR_4 = FUNC_1(VAR_1->dev, VAR_0, VAR_2,
     1);

 return VAR_4;
}

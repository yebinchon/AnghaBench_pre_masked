
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtu3 {scalar_t__ max_speed; int dev; scalar_t__ is_u3_ip; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int ,char*) ;
 int FUNC_1 (struct mtu3*,int) ;
 int FUNC_2 (struct mtu3*,int) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(struct mtu3 *VAR_1, int VAR_2)
{
 if (VAR_1->is_u3_ip && VAR_1->max_speed >= VAR_0)
  FUNC_2(VAR_1, VAR_2);
 else
  FUNC_1(VAR_1, VAR_2);

 FUNC_0(VAR_1->dev, "gadget (%s) pullup D%s\n",
  FUNC_3(VAR_1->max_speed), VAR_2 ? "+" : "-");
}

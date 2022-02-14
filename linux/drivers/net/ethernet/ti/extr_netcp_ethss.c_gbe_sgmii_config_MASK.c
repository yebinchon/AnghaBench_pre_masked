
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gbe_slave {int link_interface; int slave_num; } ;
struct gbe_priv {int dummy; } ;


 int FUNC_0 (struct gbe_priv*,int ) ;
 scalar_t__ FUNC_1 (struct gbe_slave*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct gbe_priv *VAR_0, struct gbe_slave *VAR_1)
{
 if (FUNC_1(VAR_1))
  return;

 FUNC_3(FUNC_0(VAR_0, VAR_1->slave_num), VAR_1->slave_num);
 FUNC_2(FUNC_0(VAR_0, VAR_1->slave_num), VAR_1->slave_num,
      VAR_1->link_interface);
}

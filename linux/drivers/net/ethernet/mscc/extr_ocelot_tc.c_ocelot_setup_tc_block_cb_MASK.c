
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocelot_port {int dev; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;


 int VAR_0 ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct ocelot_port*,void*,int) ;
 int FUNC_2 (int ,void*) ;

__attribute__((used)) static int FUNC_3(enum tc_setup_type VAR_1,
        void *VAR_2,
        void *VAR_3, bool VAR_4)
{
 struct ocelot_port *VAR_5 = VAR_3;

 if (!FUNC_2(VAR_5->dev, VAR_2))
  return -VAR_0;

 switch (VAR_1) {
 case 128:
  FUNC_0(VAR_5->dev, "tc_block_cb: TC_SETUP_CLSMATCHALL %s\n",
      VAR_4 ? "ingress" : "egress");

  return FUNC_1(VAR_5, VAR_2, VAR_4);
 case 129:
  return 0;
 default:
  FUNC_0(VAR_5->dev, "tc_block_cb: type %d %s\n",
      VAR_1,
      VAR_4 ? "ingress" : "egress");

  return -VAR_0;
 }
}

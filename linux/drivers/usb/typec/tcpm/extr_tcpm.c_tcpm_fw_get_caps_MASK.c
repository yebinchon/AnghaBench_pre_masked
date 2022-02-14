
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int data; int type; int prefer_role; } ;
struct tcpm_port {scalar_t__ port_type; int operating_snk_mw; int self_powered; void* nr_snk_pdo; int snk_pdo; TYPE_1__ typec_caps; void* nr_src_pdo; int src_pdo; } ;
struct fwnode_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct fwnode_handle*,char*) ;
 int FUNC_1 (struct fwnode_handle*,char*) ;
 int FUNC_2 (struct fwnode_handle*,char*,char const**) ;
 scalar_t__ FUNC_3 (struct fwnode_handle*,char*,int*) ;
 int FUNC_4 (struct fwnode_handle*,char*,int ,void*) ;
 void* FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (struct tcpm_port*,int ,void*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (char const*) ;

__attribute__((used)) static int FUNC_10(struct tcpm_port *VAR_4,
       struct fwnode_handle *VAR_5)
{
 const char *VAR_6;
 int VAR_7;
 u32 VAR_8;

 if (!VAR_5)
  return -VAR_0;


 VAR_7 = FUNC_2(VAR_5, "data-role", &VAR_6);
 if (VAR_7 == 0) {
  VAR_7 = FUNC_7(VAR_6);
  if (VAR_7 < 0)
   return VAR_7;
  VAR_4->typec_caps.data = VAR_7;
 }

 VAR_7 = FUNC_2(VAR_5, "power-role", &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_8(VAR_6);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_4->typec_caps.type = VAR_7;
 VAR_4->port_type = VAR_4->typec_caps.type;

 if (VAR_4->port_type == VAR_2)
  goto sink;


 VAR_7 = FUNC_0(VAR_5, "source-pdos");
 if (VAR_7 <= 0)
  return -VAR_0;

 VAR_4->nr_src_pdo = FUNC_5(VAR_7, VAR_1);
 VAR_7 = FUNC_4(VAR_5, "source-pdos",
          VAR_4->src_pdo, VAR_4->nr_src_pdo);
 if ((VAR_7 < 0) || FUNC_6(VAR_4, VAR_4->src_pdo,
         VAR_4->nr_src_pdo))
  return -VAR_0;

 if (VAR_4->port_type == VAR_3)
  return 0;


 VAR_7 = FUNC_2(VAR_5, "try-power-role", &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_4->typec_caps.prefer_role = FUNC_9(VAR_6);
 if (VAR_4->typec_caps.prefer_role < 0)
  return -VAR_0;
sink:

 VAR_7 = FUNC_0(VAR_5, "sink-pdos");
 if (VAR_7 <= 0)
  return -VAR_0;

 VAR_4->nr_snk_pdo = FUNC_5(VAR_7, VAR_1);
 VAR_7 = FUNC_4(VAR_5, "sink-pdos",
          VAR_4->snk_pdo, VAR_4->nr_snk_pdo);
 if ((VAR_7 < 0) || FUNC_6(VAR_4, VAR_4->snk_pdo,
         VAR_4->nr_snk_pdo))
  return -VAR_0;

 if (FUNC_3(VAR_5, "op-sink-microwatt", &VAR_8) < 0)
  return -VAR_0;
 VAR_4->operating_snk_mw = VAR_8 / 1000;

 VAR_4->self_powered = FUNC_1(VAR_5, "self-powered");

 return 0;
}

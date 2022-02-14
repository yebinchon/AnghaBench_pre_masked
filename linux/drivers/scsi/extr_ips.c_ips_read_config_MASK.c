
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int sg_addr; int command_id; void* op_code; } ;
struct TYPE_15__ {TYPE_1__ basic_io; } ;
struct TYPE_16__ {int data_len; int basic_status; TYPE_2__ cmd; void** cdb; int timeout; } ;
typedef TYPE_3__ ips_scb_t ;
struct TYPE_17__ {int max_cmds; int ioctl_data; TYPE_5__* conf; int ioctl_busaddr; TYPE_3__* scbs; } ;
typedef TYPE_4__ ips_ha_t ;
struct TYPE_18__ {int* init_id; } ;
typedef int IPS_CONF ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (TYPE_4__*,TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,int ,int) ;
 int FUNC_4 (TYPE_5__*,int ,int) ;
 int FUNC_5 (TYPE_5__*,int ,int) ;

__attribute__((used)) static int
FUNC_6(ips_ha_t * VAR_6, int VAR_7)
{
 ips_scb_t *VAR_8;
 int VAR_9;
 int VAR_10;

 FUNC_1("ips_read_config", 1);


 for (VAR_9 = 0; VAR_9 < 4; VAR_9++)
  VAR_6->conf->init_id[VAR_9] = 7;

 VAR_8 = &VAR_6->scbs[VAR_6->max_cmds - 1];

 FUNC_2(VAR_6, VAR_8);

 VAR_8->timeout = VAR_5;
 VAR_8->cdb[0] = VAR_1;

 VAR_8->cmd.basic_io.op_code = VAR_1;
 VAR_8->cmd.basic_io.command_id = FUNC_0(VAR_6, VAR_8);
 VAR_8->data_len = sizeof (*VAR_6->conf);
 VAR_8->cmd.basic_io.sg_addr = VAR_6->ioctl_busaddr;


 if (((VAR_10 =
       FUNC_3(VAR_6, VAR_8, VAR_5, VAR_7)) == VAR_2)
     || (VAR_10 == VAR_4)
     || ((VAR_8->basic_status & VAR_3) > 1)) {

  FUNC_5(VAR_6->conf, 0, sizeof (IPS_CONF));


  for (VAR_9 = 0; VAR_9 < 4; VAR_9++)
   VAR_6->conf->init_id[VAR_9] = 7;


  if ((VAR_8->basic_status & VAR_3) ==
      VAR_0)
   return (1);

  return (0);
 }

 FUNC_4(VAR_6->conf, VAR_6->ioctl_data, sizeof(*VAR_6->conf));
 return (1);
}

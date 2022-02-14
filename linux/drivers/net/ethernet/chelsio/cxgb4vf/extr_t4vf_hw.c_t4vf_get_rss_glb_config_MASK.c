
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_11__ {int synmapen; int syn4tupenipv6; int syn2tupenipv6; int syn4tupenipv4; int syn2tupenipv4; int ofdmapen; int tnlmapen; int tnlalllookup; int hashtoeplitz; } ;
struct TYPE_12__ {TYPE_5__ basicvirtual; } ;
struct rss_params {int mode; TYPE_6__ u; } ;
struct TYPE_9__ {int synmapen_to_hashtoeplitz; } ;
struct TYPE_8__ {int mode_pkd; } ;
struct TYPE_10__ {TYPE_3__ basicvirtual; TYPE_2__ manual; } ;
struct fw_rss_glb_config_cmd {TYPE_4__ u; void* retval_len16; void* op_to_write; } ;
struct TYPE_7__ {struct rss_params rss; } ;
struct adapter {TYPE_1__ params; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct fw_rss_glb_config_cmd) ;
 int VAR_3 ;
 int VAR_4 ;

 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct fw_rss_glb_config_cmd*,int ,int) ;
 int FUNC_6 (struct adapter*,struct fw_rss_glb_config_cmd*,int,struct fw_rss_glb_config_cmd*) ;

int FUNC_7(struct adapter *VAR_13)
{
 struct rss_params *VAR_14 = &VAR_13->params.rss;
 struct fw_rss_glb_config_cmd VAR_15, VAR_16;
 int VAR_17;





 FUNC_5(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.op_to_write = FUNC_4(FUNC_0(VAR_3) |
          VAR_2 |
          VAR_1);
 VAR_15.retval_len16 = FUNC_4(FUNC_1(VAR_15));
 VAR_17 = FUNC_6(VAR_13, &VAR_15, sizeof(VAR_15), &VAR_16);
 if (VAR_17)
  return VAR_17;







 VAR_14->mode = FUNC_2(
   FUNC_3(VAR_16.u.manual.mode_pkd));
 switch (VAR_14->mode) {
 case 128: {
  u32 VAR_18 = FUNC_3(
    VAR_16.u.basicvirtual.synmapen_to_hashtoeplitz);

  VAR_14->u.basicvirtual.synmapen =
   ((VAR_18 & VAR_10) != 0);
  VAR_14->u.basicvirtual.syn4tupenipv6 =
   ((VAR_18 & VAR_9) != 0);
  VAR_14->u.basicvirtual.syn2tupenipv6 =
   ((VAR_18 & VAR_7) != 0);
  VAR_14->u.basicvirtual.syn4tupenipv4 =
   ((VAR_18 & VAR_8) != 0);
  VAR_14->u.basicvirtual.syn2tupenipv4 =
   ((VAR_18 & VAR_6) != 0);

  VAR_14->u.basicvirtual.ofdmapen =
   ((VAR_18 & VAR_5) != 0);

  VAR_14->u.basicvirtual.tnlmapen =
   ((VAR_18 & VAR_12) != 0);
  VAR_14->u.basicvirtual.tnlalllookup =
   ((VAR_18 & VAR_11) != 0);

  VAR_14->u.basicvirtual.hashtoeplitz =
   ((VAR_18 & VAR_4) != 0);


  if (!VAR_14->u.basicvirtual.tnlmapen)
   return -VAR_0;
  break;
 }

 default:

  return -VAR_0;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int defaultq; int udpen; int ip4twotupen; int ip4fourtupen; int ip6twotupen; int ip6fourtupen; } ;
union rss_vi_config {TYPE_3__ basicvirtual; } ;
typedef int u32 ;
struct TYPE_9__ {void* defaultq_to_udpen; } ;
struct TYPE_10__ {TYPE_4__ basicvirtual; } ;
struct fw_rss_vi_config_cmd {TYPE_5__ u; void* retval_len16; void* op_to_viid; } ;
struct TYPE_6__ {int mode; } ;
struct TYPE_7__ {TYPE_1__ rss; } ;
struct adapter {TYPE_2__ params; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct fw_rss_vi_config_cmd) ;

 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (unsigned int) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct fw_rss_vi_config_cmd*,int ,int) ;
 int FUNC_6 (struct adapter*,struct fw_rss_vi_config_cmd*,int,struct fw_rss_vi_config_cmd*) ;

int FUNC_7(struct adapter *VAR_9, unsigned int VAR_10,
        union rss_vi_config *VAR_11)
{
 struct fw_rss_vi_config_cmd VAR_12, VAR_13;

 FUNC_5(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.op_to_viid = FUNC_4(FUNC_0(VAR_3) |
         VAR_1 |
         VAR_2 |
         FUNC_3(VAR_10));
 VAR_12.retval_len16 = FUNC_4(FUNC_1(VAR_12));
 switch (VAR_9->params.rss.mode) {
 case 128: {
  u32 VAR_14 = 0;

  if (VAR_11->basicvirtual.ip6fourtupen)
   VAR_14 |= VAR_6;
  if (VAR_11->basicvirtual.ip6twotupen)
   VAR_14 |= VAR_7;
  if (VAR_11->basicvirtual.ip4fourtupen)
   VAR_14 |= VAR_4;
  if (VAR_11->basicvirtual.ip4twotupen)
   VAR_14 |= VAR_5;
  if (VAR_11->basicvirtual.udpen)
   VAR_14 |= VAR_8;
  VAR_14 |= FUNC_2(
    VAR_11->basicvirtual.defaultq);
  VAR_12.u.basicvirtual.defaultq_to_udpen = FUNC_4(VAR_14);
  break;
 }

 default:
  return -VAR_0;
 }

 return FUNC_6(VAR_9, &VAR_12, sizeof(VAR_12), &VAR_13);
}

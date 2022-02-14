
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int ip6fourtupen; int ip6twotupen; int ip4fourtupen; int ip4twotupen; int udpen; int defaultq; } ;
union rss_vi_config {TYPE_5__ basicvirtual; } ;
typedef int u32 ;
struct TYPE_8__ {int defaultq_to_udpen; } ;
struct TYPE_9__ {TYPE_3__ basicvirtual; } ;
struct fw_rss_vi_config_cmd {TYPE_4__ u; void* retval_len16; void* op_to_viid; } ;
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
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (struct fw_rss_vi_config_cmd*,int ,int) ;
 int FUNC_7 (struct adapter*,struct fw_rss_vi_config_cmd*,int,struct fw_rss_vi_config_cmd*) ;

int FUNC_8(struct adapter *VAR_9, unsigned int VAR_10,
       union rss_vi_config *VAR_11)
{
 struct fw_rss_vi_config_cmd VAR_12, VAR_13;
 int VAR_14;

 FUNC_6(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.op_to_viid = FUNC_5(FUNC_0(VAR_3) |
         VAR_2 |
         VAR_1 |
         FUNC_3(VAR_10));
 VAR_12.retval_len16 = FUNC_5(FUNC_1(VAR_12));
 VAR_14 = FUNC_7(VAR_9, &VAR_12, sizeof(VAR_12), &VAR_13);
 if (VAR_14)
  return VAR_14;

 switch (VAR_9->params.rss.mode) {
 case 128: {
  u32 VAR_15 = FUNC_4(VAR_13.u.basicvirtual.defaultq_to_udpen);

  VAR_11->basicvirtual.ip6fourtupen =
   ((VAR_15 & VAR_6) != 0);
  VAR_11->basicvirtual.ip6twotupen =
   ((VAR_15 & VAR_7) != 0);
  VAR_11->basicvirtual.ip4fourtupen =
   ((VAR_15 & VAR_4) != 0);
  VAR_11->basicvirtual.ip4twotupen =
   ((VAR_15 & VAR_5) != 0);
  VAR_11->basicvirtual.udpen =
   ((VAR_15 & VAR_8) != 0);
  VAR_11->basicvirtual.defaultq =
   FUNC_2(VAR_15);
  break;
 }

 default:
  return -VAR_0;
 }

 return 0;
}

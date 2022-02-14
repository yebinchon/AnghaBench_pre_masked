
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {int chained_metadata_format; int netdev; scalar_t__ rx_offset; } ;
struct TYPE_5__ {int major; } ;
struct nfp_net {int cap; TYPE_4__* app; TYPE_2__ dp; TYPE_1__ fw_ver; void* max_mtu; } ;
struct TYPE_8__ {TYPE_3__* type; } ;
struct TYPE_7__ {int ctrl_cap_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct nfp_net*,char*,scalar_t__) ;
 void* FUNC_1 (struct nfp_net*,int ) ;

__attribute__((used)) static int FUNC_2(struct nfp_net *VAR_8)
{

 VAR_8->cap = FUNC_1(VAR_8, VAR_1);
 VAR_8->max_mtu = FUNC_1(VAR_8, VAR_4);





 VAR_8->dp.chained_metadata_format = VAR_8->fw_ver.major == 4 ||
      !VAR_8->dp.netdev ||
      !(VAR_8->cap & VAR_3) ||
      VAR_8->cap & VAR_2;



 if (VAR_8->dp.chained_metadata_format && VAR_8->fw_ver.major != 4)
  VAR_8->cap &= ~VAR_3;


 if (VAR_8->fw_ver.major >= 2) {
  u32 VAR_9;

  VAR_9 = FUNC_1(VAR_8, VAR_5);
  if (VAR_9 > VAR_6) {
   FUNC_0(VAR_8, "Invalid rx offset: %d\n", VAR_9);
   return -VAR_0;
  }
  VAR_8->dp.rx_offset = VAR_9;
 } else {
  VAR_8->dp.rx_offset = VAR_7;
 }


 if (!VAR_8->dp.netdev)
  VAR_8->cap &= VAR_8->app->type->ctrl_cap_mask;

 return 0;
}

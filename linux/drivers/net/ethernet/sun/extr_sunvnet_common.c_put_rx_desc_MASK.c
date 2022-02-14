
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int lp; } ;
struct vnet_port {TYPE_1__ vio; } ;
struct vio_net_desc {int dummy; } ;
struct vio_dring_state {int entry_size; int ncookies; int cookies; } ;


 int FUNC_0 (int ,struct vio_net_desc*,int,int,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct vnet_port *VAR_0,
         struct vio_dring_state *VAR_1,
         struct vio_net_desc *VAR_2,
         u32 VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0->vio.lp, VAR_2, VAR_1->entry_size,
      (VAR_3 * VAR_1->entry_size),
      VAR_1->cookies, VAR_1->ncookies);
 if (VAR_4 < 0)
  return VAR_4;

 return 0;
}

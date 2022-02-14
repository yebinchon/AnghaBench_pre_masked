
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lp; struct vio_dring_state* drings; } ;
struct vnet_port {int start_cons; TYPE_2__ vio; } ;
struct vio_net_dext {int dummy; } ;
struct TYPE_3__ {int state; } ;
struct vio_net_desc {TYPE_1__ hdr; } ;
struct vio_dring_state {unsigned long entry_size; unsigned long num_entries; unsigned long pending; int ncookies; scalar_t__ cons; scalar_t__ prod; void* base; int cookies; } ;
struct ldc_trans_cookie {int dummy; } ;


 scalar_t__ FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*) ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 void* FUNC_2 (int ,unsigned long,int ,int*,int) ;
 int FUNC_3 (struct vnet_port*) ;
 struct vio_net_desc* FUNC_4 (struct vio_dring_state*,int) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int,int) ;

__attribute__((used)) static int FUNC_6(struct vnet_port *VAR_7)
{
 struct vio_dring_state *VAR_8;
 unsigned long VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13;
 void *VAR_14;

 VAR_8 = &VAR_7->vio.drings[VAR_4];

 VAR_10 = sizeof(struct vio_net_desc) +
        sizeof(struct ldc_trans_cookie) * 2;
 if (FUNC_5(&VAR_7->vio, 1, 7))
  VAR_10 += sizeof(struct vio_net_dext);
 VAR_9 = VAR_6 * VAR_10;

 VAR_13 = VAR_5;
 VAR_14 = FUNC_2(VAR_7->vio.lp, VAR_9,
        VAR_8->cookies, &VAR_13,
        (VAR_2 |
         VAR_0 |
         VAR_1));
 if (FUNC_0(VAR_14)) {
  VAR_12 = FUNC_1(VAR_14);
  goto err_out;
 }

 VAR_8->base = VAR_14;
 VAR_8->entry_size = VAR_10;
 VAR_8->num_entries = VAR_6;
 VAR_8->prod = 0;
 VAR_8->cons = 0;
 VAR_7->start_cons = 1;
 VAR_8->pending = VAR_6;
 VAR_8->ncookies = VAR_13;

 for (VAR_11 = 0; VAR_11 < VAR_6; ++VAR_11) {
  struct vio_net_desc *VAR_15;

  VAR_15 = FUNC_4(VAR_8, VAR_11);
  VAR_15->hdr.state = VAR_3;
 }
 return 0;

err_out:
 FUNC_3(VAR_7);

 return VAR_12;
}

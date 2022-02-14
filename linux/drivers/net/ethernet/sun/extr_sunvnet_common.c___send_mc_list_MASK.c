
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnet_port {int vio; } ;
struct vnet_mcast_entry {int sent; struct vnet_mcast_entry* next; int addr; scalar_t__ hit; } ;
struct vnet {struct vnet_mcast_entry* mcast_list; } ;
struct TYPE_2__ {int sid; int stype_env; int stype; int type; } ;
struct vio_net_mcast_info {int set; int count; int * mcast_addr; TYPE_1__ tag; } ;
typedef int info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vnet_mcast_entry*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct vio_net_mcast_info*,int ,int) ;
 int FUNC_3 (int *,struct vio_net_mcast_info*,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct vnet *VAR_5, struct vnet_port *VAR_6)
{
 struct vio_net_mcast_info VAR_7;
 struct vnet_mcast_entry *VAR_8, **VAR_9;
 int VAR_10;

 FUNC_2(&VAR_7, 0, sizeof(VAR_7));

 VAR_7.tag.type = VAR_2;
 VAR_7.tag.stype = VAR_1;
 VAR_7.tag.stype_env = VAR_3;
 VAR_7.tag.sid = FUNC_4(&VAR_6->vio);
 VAR_7.set = 1;

 VAR_10 = 0;
 for (VAR_8 = VAR_5->mcast_list; VAR_8; VAR_8 = VAR_8->next) {
  if (VAR_8->sent)
   continue;
  VAR_8->sent = 1;
  FUNC_1(&VAR_7.mcast_addr[VAR_10 * VAR_0],
         VAR_8->addr, VAR_0);
  if (++VAR_10 == VAR_4) {
   VAR_7.count = VAR_10;

   (void)FUNC_3(&VAR_6->vio, &VAR_7,
        sizeof(VAR_7));
   VAR_10 = 0;
  }
 }
 if (VAR_10) {
  VAR_7.count = VAR_10;
  (void)FUNC_3(&VAR_6->vio, &VAR_7, sizeof(VAR_7));
 }

 VAR_7.set = 0;

 VAR_10 = 0;
 VAR_9 = &VAR_5->mcast_list;
 while ((VAR_8 = *VAR_9) != ((void*)0)) {
  if (VAR_8->hit) {
   VAR_8->hit = 0;
   VAR_9 = &VAR_8->next;
   continue;
  }

  FUNC_1(&VAR_7.mcast_addr[VAR_10 * VAR_0],
         VAR_8->addr, VAR_0);
  if (++VAR_10 == VAR_4) {
   VAR_7.count = VAR_10;
   (void)FUNC_3(&VAR_6->vio, &VAR_7,
        sizeof(VAR_7));
   VAR_10 = 0;
  }

  *VAR_9 = VAR_8->next;
  FUNC_0(VAR_8);
 }
 if (VAR_10) {
  VAR_7.count = VAR_10;
  (void)FUNC_3(&VAR_6->vio, &VAR_7, sizeof(VAR_7));
 }
}

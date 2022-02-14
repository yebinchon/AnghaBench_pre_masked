
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vnet_mcast_entry {int addr; struct vnet_mcast_entry* next; } ;
struct vnet {struct vnet_mcast_entry* mcast_list; } ;


 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static struct vnet_mcast_entry *FUNC_1(struct vnet *VAR_0, u8 *VAR_1)
{
 struct vnet_mcast_entry *VAR_2;

 for (VAR_2 = VAR_0->mcast_list; VAR_2; VAR_2 = VAR_2->next) {
  if (FUNC_0(VAR_2->addr, VAR_1))
   return VAR_2;
 }
 return ((void*)0);
}

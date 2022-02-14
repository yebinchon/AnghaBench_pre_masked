
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct flowi6 {int flowi6_oif; int daddr; int saddr; } ;
struct dst_entry {scalar_t__ error; } ;
struct cxgb4_lld_info {int dummy; } ;
typedef int fl6 ;
typedef int __u8 ;
typedef int __u32 ;
typedef int __be16 ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {TYPE_2__* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct cxgb4_lld_info*,struct net_device* (*) (struct net_device*),TYPE_2__*) ;
 int FUNC_2 (struct dst_entry*) ;
 int VAR_3 ;
 TYPE_1__* FUNC_3 (struct dst_entry*) ;
 struct dst_entry* FUNC_4 (int *,int *,struct flowi6*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (struct flowi6*,int ,int) ;

struct dst_entry *
FUNC_8(struct cxgb4_lld_info *VAR_4,
   struct net_device *(*VAR_5)(struct net_device *),
   __u8 *VAR_6, __u8 *VAR_7, __be16 VAR_8,
   __be16 VAR_9, u8 VAR_10, __u32 VAR_11)
{
 struct dst_entry *VAR_12 = ((void*)0);

 if (FUNC_0(VAR_0)) {
  struct flowi6 VAR_13;

  FUNC_7(&VAR_13, 0, sizeof(VAR_13));
  FUNC_6(&VAR_13, VAR_7, 16);
  FUNC_6(&VAR_13, VAR_6, 16);
  if (FUNC_5(&VAR_13) & VAR_2)
   VAR_13 = VAR_11;
  VAR_12 = FUNC_4(&VAR_3, ((void*)0), &VAR_13);
  if (VAR_12->error ||
      (!FUNC_1(VAR_4, VAR_5,
      FUNC_3(VAR_12)->dev) &&
       !(FUNC_3(VAR_12)->dev->flags & VAR_1))) {
   FUNC_2(VAR_12);
   return ((void*)0);
  }
 }

 return VAR_12;
}

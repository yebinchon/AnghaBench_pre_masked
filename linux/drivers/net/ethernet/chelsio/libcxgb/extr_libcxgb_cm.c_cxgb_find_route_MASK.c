
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dst_entry {int dummy; } ;
struct rtable {struct dst_entry dst; } ;
struct neighbour {TYPE_1__* dev; } ;
struct flowi4 {int dummy; } ;
struct cxgb4_lld_info {int dummy; } ;
typedef int __be32 ;
typedef int __be16 ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct rtable*) ;
 int FUNC_1 (struct cxgb4_lld_info*,struct net_device* (*) (struct net_device*),TYPE_1__*) ;
 struct neighbour* FUNC_2 (struct dst_entry*,int *) ;
 int FUNC_3 (struct dst_entry*) ;
 int VAR_2 ;
 struct rtable* FUNC_4 (int *,struct flowi4*,int *,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct neighbour*) ;

struct dst_entry *
FUNC_6(struct cxgb4_lld_info *VAR_3,
  struct net_device *(*VAR_4)(struct net_device *),
  __be32 VAR_5, __be32 VAR_6, __be16 VAR_7,
  __be16 VAR_8, u8 VAR_9)
{
 struct rtable *VAR_10;
 struct flowi4 VAR_11;
 struct neighbour *VAR_12;

 VAR_10 = FUNC_4(&VAR_2, &VAR_11, ((void*)0), VAR_6, VAR_5,
       VAR_8, VAR_7, VAR_1,
       VAR_9, 0);
 if (FUNC_0(VAR_10))
  return ((void*)0);
 VAR_12 = FUNC_2(&VAR_10->dst, &VAR_6);
 if (!VAR_12)
  return ((void*)0);
 if (!FUNC_1(VAR_3, VAR_4, VAR_12->dev) &&
     !(VAR_12->dev->flags & VAR_0)) {
  FUNC_5(VAR_12);
  FUNC_3(&VAR_10->dst);
  return ((void*)0);
 }
 FUNC_5(VAR_12);
 return &VAR_10->dst;
}

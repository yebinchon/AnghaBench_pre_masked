
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct neighbour {int nud_state; int lock; int ha; int dead; } ;
struct neigh_table {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct neighbour*) ;
 int VAR_2 ;
 int FUNC_1 (struct neighbour*) ;
 int FUNC_2 (unsigned char*,int ,int ) ;
 struct neighbour* FUNC_3 (struct neigh_table*,void const*,struct net_device*) ;
 int FUNC_4 (struct neighbour*,int *) ;
 struct neighbour* FUNC_5 (struct neigh_table*,void const*,struct net_device*) ;
 int FUNC_6 (struct neighbour*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct neigh_table *VAR_3,
         const void *VAR_4,
         struct net_device *VAR_5,
         unsigned char VAR_6[VAR_1])
{
 struct neighbour *VAR_7 = FUNC_5(VAR_3, VAR_4, VAR_5);
 int VAR_8 = 0;

 if (!VAR_7) {
  VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_5);
  if (FUNC_0(VAR_7))
   return FUNC_1(VAR_7);
 }

 FUNC_4(VAR_7, ((void*)0));

 FUNC_7(&VAR_7->lock);
 if ((VAR_7->nud_state & VAR_2) && !VAR_7->dead)
  FUNC_2(VAR_6, VAR_7->ha, VAR_1);
 else
  VAR_8 = -VAR_0;
 FUNC_8(&VAR_7->lock);

 FUNC_6(VAR_7);
 return VAR_8;
}

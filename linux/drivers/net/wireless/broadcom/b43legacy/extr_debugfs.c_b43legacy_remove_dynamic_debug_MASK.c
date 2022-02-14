
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43legacy_wldev {struct b43legacy_dfsentry* dfsentry; } ;
struct b43legacy_dfsentry {int * dyn_debug_dentries; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct b43legacy_wldev *VAR_1)
{
 struct b43legacy_dfsentry *VAR_2 = VAR_1->dfsentry;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(VAR_2->dyn_debug_dentries[VAR_3]);
}

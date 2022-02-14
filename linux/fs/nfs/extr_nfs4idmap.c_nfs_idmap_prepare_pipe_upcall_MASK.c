
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idmap_legacy_upcalldata {int dummy; } ;
struct idmap {struct idmap_legacy_upcalldata* idmap_upcall_data; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static bool
FUNC_1(struct idmap *VAR_0,
  struct idmap_legacy_upcalldata *VAR_1)
{
 if (VAR_0->idmap_upcall_data != ((void*)0)) {
  FUNC_0(1);
  return 0;
 }
 VAR_0->idmap_upcall_data = VAR_1;
 return 1;
}

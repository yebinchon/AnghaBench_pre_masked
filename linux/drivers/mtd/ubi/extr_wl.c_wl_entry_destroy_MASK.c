
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_wl_entry {size_t pnum; } ;
struct ubi_device {int ** lookuptbl; } ;


 int FUNC_0 (int ,struct ubi_wl_entry*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct ubi_device *VAR_1, struct ubi_wl_entry *VAR_2)
{
 VAR_1->lookuptbl[VAR_2->pnum] = ((void*)0);
 FUNC_0(VAR_0, VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_work {int vol_id; int lnum; int torture; struct ubi_wl_entry* e; } ;
struct ubi_wl_entry {int pnum; } ;
struct ubi_device {int dummy; } ;


 int FUNC_0 (struct ubi_device*,struct ubi_work*) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(struct ubi_device *VAR_0, struct ubi_wl_entry *VAR_1,
    int VAR_2, int VAR_3, int VAR_4)
{
 struct ubi_work VAR_5;

 FUNC_1("sync erase of PEB %i", VAR_1->pnum);

 VAR_5.e = VAR_1;
 VAR_5.vol_id = VAR_2;
 VAR_5.lnum = VAR_3;
 VAR_5.torture = VAR_4;

 return FUNC_0(VAR_0, &VAR_5);
}

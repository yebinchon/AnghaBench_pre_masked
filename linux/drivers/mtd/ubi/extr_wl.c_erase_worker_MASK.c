
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_work {struct ubi_wl_entry* e; } ;
struct ubi_wl_entry {int ec; int pnum; } ;
struct ubi_device {int dummy; } ;


 int FUNC_0 (struct ubi_device*,struct ubi_work*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (struct ubi_work*) ;
 int FUNC_3 (struct ubi_device*,struct ubi_wl_entry*) ;

__attribute__((used)) static int FUNC_4(struct ubi_device *VAR_0, struct ubi_work *VAR_1,
     int VAR_2)
{
 int VAR_3;

 if (VAR_2) {
  struct ubi_wl_entry *VAR_4 = VAR_1->e;

  FUNC_1("cancel erasure of PEB %d EC %d", VAR_4->pnum, VAR_4->ec);
  FUNC_2(VAR_1);
  FUNC_3(VAR_0, VAR_4);
  return 0;
 }

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(VAR_1);
 return VAR_3;
}

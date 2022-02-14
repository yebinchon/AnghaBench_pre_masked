
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_wl_entry {int ec; int pnum; } ;
struct ubi_device {int dummy; } ;
struct rb_root {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct ubi_wl_entry*,struct rb_root*) ;
 int FUNC_2 (struct ubi_device const*) ;
 int FUNC_3 (struct ubi_device const*,char*,int ,int ,struct rb_root*) ;

__attribute__((used)) static int FUNC_4(const struct ubi_device *VAR_1,
     struct ubi_wl_entry *VAR_2, struct rb_root *VAR_3)
{
 if (!FUNC_2(VAR_1))
  return 0;

 if (FUNC_1(VAR_2, VAR_3))
  return 0;

 FUNC_3(VAR_1, "self-check failed for PEB %d, EC %d, RB-tree %p ",
  VAR_2->pnum, VAR_2->ec, VAR_3);
 FUNC_0();
 return -VAR_0;
}

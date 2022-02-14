
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_wl_entry {int ec; int pnum; } ;
struct ubi_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct ubi_device const*,struct ubi_wl_entry*) ;
 int FUNC_2 (struct ubi_device const*) ;
 int FUNC_3 (struct ubi_device const*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_4(const struct ubi_device *VAR_1,
       struct ubi_wl_entry *VAR_2)
{
 if (!FUNC_2(VAR_1))
  return 0;

 if (FUNC_1(VAR_1, VAR_2))
  return 0;

 FUNC_3(VAR_1, "self-check failed for PEB %d, EC %d, Protect queue",
  VAR_2->pnum, VAR_2->ec);
 FUNC_0();
 return -VAR_0;
}

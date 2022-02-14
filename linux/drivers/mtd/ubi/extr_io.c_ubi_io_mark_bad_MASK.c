
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_device {int peb_count; int peb_size; int bad_allowed; scalar_t__ ro_mode; struct mtd_info* mtd; } ;
struct mtd_info {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_info*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ubi_device const*,char*,...) ;

int FUNC_3(const struct ubi_device *VAR_1, int VAR_2)
{
 int VAR_3;
 struct mtd_info *VAR_4 = VAR_1->mtd;

 FUNC_1(VAR_2 >= 0 && VAR_2 < VAR_1->peb_count);

 if (VAR_1->ro_mode) {
  FUNC_2(VAR_1, "read-only mode");
  return -VAR_0;
 }

 if (!VAR_1->bad_allowed)
  return 0;

 VAR_3 = FUNC_0(VAR_4, (loff_t)VAR_2 * VAR_1->peb_size);
 if (VAR_3)
  FUNC_2(VAR_1, "cannot mark PEB %d bad, error %d", VAR_2, VAR_3);
 return VAR_3;
}

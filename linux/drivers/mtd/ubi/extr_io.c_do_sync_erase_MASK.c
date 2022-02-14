
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_device {int peb_count; int peb_size; int mtd; scalar_t__ ro_mode; } ;
struct erase_info {int addr; int len; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct erase_info*,int ,int) ;
 int FUNC_3 (int ,struct erase_info*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct ubi_device*) ;
 int FUNC_6 (struct ubi_device*,char*,...) ;
 int FUNC_7 (struct ubi_device*,int,int ,int) ;
 int FUNC_8 (struct ubi_device*,char*,int,int) ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct ubi_device *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6 = 0;
 struct erase_info VAR_7;

 FUNC_0("erase PEB %d", VAR_4);
 FUNC_4(VAR_4 >= 0 && VAR_4 < VAR_3->peb_count);

 if (VAR_3->ro_mode) {
  FUNC_6(VAR_3, "read-only mode");
  return -VAR_1;
 }

retry:
 FUNC_2(&VAR_7, 0, sizeof(struct erase_info));

 VAR_7.addr = (loff_t)VAR_4 * VAR_3->peb_size;
 VAR_7.len = VAR_3->peb_size;

 VAR_5 = FUNC_3(VAR_3->mtd, &VAR_7);
 if (VAR_5) {
  if (VAR_6++ < VAR_2) {
   FUNC_8(VAR_3, "error %d while erasing PEB %d, retry",
     VAR_5, VAR_4);
   FUNC_9();
   goto retry;
  }
  FUNC_6(VAR_3, "cannot erase PEB %d, error %d", VAR_4, VAR_5);
  FUNC_1();
  return VAR_5;
 }

 VAR_5 = FUNC_7(VAR_3, VAR_4, 0, VAR_3->peb_size);
 if (VAR_5)
  return VAR_5;

 if (FUNC_5(VAR_3)) {
  FUNC_6(VAR_3, "cannot erase PEB %d (emulated)", VAR_4);
  return -VAR_0;
 }

 return 0;
}

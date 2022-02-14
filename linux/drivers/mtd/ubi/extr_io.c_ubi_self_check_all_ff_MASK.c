
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_device {int peb_size; int mtd; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int,int,size_t*,void*) ;
 int FUNC_4 (int ,char*,int ,int,int,void*,int,int) ;
 int FUNC_5 (void*,int,int) ;
 int FUNC_6 (struct ubi_device*) ;
 int FUNC_7 (struct ubi_device*,char*,...) ;
 int FUNC_8 (struct ubi_device*,char*,int,int) ;
 int FUNC_9 (void*) ;

int FUNC_10(struct ubi_device *VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 size_t VAR_9;
 int VAR_10;
 void *VAR_11;
 loff_t VAR_12 = (loff_t)VAR_6 * VAR_5->peb_size + VAR_7;

 if (!FUNC_6(VAR_5))
  return 0;

 VAR_11 = FUNC_0(VAR_8, VAR_2, VAR_4);
 if (!VAR_11) {
  FUNC_7(VAR_5, "cannot allocate memory to check for 0xFFs");
  return 0;
 }

 VAR_10 = FUNC_3(VAR_5->mtd, VAR_12, VAR_8, &VAR_9, VAR_11);
 if (VAR_10 && !FUNC_2(VAR_10)) {
  FUNC_7(VAR_5, "err %d while reading %d bytes from PEB %d:%d, read %zd bytes",
   VAR_10, VAR_8, VAR_6, VAR_7, VAR_9);
  goto error;
 }

 VAR_10 = FUNC_5(VAR_11, 0xFF, VAR_8);
 if (VAR_10 == 0) {
  FUNC_7(VAR_5, "flash region at PEB %d:%d, length %d does not contain all 0xFF bytes",
   VAR_6, VAR_7, VAR_8);
  goto fail;
 }

 FUNC_9(VAR_11);
 return 0;

fail:
 FUNC_7(VAR_5, "self-check failed for PEB %d", VAR_6);
 FUNC_8(VAR_5, "hex dump of the %d-%d region", VAR_7, VAR_7 + VAR_8);
 FUNC_4(VAR_3, "", VAR_0, 32, 1, VAR_11, VAR_8, 1);
 VAR_10 = -VAR_1;
error:
 FUNC_1();
 FUNC_9(VAR_11);
 return VAR_10;
}

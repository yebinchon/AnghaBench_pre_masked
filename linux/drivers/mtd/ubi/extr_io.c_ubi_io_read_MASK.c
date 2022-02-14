
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ubi_device {int peb_count; int peb_size; int mtd; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,int,int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,int,int,size_t*,void*) ;
 int FUNC_6 (struct ubi_device const*,int) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (struct ubi_device const*) ;
 int FUNC_9 (struct ubi_device const*,char*,int,char const*,int,int,int,size_t) ;
 int FUNC_10 (struct ubi_device const*,char*,int) ;
 int FUNC_11 (struct ubi_device const*,char*,int,char const*,int,int,int,size_t) ;
 int FUNC_12 () ;

int FUNC_13(const struct ubi_device *VAR_3, void *VAR_4, int VAR_5, int VAR_6,
  int VAR_7)
{
 int VAR_8, VAR_9 = 0;
 size_t VAR_10;
 loff_t VAR_11;

 FUNC_1("read %d bytes from PEB %d:%d", VAR_7, VAR_5, VAR_6);

 FUNC_7(VAR_5 >= 0 && VAR_5 < VAR_3->peb_count);
 FUNC_7(VAR_6 >= 0 && VAR_6 + VAR_7 <= VAR_3->peb_size);
 FUNC_7(VAR_7 > 0);

 VAR_8 = FUNC_6(VAR_3, VAR_5);
 if (VAR_8)
  return VAR_8;
 *((uint8_t *)VAR_4) ^= 0xFF;

 VAR_11 = (loff_t)VAR_5 * VAR_3->peb_size + VAR_6;
retry:
 VAR_8 = FUNC_5(VAR_3->mtd, VAR_11, VAR_7, &VAR_10, VAR_4);
 if (VAR_8) {
  const char *VAR_12 = FUNC_4(VAR_8) ? " (ECC error)" : "";

  if (FUNC_3(VAR_8)) {
   FUNC_10(VAR_3, "fixable bit-flip detected at PEB %d",
    VAR_5);
   FUNC_7(VAR_7 == VAR_10);
   return VAR_1;
  }

  if (VAR_9++ < VAR_2) {
   FUNC_11(VAR_3, "error %d%s while reading %d bytes from PEB %d:%d, read only %zd bytes, retry",
     VAR_8, VAR_12, VAR_7, VAR_5, VAR_6, VAR_10);
   FUNC_12();
   goto retry;
  }

  FUNC_9(VAR_3, "error %d%s while reading %d bytes from PEB %d:%d, read %zd bytes",
   VAR_8, VAR_12, VAR_7, VAR_5, VAR_6, VAR_10);
  FUNC_2();






  if (VAR_10 != VAR_7 && FUNC_4(VAR_8)) {
   FUNC_7(0);
   VAR_8 = -VAR_0;
  }
 } else {
  FUNC_7(VAR_7 == VAR_10);

  if (FUNC_8(VAR_3)) {
   FUNC_0("bit-flip (emulated)");
   VAR_8 = VAR_1;
  }
 }

 return VAR_8;
}

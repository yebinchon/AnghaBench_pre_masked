
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_device {int peb_count; int peb_size; int hdrs_min_io_size; int leb_start; int mtd; scalar_t__ ro_mode; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int,int,size_t*,void const*) ;
 int FUNC_3 (struct ubi_device*,int) ;
 int FUNC_4 (struct ubi_device*,int) ;
 int FUNC_5 (struct ubi_device*,int) ;
 int FUNC_6 (struct ubi_device*,void const*,int,int,int) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (struct ubi_device*) ;
 int FUNC_9 (struct ubi_device*,int,int,int) ;
 int FUNC_10 (struct ubi_device*,char*,...) ;
 int FUNC_11 (struct ubi_device*,int,int,int) ;

int FUNC_12(struct ubi_device *VAR_2, const void *VAR_3, int VAR_4, int VAR_5,
   int VAR_6)
{
 int VAR_7;
 size_t VAR_8;
 loff_t VAR_9;

 FUNC_0("write %d bytes to PEB %d:%d", VAR_6, VAR_4, VAR_5);

 FUNC_7(VAR_4 >= 0 && VAR_4 < VAR_2->peb_count);
 FUNC_7(VAR_5 >= 0 && VAR_5 + VAR_6 <= VAR_2->peb_size);
 FUNC_7(VAR_5 % VAR_2->hdrs_min_io_size == 0);
 FUNC_7(VAR_6 > 0 && VAR_6 % VAR_2->hdrs_min_io_size == 0);

 if (VAR_2->ro_mode) {
  FUNC_10(VAR_2, "read-only mode");
  return -VAR_1;
 }

 VAR_7 = FUNC_3(VAR_2, VAR_4);
 if (VAR_7)
  return VAR_7;


 VAR_7 = FUNC_11(VAR_2, VAR_4, VAR_5, VAR_6);
 if (VAR_7)
  return VAR_7;

 if (VAR_5 >= VAR_2->leb_start) {




  VAR_7 = FUNC_4(VAR_2, VAR_4);
  if (VAR_7)
   return VAR_7;
  VAR_7 = FUNC_5(VAR_2, VAR_4);
  if (VAR_7)
   return VAR_7;
 }

 if (FUNC_8(VAR_2)) {
  FUNC_10(VAR_2, "cannot write %d bytes to PEB %d:%d (emulated)",
   VAR_6, VAR_4, VAR_5);
  FUNC_1();
  return -VAR_0;
 }

 VAR_9 = (loff_t)VAR_4 * VAR_2->peb_size + VAR_5;
 VAR_7 = FUNC_2(VAR_2->mtd, VAR_9, VAR_6, &VAR_8, VAR_3);
 if (VAR_7) {
  FUNC_10(VAR_2, "error %d while writing %d bytes to PEB %d:%d, written %zd bytes",
   VAR_7, VAR_6, VAR_4, VAR_5, VAR_8);
  FUNC_1();
  FUNC_9(VAR_2, VAR_4, VAR_5, VAR_6);
 } else
  FUNC_7(VAR_8 == VAR_6);

 if (!VAR_7) {
  VAR_7 = FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
  if (VAR_7)
   return VAR_7;





  VAR_5 += VAR_6;
  VAR_6 = VAR_2->peb_size - VAR_5;
  if (VAR_6)
   VAR_7 = FUNC_11(VAR_2, VAR_4, VAR_5, VAR_6);
 }

 return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_device {int peb_size; int mtd; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int,size_t*,void*) ;
 int FUNC_1 (int ,char*,int ,int,int,void*,int,int) ;
 int FUNC_2 (struct ubi_device*,char*,int,int,int,int,size_t) ;
 int FUNC_3 (struct ubi_device*,char*,int,int,int) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (int) ;

void FUNC_6(struct ubi_device *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7;
 size_t VAR_8;
 void *VAR_9;
 loff_t VAR_10 = (loff_t)VAR_4 * VAR_3->peb_size + VAR_5;

 VAR_9 = FUNC_5(VAR_6);
 if (!VAR_9)
  return;
 VAR_7 = FUNC_0(VAR_3->mtd, VAR_10, VAR_6, &VAR_8, VAR_9);
 if (VAR_7 && VAR_7 != -VAR_1) {
  FUNC_2(VAR_3, "err %d while reading %d bytes from PEB %d:%d, read %zd bytes",
   VAR_7, VAR_6, VAR_4, VAR_5, VAR_8);
  goto out;
 }

 FUNC_3(VAR_3, "dumping %d bytes of data from PEB %d, offset %d",
  VAR_6, VAR_4, VAR_5);
 FUNC_1(VAR_2, "", VAR_0, 32, 1, VAR_9, VAR_6, 1);
out:
 FUNC_4(VAR_9);
 return;
}

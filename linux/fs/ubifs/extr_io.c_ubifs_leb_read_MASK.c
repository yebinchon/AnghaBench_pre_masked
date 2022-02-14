
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int ubi; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int,void*,int,int) ;
 int FUNC_2 (struct ubifs_info const*,char*,int,int,int,int) ;

int FUNC_3(const struct ubifs_info *VAR_1, int VAR_2, void *VAR_3, int VAR_4,
     int VAR_5, int VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_1(VAR_1->ubi, VAR_2, VAR_3, VAR_4, VAR_5);




 if (VAR_7 && (VAR_7 != -VAR_0 || VAR_6)) {
  FUNC_2(VAR_1, "reading %d bytes from LEB %d:%d failed, error %d",
     VAR_5, VAR_2, VAR_4, VAR_7);
  FUNC_0();
 }
 return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int ubi; scalar_t__ ro_error; int ro_mount; int ro_media; } ;


 int VAR_0 ;
 int FUNC_0 (struct ubifs_info*) ;
 int FUNC_1 (struct ubifs_info*,int,void const*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int,void const*,int) ;
 int FUNC_4 (struct ubifs_info*,int) ;
 int FUNC_5 (struct ubifs_info*,char*,int,int,int) ;
 int FUNC_6 (struct ubifs_info*,int) ;

int FUNC_7(struct ubifs_info *VAR_1, int VAR_2, const void *VAR_3, int VAR_4)
{
 int VAR_5;

 FUNC_4(VAR_1, !VAR_1->ro_media && !VAR_1->ro_mount);
 if (VAR_1->ro_error)
  return -VAR_0;
 if (!FUNC_0(VAR_1))
  VAR_5 = FUNC_3(VAR_1->ubi, VAR_2, VAR_3, VAR_4);
 else
  VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_5) {
  FUNC_5(VAR_1, "changing %d bytes in LEB %d failed, error %d",
     VAR_4, VAR_2, VAR_5);
  FUNC_6(VAR_1, VAR_5);
  FUNC_2();
 }
 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int ubi; } ;


 int VAR_0 ;
 int FUNC_0 (struct ubifs_info*,void const*,int) ;
 scalar_t__ FUNC_1 (struct ubifs_info*) ;
 int FUNC_2 (struct ubifs_info*,int,int) ;
 int FUNC_3 (int ,int,void const*,int,int) ;
 int FUNC_4 (struct ubifs_info*,char*,int,int,int) ;

int FUNC_5(struct ubifs_info *VAR_1, int VAR_2, const void *VAR_3,
    int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;

 if (FUNC_1(VAR_1))
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_1, VAR_2, 1);
 if (VAR_7) {
  VAR_5 = FUNC_0(VAR_1, VAR_3, VAR_5);
  FUNC_4(VAR_1, "actually write %d bytes to LEB %d:%d (the buffer was corrupted)",
      VAR_5, VAR_2, VAR_4);
 }
 VAR_6 = FUNC_3(VAR_1->ubi, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;
 if (VAR_7)
  return -VAR_0;
 return 0;
}

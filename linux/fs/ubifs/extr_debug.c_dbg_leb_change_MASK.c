
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int ubi; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ubifs_info*) ;
 scalar_t__ FUNC_1 (struct ubifs_info*,int,int) ;
 int FUNC_2 (int ,int,void const*,int) ;

int FUNC_3(struct ubifs_info *VAR_1, int VAR_2, const void *VAR_3,
     int VAR_4)
{
 int VAR_5;

 if (FUNC_0(VAR_1))
  return -VAR_0;
 if (FUNC_1(VAR_1, VAR_2, 1))
  return -VAR_0;
 VAR_5 = FUNC_2(VAR_1->ubi, VAR_2, VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;
 if (FUNC_1(VAR_1, VAR_2, 1))
  return -VAR_0;
 return 0;
}

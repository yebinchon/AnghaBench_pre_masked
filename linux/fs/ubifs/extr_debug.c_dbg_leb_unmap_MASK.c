
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int ubi; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ubifs_info*) ;
 scalar_t__ FUNC_1 (struct ubifs_info*,int,int ) ;
 int FUNC_2 (int ,int) ;

int FUNC_3(struct ubifs_info *VAR_1, int VAR_2)
{
 int VAR_3;

 if (FUNC_0(VAR_1))
  return -VAR_0;
 if (FUNC_1(VAR_1, VAR_2, 0))
  return -VAR_0;
 VAR_3 = FUNC_2(VAR_1->ubi, VAR_2);
 if (VAR_3)
  return VAR_3;
 if (FUNC_1(VAR_1, VAR_2, 0))
  return -VAR_0;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dentry; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,struct path*) ;
 int FUNC_2 (struct path*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_2 ;

int
FUNC_4(char *VAR_3)
{
 int VAR_4;
 struct path VAR_5;

 VAR_4 = FUNC_1(VAR_3, VAR_1, &VAR_5);
 if (VAR_4)
  return VAR_4;
 VAR_4 = -VAR_0;
 if (FUNC_0(VAR_5.dentry)) {
  FUNC_3(VAR_2, VAR_3);
  VAR_4 = 0;
 }
 FUNC_2(&VAR_5);
 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hyp_sysfs_attr {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_4(struct hyp_sysfs_attr *VAR_4, char *VAR_5)
{
 int VAR_6 = -VAR_0;
 char *VAR_7;

 VAR_7 = FUNC_2(VAR_3, VAR_1);
 if (VAR_7) {
  VAR_6 = FUNC_0(VAR_2, VAR_7);
  if (!VAR_6)
   VAR_6 = FUNC_3(VAR_5, "%s\n", VAR_7);
  FUNC_1(VAR_7);
 }

 return VAR_6;
}

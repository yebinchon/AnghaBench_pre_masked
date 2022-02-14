
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idmap {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int id_str ;
typedef int __u32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int,char const*,char*,size_t,struct idmap*) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(__u32 VAR_2, const char *VAR_3, char *VAR_4,
         size_t VAR_5, struct idmap *VAR_6)
{
 char VAR_7[VAR_1];
 int VAR_8;
 ssize_t VAR_9;

 VAR_8 = FUNC_1(VAR_2, VAR_7, sizeof(VAR_7));
 VAR_9 = FUNC_0(VAR_7, VAR_8, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_9 < 0)
  return -VAR_0;
 return VAR_9;
}

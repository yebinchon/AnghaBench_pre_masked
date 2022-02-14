
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct se_device {scalar_t__ creation_time; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,char*,int) ;
 struct se_device* FUNC_1 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_3,
  char *VAR_4)
{
 struct se_device *VAR_5 = FUNC_1(VAR_3);


 return FUNC_0(VAR_4, VAR_2, "%u\n", (u32)(((u32)VAR_5->creation_time -
    VAR_1) * 100 / VAR_0));
}

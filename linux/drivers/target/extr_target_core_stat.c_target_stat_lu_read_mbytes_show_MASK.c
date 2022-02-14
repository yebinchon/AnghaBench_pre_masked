
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_device {int read_bytes; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,char*,int) ;
 struct se_device* FUNC_2 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_3(struct config_item *VAR_1,
  char *VAR_2)
{
 struct se_device *VAR_3 = FUNC_2(VAR_1);


 return FUNC_1(VAR_2, VAR_0, "%lu\n",
   FUNC_0(&VAR_3->read_bytes) >> 20);
}

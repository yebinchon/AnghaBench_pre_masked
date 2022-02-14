
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwnode_handle {int dummy; } ;
struct device {int dummy; } ;


 struct fwnode_handle* FUNC_0 (struct device*,char*) ;
 struct fwnode_handle* FUNC_1 (int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static struct fwnode_handle *FUNC_2(struct device *VAR_1)
{
 struct fwnode_handle *VAR_2;

 VAR_2 = FUNC_0(VAR_1, "connector");
 if (!VAR_2)
  VAR_2 = FUNC_1(VAR_0, ((void*)0));

 return VAR_2;
}

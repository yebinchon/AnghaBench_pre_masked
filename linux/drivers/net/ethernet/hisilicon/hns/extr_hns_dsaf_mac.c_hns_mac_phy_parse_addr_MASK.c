
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fwnode_handle {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct fwnode_handle*,char*,int*) ;

__attribute__((used)) static int
FUNC_2(struct device *VAR_2, struct fwnode_handle *VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, "phy-addr", &VAR_4);
 if (VAR_5) {
  FUNC_0(VAR_2, "has invalid PHY address ret:%d\n", VAR_5);
  return VAR_5;
 }

 if (VAR_4 >= VAR_1) {
  FUNC_0(VAR_2, "PHY address %i is too large\n", VAR_4);
  return -VAR_0;
 }

 return VAR_4;
}

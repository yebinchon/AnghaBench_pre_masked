
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device_node {struct device_node* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device_node*,char*,int) ;

__attribute__((used)) static u8 FUNC_1(struct device_node *VAR_2)
{
 u8 VAR_3, VAR_4;




 VAR_3 = FUNC_0(VAR_2, "burst-sizes", 0xff);
 VAR_3 &= 0xff;
 VAR_4 = FUNC_0(VAR_2->parent, "burst-sizes", 0xff);

 if (VAR_4 != 0xff)
  VAR_3 &= VAR_4;
 if (VAR_3 == 0xff || (VAR_3 & VAR_0) == 0 ||
     (VAR_3 & VAR_1)==0)
  VAR_3 = (VAR_1 - 1);

 return VAR_3;
}

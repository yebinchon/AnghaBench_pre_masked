
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef enum xgene_enet_ring_cfgsize { ____Placeholder_xgene_enet_ring_cfgsize } xgene_enet_ring_cfgsize ;


 int VAR_0 ;





 int FUNC_0 (struct device*,char*,int) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_1,
        enum xgene_enet_ring_cfgsize VAR_2)
{
 int VAR_3 = -VAR_0;

 switch (VAR_2) {
 case 130:
  VAR_3 = 0x200;
  break;
 case 131:
  VAR_3 = 0x800;
  break;
 case 132:
  VAR_3 = 0x4000;
  break;
 case 128:
  VAR_3 = 0x10000;
  break;
 case 129:
  VAR_3 = 0x80000;
  break;
 default:
  FUNC_0(VAR_1, "Unsupported cfg ring size %d\n", VAR_2);
  break;
 }

 return VAR_3;
}

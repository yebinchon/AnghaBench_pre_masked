
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct cc770_priv {int cpu_interface; int control_normal_mode; int reg_base; } ;
struct TYPE_2__ {int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cc770_priv*,int ) ;
 int FUNC_1 (struct cc770_priv*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_2 (struct net_device*,char*,int ) ;
 struct cc770_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_8)
{
 struct cc770_priv *VAR_9 = FUNC_3(VAR_8);


 FUNC_1(VAR_9, VAR_5, VAR_1 | VAR_2 | VAR_3);

 FUNC_1(VAR_9, VAR_6, VAR_9->cpu_interface);





 if (FUNC_0(VAR_9, VAR_6) & VAR_0) {
  FUNC_2(VAR_8, "probing @0x%p failed (reset)\n",
       VAR_9->reg_base);
  return -VAR_4;
 }


 FUNC_1(VAR_9, VAR_7[1].data[1], 0x25);
 FUNC_1(VAR_9, VAR_7[2].data[3], 0x52);
 FUNC_1(VAR_9, VAR_7[10].data[6], 0xc3);
 if ((FUNC_0(VAR_9, VAR_7[1].data[1]) != 0x25) ||
     (FUNC_0(VAR_9, VAR_7[2].data[3]) != 0x52) ||
     (FUNC_0(VAR_9, VAR_7[10].data[6]) != 0xc3)) {
  FUNC_2(VAR_8, "probing @0x%p failed (pattern)\n",
       VAR_9->reg_base);
  return -VAR_4;
 }


 if (FUNC_0(VAR_9, VAR_5) & VAR_2)
  VAR_9->control_normal_mode |= VAR_2;

 return 0;
}

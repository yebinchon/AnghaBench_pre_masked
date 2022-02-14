
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_tc; } ;
struct qede_dev {int xdp_prog; TYPE_1__ dev_info; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct qede_dev*,int ,char*,int) ;
 int VAR_0 ;



 int FUNC_1 (struct qede_dev*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct qede_dev*) ;
 int FUNC_3 (struct qede_dev*) ;
 int VAR_6 ;
 struct qede_dev* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct qede_dev*,int) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_7, int VAR_8)
{
 struct qede_dev *VAR_9 = FUNC_4(VAR_7);
 int VAR_10 = VAR_3, VAR_11;

 switch (VAR_8) {
 case 129:
  for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++)
   if (FUNC_5(VAR_9, VAR_11))
    VAR_10--;


  VAR_10 += FUNC_3(VAR_9) * VAR_4 *
    VAR_9->dev_info.num_tc;


  VAR_10 += FUNC_2(VAR_9) * VAR_2;


  if (VAR_9->xdp_prog)
   VAR_10 += FUNC_2(VAR_9) * VAR_4;
  return VAR_10;

 case 130:
  return VAR_5;
 case 128:
  if (!FUNC_1(VAR_9))
   return VAR_1;
  else
   return 0;
 default:
  FUNC_0(VAR_9, VAR_6,
      "Unsupported stringset 0x%08x\n", VAR_8);
  return -VAR_0;
 }
}

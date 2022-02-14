
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct qede_dev {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct qede_dev*,int ,char*,int) ;
 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int) ;
 struct qede_dev* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct qede_dev*,int *) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_6, u32 VAR_7, u8 *VAR_8)
{
 struct qede_dev *VAR_9 = FUNC_2(VAR_6);

 switch (VAR_7) {
 case 129:
  FUNC_3(VAR_9, VAR_8);
  break;
 case 130:
  FUNC_1(VAR_8, VAR_4,
         VAR_0 * VAR_2);
  break;
 case 128:
  FUNC_1(VAR_8, VAR_5,
         VAR_0 * VAR_1);
  break;
 default:
  FUNC_0(VAR_9, VAR_3,
      "Unsupported stringset 0x%08x\n", VAR_7);
 }
}

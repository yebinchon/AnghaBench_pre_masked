
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct net_device*,int *) ;
 int FUNC_1 (struct net_device*,int *) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3, u32 VAR_4,
        u8 *VAR_5)
{
 switch (VAR_4) {
 case 128:
  FUNC_2(VAR_5, VAR_2,
         VAR_1 * VAR_0);
  break;
 case 129:
  FUNC_1(VAR_3, VAR_5);
  break;
 case 130:
  FUNC_0(VAR_3, VAR_5);
  break;
 default:
  break;
 }
}

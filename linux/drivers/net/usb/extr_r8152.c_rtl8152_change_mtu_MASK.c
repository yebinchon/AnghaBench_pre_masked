
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct r8152 {int version; int intf; int control; } ;
struct net_device {int mtu; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct r8152* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct r8152*,int ,int ,scalar_t__) ;
 int FUNC_6 (struct r8152*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_4, int VAR_5)
{
 struct r8152 *VAR_6 = FUNC_2(VAR_4);
 int VAR_7;

 switch (VAR_6->version) {
 case 130:
 case 129:
 case 128:
  VAR_4->mtu = VAR_5;
  return 0;
 default:
  break;
 }

 VAR_7 = FUNC_7(VAR_6->intf);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_0(&VAR_6->control);

 VAR_4->mtu = VAR_5;

 if (FUNC_4(VAR_4)) {
  u32 VAR_8 = VAR_5 + VAR_3 + VAR_0;

  FUNC_5(VAR_6, VAR_1, VAR_2, VAR_8);

  if (FUNC_3(VAR_4))
   FUNC_6(VAR_6);
 }

 FUNC_1(&VAR_6->control);

 FUNC_8(VAR_6->intf);

 return VAR_7;
}

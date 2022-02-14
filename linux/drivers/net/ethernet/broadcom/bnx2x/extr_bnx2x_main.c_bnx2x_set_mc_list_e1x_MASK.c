
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bnx2x_mcast_ramrod_params {int * mcast_obj; int * member_0; } ;
struct bnx2x {int mcast_obj; struct net_device* dev; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_mcast_ramrod_params*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_mcast_ramrod_params*,int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct bnx2x *VAR_3)
{
 FUNC_1(VAR_2);
 struct net_device *VAR_4 = VAR_3->dev;
 struct bnx2x_mcast_ramrod_params VAR_5 = {((void*)0)};
 int VAR_6 = 0;

 VAR_5.mcast_obj = &VAR_3->mcast_obj;


 VAR_6 = FUNC_2(VAR_3, &VAR_5, VAR_1);
 if (VAR_6 < 0) {
  FUNC_0("Failed to clear multicast configuration: %d\n", VAR_6);
  return VAR_6;
 }


 if (FUNC_5(VAR_4)) {
  VAR_6 = FUNC_4(VAR_3, &VAR_5, &VAR_2);
  if (VAR_6)
   return VAR_6;


  VAR_6 = FUNC_2(VAR_3, &VAR_5,
     VAR_0);
  if (VAR_6 < 0)
   FUNC_0("Failed to set a new multicast configuration: %d\n",
      VAR_6);

  FUNC_3(&VAR_2);
 }

 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct s2io_nic {int dev; } ;
struct net_device {int name; } ;
struct ethtool_test {int flags; } ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct s2io_nic* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct s2io_nic*,int*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct s2io_nic*,int*) ;
 scalar_t__ FUNC_6 (struct s2io_nic*,int*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct s2io_nic*,int*) ;
 int FUNC_9 (struct s2io_nic*) ;
 scalar_t__ FUNC_10 (struct s2io_nic*,int*) ;

__attribute__((used)) static void FUNC_11(struct net_device *VAR_3,
         struct ethtool_test *VAR_4,
         uint64_t *VAR_5)
{
 struct s2io_nic *VAR_6 = FUNC_1(VAR_3);
 int VAR_7 = FUNC_2(VAR_6->dev);

 if (VAR_4->flags == VAR_2) {

  if (VAR_7)
   FUNC_4(VAR_6->dev);

  if (FUNC_8(VAR_6, &VAR_5[0]))
   VAR_4->flags |= VAR_1;

  FUNC_9(VAR_6);

  if (FUNC_10(VAR_6, &VAR_5[3]))
   VAR_4->flags |= VAR_1;

  FUNC_9(VAR_6);

  if (FUNC_5(VAR_6, &VAR_5[1]))
   VAR_4->flags |= VAR_1;

  if (FUNC_3(VAR_6, &VAR_5[4]))
   VAR_4->flags |= VAR_1;

  if (VAR_7)
   FUNC_7(VAR_6->dev);

  VAR_5[2] = 0;
 } else {

  if (!VAR_7) {
   FUNC_0(VAR_0, "%s: is not up, cannot run test\n",
      VAR_3->name);
   VAR_5[0] = -1;
   VAR_5[1] = -1;
   VAR_5[2] = -1;
   VAR_5[3] = -1;
   VAR_5[4] = -1;
  }

  if (FUNC_6(VAR_6, &VAR_5[2]))
   VAR_4->flags |= VAR_1;

  VAR_5[0] = 0;
  VAR_5[1] = 0;
  VAR_5[3] = 0;
  VAR_5[4] = 0;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int mtu; } ;
struct bnad {int conf_mutex; int netdev; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct bnad*) ;
 int VAR_0 ;
 int FUNC_2 (struct bnad*,int) ;
 int FUNC_3 (struct bnad*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct bnad* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct net_device *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;
 struct bnad *VAR_5 = FUNC_6(VAR_1);
 u32 VAR_6 = 0, VAR_7, VAR_8;

 FUNC_4(&VAR_5->conf_mutex);

 VAR_4 = VAR_1->mtu;
 VAR_1->mtu = VAR_2;

 VAR_7 = FUNC_0(VAR_4);
 VAR_8 = FUNC_0(VAR_2);


 if (FUNC_1(VAR_5) &&
     FUNC_7(VAR_5->netdev)) {

  if ((VAR_7 <= 4096 && VAR_8 > 4096) ||
      (VAR_7 > 4096 && VAR_8 <= 4096))
   VAR_6 = FUNC_3(VAR_5);
 }




 VAR_3 = FUNC_2(VAR_5, VAR_8);
 if (VAR_3)
  VAR_3 = -VAR_0;

 FUNC_5(&VAR_5->conf_mutex);
 return VAR_3;
}

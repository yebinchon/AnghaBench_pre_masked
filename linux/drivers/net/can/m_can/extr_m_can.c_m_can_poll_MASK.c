
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct napi_struct {struct net_device* dev; } ;
struct m_can_classdev {int dummy; } ;


 int FUNC_0 (struct m_can_classdev*) ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct napi_struct*,int) ;
 struct m_can_classdev* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct napi_struct *VAR_0, int VAR_1)
{
 struct net_device *VAR_2 = VAR_0->dev;
 struct m_can_classdev *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_1);
 if (VAR_4 < VAR_1) {
  FUNC_2(VAR_0, VAR_4);
  FUNC_0(VAR_3);
 }

 return VAR_4;
}

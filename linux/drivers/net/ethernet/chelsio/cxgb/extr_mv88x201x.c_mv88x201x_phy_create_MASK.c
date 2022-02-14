
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct mdio_ops {int dummy; } ;
struct cphy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cphy*,struct net_device*,int,int *,struct mdio_ops const*) ;
 int FUNC_1 (struct cphy*,int ,int,int*) ;
 int FUNC_2 (struct cphy*,int ,int,int) ;
 struct cphy* FUNC_3 (int,int ) ;
 int FUNC_4 (struct cphy*) ;
 int VAR_4 ;

__attribute__((used)) static struct cphy *FUNC_5(struct net_device *VAR_5, int VAR_6,
      const struct mdio_ops *VAR_7)
{
 u32 VAR_8;
 struct cphy *VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_0);

 if (!VAR_9)
  return ((void*)0);

 FUNC_0(VAR_9, VAR_5, VAR_6, &VAR_4, VAR_7);


 FUNC_1(VAR_9, VAR_1, 0x8300, &VAR_8);
 FUNC_2(VAR_9, VAR_1, 0x8300, VAR_8 | 1);


 FUNC_1(VAR_9, VAR_2, VAR_3, &VAR_8);
 FUNC_1(VAR_9, VAR_1, VAR_3, &VAR_8);


 FUNC_4(VAR_9);
 return VAR_9;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_rdst {int dummy; } ;
struct vxlan_fdb {int dummy; } ;
struct vxlan_dev {int dev; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct net* FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct sk_buff*,struct net*,int ,int ,int *,int ) ;
 int FUNC_5 (struct net*,int ,int) ;
 int FUNC_6 (struct sk_buff*,struct vxlan_dev*,struct vxlan_fdb*,int ,int ,int,int ,struct vxlan_rdst*) ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct vxlan_dev *VAR_4, struct vxlan_fdb *VAR_5,
          struct vxlan_rdst *VAR_6, int VAR_7)
{
 struct net *VAR_8 = FUNC_1(VAR_4->dev);
 struct sk_buff *VAR_9;
 int VAR_10 = -VAR_1;

 VAR_9 = FUNC_3(FUNC_7(), VAR_2);
 if (VAR_9 == ((void*)0))
  goto errout;

 VAR_10 = FUNC_6(VAR_9, VAR_4, VAR_5, 0, 0, VAR_7, 0, VAR_6);
 if (VAR_10 < 0) {

  FUNC_0(VAR_10 == -VAR_0);
  FUNC_2(VAR_9);
  goto errout;
 }

 FUNC_4(VAR_9, VAR_8, 0, VAR_3, ((void*)0), VAR_2);
 return;
errout:
 if (VAR_10 < 0)
  FUNC_5(VAR_8, VAR_3, VAR_10);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dsa_switch {struct b53_device* priv; } ;
struct dsa_mall_mirror_tc_entry {int to_local_port; } ;
struct b53_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct b53_device*,int ,int ,int *) ;
 int FUNC_2 (struct b53_device*,int ,int ,int ) ;

int FUNC_3(struct dsa_switch *VAR_6, int VAR_7,
     struct dsa_mall_mirror_tc_entry *VAR_8, bool VAR_9)
{
 struct b53_device *VAR_10 = VAR_6->priv;
 u16 VAR_11, VAR_12;

 if (VAR_9)
  VAR_12 = VAR_1;
 else
  VAR_12 = VAR_0;

 FUNC_1(VAR_10, VAR_2, VAR_12, &VAR_11);
 VAR_11 |= FUNC_0(VAR_7);
 FUNC_2(VAR_10, VAR_2, VAR_12, VAR_11);

 FUNC_1(VAR_10, VAR_2, VAR_3, &VAR_11);
 VAR_11 &= ~VAR_4;
 VAR_11 |= VAR_8->to_local_port;
 VAR_11 |= VAR_5;
 FUNC_2(VAR_10, VAR_2, VAR_3, VAR_11);

 return 0;
}

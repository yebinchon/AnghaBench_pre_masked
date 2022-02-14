
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksz_device {int dummy; } ;
struct dsa_switch {struct ksz_device* priv; } ;
struct dsa_mall_mirror_tc_entry {int to_local_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ksz_device*,int ,int ,int) ;
 int FUNC_1 (struct ksz_device*,int,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct dsa_switch *VAR_6, int VAR_7,
       struct dsa_mall_mirror_tc_entry *VAR_8,
       bool VAR_9)
{
 struct ksz_device *VAR_10 = VAR_6->priv;

 if (VAR_9)
  FUNC_1(VAR_10, VAR_7, VAR_3, VAR_0, 1);
 else
  FUNC_1(VAR_10, VAR_7, VAR_3, VAR_2, 1);

 FUNC_1(VAR_10, VAR_7, VAR_3, VAR_1, 0);


 FUNC_1(VAR_10, VAR_8->to_local_port, VAR_3,
       VAR_1, 1);

 FUNC_0(VAR_10, VAR_5, VAR_4, 0);

 return 0;
}

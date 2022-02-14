
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ksz_device {int dummy; } ;
struct dsa_switch {struct ksz_device* priv; } ;
struct dsa_mall_mirror_tc_entry {int to_local_port; scalar_t__ ingress; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ksz_device*,int,int ,int,int) ;
 int FUNC_1 (struct ksz_device*,int,int ,int*) ;

__attribute__((used)) static void FUNC_2(struct dsa_switch *VAR_4, int VAR_5,
        struct dsa_mall_mirror_tc_entry *VAR_6)
{
 struct ksz_device *VAR_7 = VAR_4->priv;
 u8 VAR_8;

 if (VAR_6->ingress)
  FUNC_0(VAR_7, VAR_5, VAR_3, VAR_0, 0);
 else
  FUNC_0(VAR_7, VAR_5, VAR_3, VAR_2, 0);

 FUNC_1(VAR_7, VAR_5, VAR_3, &VAR_8);

 if (!(VAR_8 & (VAR_0 | VAR_2)))
  FUNC_0(VAR_7, VAR_6->to_local_port, VAR_3,
        VAR_1, 0);
}

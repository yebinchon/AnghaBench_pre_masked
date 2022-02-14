
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksz_device {int mirror_tx; int mirror_rx; } ;
struct dsa_switch {struct ksz_device* priv; } ;
struct dsa_mall_mirror_tc_entry {int to_local_port; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ksz_device*,int,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct dsa_switch *VAR_4, int VAR_5,
       struct dsa_mall_mirror_tc_entry *VAR_6,
       bool VAR_7)
{
 struct ksz_device *VAR_8 = VAR_4->priv;

 if (VAR_7) {
  FUNC_1(VAR_8, VAR_5, VAR_3, VAR_0, 1);
  VAR_8->mirror_rx |= FUNC_0(VAR_5);
 } else {
  FUNC_1(VAR_8, VAR_5, VAR_3, VAR_2, 1);
  VAR_8->mirror_tx |= FUNC_0(VAR_5);
 }

 FUNC_1(VAR_8, VAR_5, VAR_3, VAR_1, 0);


 if (VAR_8->mirror_rx || VAR_8->mirror_tx)
  FUNC_1(VAR_8, VAR_6->to_local_port, VAR_3,
        VAR_1, 1);

 return 0;
}

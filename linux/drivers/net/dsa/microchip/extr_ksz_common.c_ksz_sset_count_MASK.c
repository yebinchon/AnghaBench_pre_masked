
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksz_device {int mib_cnt; } ;
struct dsa_switch {struct ksz_device* priv; } ;


 int VAR_0 ;

int FUNC_0(struct dsa_switch *VAR_1, int VAR_2, int VAR_3)
{
 struct ksz_device *VAR_4 = VAR_1->priv;

 if (VAR_3 != VAR_0)
  return 0;

 return VAR_4->mib_cnt;
}

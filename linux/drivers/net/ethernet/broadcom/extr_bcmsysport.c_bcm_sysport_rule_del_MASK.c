
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct bcm_sysport_priv {scalar_t__* filters_loc; int filters; } ;


 int VAR_0 ;
 int FUNC_0 (struct bcm_sysport_priv*,int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct bcm_sysport_priv *VAR_1,
    u64 VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 < 0)
  return -VAR_0;




 FUNC_1(VAR_3, VAR_1->filters);
 VAR_1->filters_loc[VAR_3] = 0;

 return 0;
}

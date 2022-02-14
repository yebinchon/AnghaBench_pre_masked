
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_info {int capabilities; int phys_port; } ;
struct qlcnic_adapter {TYPE_1__* eswitch; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qlcnic_info*,int ,int) ;
 int FUNC_1 (struct qlcnic_adapter*,struct qlcnic_info*,int) ;

int FUNC_2(struct qlcnic_adapter *VAR_3,
     int VAR_4, int *VAR_5)
{
 struct qlcnic_info VAR_6;
 int VAR_7 = 0;

 FUNC_0(&VAR_6, 0, sizeof(struct qlcnic_info));

 VAR_7 = FUNC_1(VAR_3, &VAR_6, VAR_4);
 if (VAR_7)
  return VAR_7;

 if (VAR_6.capabilities & VAR_2)
  *VAR_5 = VAR_6.phys_port;
 else
  VAR_7 = -VAR_0;

 if (!VAR_7)
  VAR_3->eswitch[*VAR_5].flags |= VAR_1;

 return VAR_7;
}

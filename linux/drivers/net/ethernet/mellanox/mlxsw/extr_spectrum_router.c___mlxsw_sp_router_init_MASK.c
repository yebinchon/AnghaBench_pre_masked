
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct mlxsw_sp {int core; } ;
struct TYPE_3__ {int sysctl_ip_fwd_update_priority; } ;
struct TYPE_4__ {TYPE_1__ ipv4; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int ,int ,char*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7(struct mlxsw_sp *VAR_5)
{
 bool VAR_6 = VAR_3.ipv4.sysctl_ip_fwd_update_priority;
 char VAR_7[VAR_2];
 u64 VAR_8;
 int VAR_9;

 if (!FUNC_1(VAR_5->core, VAR_1))
  return -VAR_0;
 VAR_8 = FUNC_0(VAR_5->core, VAR_1);

 FUNC_4(VAR_7, 1, 1);
 FUNC_3(VAR_7, VAR_8);
 FUNC_5(VAR_7, VAR_6);
 VAR_9 = FUNC_6(VAR_5->core, FUNC_2(VAR_4), VAR_7);
 if (VAR_9)
  return VAR_9;
 return 0;
}

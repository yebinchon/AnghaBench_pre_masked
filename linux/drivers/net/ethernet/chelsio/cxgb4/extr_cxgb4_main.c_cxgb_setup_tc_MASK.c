
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_info {int dummy; } ;
struct net_device {int dummy; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int *,int ,struct port_info*,struct net_device*,int) ;
 struct port_info* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3, enum tc_setup_type VAR_4,
    void *VAR_5)
{
 struct port_info *VAR_6 = FUNC_1(VAR_3);

 switch (VAR_4) {
 case 128:
  return FUNC_0(VAR_5,
        &VAR_1,
        VAR_2,
        VAR_6, VAR_3, 1);
 default:
  return -VAR_0;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct net_device {int dummy; } ;
typedef enum cxgb4_bar2_qtype { ____Placeholder_cxgb4_bar2_qtype } cxgb4_bar2_qtype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,unsigned int,int ,int,int *,unsigned int*) ;

int FUNC_2(struct net_device *VAR_3,
    unsigned int VAR_4,
    enum cxgb4_bar2_qtype VAR_5,
    int VAR_6,
    u64 *VAR_7,
    unsigned int *VAR_8)
{
 return FUNC_1(FUNC_0(VAR_3),
     VAR_4,
     (VAR_5 == VAR_0
      ? VAR_1
      : VAR_2),
     VAR_6,
     VAR_7,
     VAR_8);
}

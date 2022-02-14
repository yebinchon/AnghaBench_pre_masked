
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct iavf_adapter {int aq_required; int current_op; } ;
typedef int caps ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct iavf_adapter*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct iavf_adapter*,int ,int *,int) ;

int FUNC_2(struct iavf_adapter *VAR_13)
{
 u32 VAR_14;

 VAR_14 = VAR_5 |
        VAR_9 |
        VAR_7 |
        VAR_10 |
        VAR_11 |
        VAR_12 |
        VAR_8 |
        VAR_3 |
        VAR_4 |
        VAR_6 |
        VAR_2;

 VAR_13->current_op = VAR_1;
 VAR_13->aq_required &= ~VAR_0;
 if (FUNC_0(VAR_13))
  return FUNC_1(VAR_13, VAR_1,
     (u8 *)&VAR_14, sizeof(VAR_14));
 else
  return FUNC_1(VAR_13, VAR_1,
     ((void*)0), 0);
}

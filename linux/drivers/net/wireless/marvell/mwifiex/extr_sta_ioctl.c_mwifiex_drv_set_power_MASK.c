
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct mwifiex_private {struct mwifiex_adapter* adapter; } ;
struct mwifiex_adapter {int ps_mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mwifiex_private*,int ,scalar_t__,int ,int *,int) ;

int FUNC_1(struct mwifiex_private *VAR_7, u32 *VAR_8)
{
 int VAR_9;
 struct mwifiex_adapter *VAR_10 = VAR_7->adapter;
 u16 VAR_11;

 if (*VAR_8)
  VAR_10->ps_mode = VAR_6;
 else
  VAR_10->ps_mode = VAR_5;
 VAR_11 = (*VAR_8) ? VAR_2 : VAR_1;
 VAR_9 = FUNC_0(VAR_7, VAR_4,
          VAR_11, VAR_0, ((void*)0), 1);
 if ((!VAR_9) && (VAR_11 == VAR_1))
  VAR_9 = FUNC_0(VAR_7, VAR_4,
           VAR_3, 0, ((void*)0), 0);

 return VAR_9;
}

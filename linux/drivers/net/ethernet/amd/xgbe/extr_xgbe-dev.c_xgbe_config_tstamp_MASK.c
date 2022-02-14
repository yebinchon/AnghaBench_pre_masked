
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int tstamp_cc; int tstamp_tc; int tstamp_addend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (unsigned int,int ,int ) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,unsigned int) ;
 int FUNC_2 (struct xgbe_prv_data*,int ,int ,int ) ;
 int FUNC_3 (unsigned int,int ,int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (struct xgbe_prv_data*,int ,int ) ;
 int FUNC_8 (struct xgbe_prv_data*,int ) ;

__attribute__((used)) static int FUNC_9(struct xgbe_prv_data *VAR_10,
         unsigned int VAR_11)
{

 FUNC_3(VAR_11, VAR_1, VAR_5, 1);


 FUNC_3(VAR_11, VAR_1, VAR_4, 1);


 FUNC_3(VAR_11, VAR_1, VAR_7, 1);

 FUNC_1(VAR_10, VAR_1, VAR_11);


 if (!FUNC_0(VAR_11, VAR_1, VAR_6))
  return 0;


 FUNC_2(VAR_10, VAR_0, VAR_3, VAR_9);
 FUNC_2(VAR_10, VAR_0, VAR_2, VAR_8);
 FUNC_8(VAR_10, VAR_10->tstamp_addend);
 FUNC_7(VAR_10, 0, 0);


 FUNC_6(&VAR_10->tstamp_tc, &VAR_10->tstamp_cc,
    FUNC_5(FUNC_4()));

 return 0;
}

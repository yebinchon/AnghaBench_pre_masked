
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_nic {scalar_t__ loopback_mode; } ;
typedef int ef4_oword_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (struct ef4_nic*,int *,int ) ;
 int FUNC_3 (struct ef4_nic*,int *,int ) ;
 int FUNC_4 (struct ef4_nic*) ;

__attribute__((used)) static void FUNC_5(struct ef4_nic *VAR_13)
{
 ef4_oword_t VAR_14;
 bool VAR_15 = (VAR_13->loopback_mode == VAR_12);
 bool VAR_16 = (VAR_13->loopback_mode == VAR_10);
 bool VAR_17 = (VAR_13->loopback_mode == VAR_11);
 bool VAR_18, VAR_19, VAR_20;



 FUNC_2(VAR_13, &VAR_14, VAR_8);
 VAR_19 = FUNC_0(VAR_14, VAR_7);
 VAR_18 = FUNC_0(VAR_14, VAR_6);

 FUNC_2(VAR_13, &VAR_14, VAR_9);
 VAR_20 = FUNC_0(VAR_14, VAR_2);


 if ((VAR_15 != VAR_19) ||
     (VAR_16 != VAR_20) ||
     (VAR_17 != VAR_18))
  FUNC_4(VAR_13);

 FUNC_2(VAR_13, &VAR_14, VAR_8);
 FUNC_1(VAR_14, VAR_1,
       (VAR_15 || VAR_16) ?
       VAR_0 : 0);
 FUNC_1(VAR_14, VAR_7, VAR_15);
 FUNC_1(VAR_14, VAR_6, VAR_17);
 FUNC_3(VAR_13, &VAR_14, VAR_8);

 FUNC_2(VAR_13, &VAR_14, VAR_9);
 FUNC_1(VAR_14, VAR_5, VAR_16);
 FUNC_1(VAR_14, VAR_4, VAR_16);
 FUNC_1(VAR_14, VAR_3, VAR_16);
 FUNC_1(VAR_14, VAR_2, VAR_16);
 FUNC_3(VAR_13, &VAR_14, VAR_9);
}

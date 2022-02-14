
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_nic {int rx_indir_table; } ;
typedef int ef4_oword_t ;


 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (struct ef4_nic*) ;
 scalar_t__ FUNC_3 (struct ef4_nic*) ;
 scalar_t__ FUNC_4 (struct ef4_nic*) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (struct ef4_nic*) ;
 scalar_t__ FUNC_6 (struct ef4_nic*) ;
 int FUNC_7 (struct ef4_nic*,int *,int ) ;
 int FUNC_8 (struct ef4_nic*,int *,int ) ;
 int FUNC_9 (struct ef4_nic*,int,int ) ;
 int FUNC_10 (struct ef4_nic*) ;
 int FUNC_11 (struct ef4_nic*) ;

__attribute__((used)) static int FUNC_12(struct ef4_nic *VAR_18)
{
 ef4_oword_t VAR_19;
 int VAR_20;


 FUNC_7(VAR_18, &VAR_19, VAR_13);
 FUNC_1(VAR_19, VAR_5, 1);
 FUNC_8(VAR_18, &VAR_19, VAR_13);

 VAR_20 = FUNC_11(VAR_18);
 if (VAR_20)
  return VAR_20;




 if (FUNC_2(VAR_18)) {
  FUNC_7(VAR_18, &VAR_19, VAR_14);
  FUNC_1(VAR_19, VAR_4, 0);
  FUNC_8(VAR_18, &VAR_19, VAR_14);
 }

 if (FUNC_4(VAR_18)) {
  FUNC_7(VAR_18, &VAR_19, VAR_17);
  FUNC_1(VAR_19, VAR_10, 8);
  FUNC_1(VAR_19, VAR_11, 8);
  FUNC_1(VAR_19, VAR_8, 8);
  FUNC_1(VAR_19, VAR_9, 8);
  FUNC_8(VAR_18, &VAR_19, VAR_17);
 }





 FUNC_7(VAR_18, &VAR_19, VAR_12);
 FUNC_1(VAR_19, VAR_2, 1);
 FUNC_1(VAR_19, VAR_3, 1);
 if (FUNC_3(VAR_18))
  FUNC_1(VAR_19, VAR_1, 1);
 FUNC_8(VAR_18, &VAR_19, VAR_12);




 FUNC_7(VAR_18, &VAR_19, VAR_15);
 FUNC_1(VAR_19, VAR_6, 0);
 FUNC_8(VAR_18, &VAR_19, VAR_15);

 FUNC_10(VAR_18);

 if (FUNC_6(VAR_18) >= VAR_0) {
  FUNC_9(VAR_18, 0, VAR_18->rx_indir_table);


  FUNC_0(VAR_19, VAR_7, 0);
  FUNC_8(VAR_18, &VAR_19, VAR_16);
 }

 FUNC_5(VAR_18);

 return 0;
}

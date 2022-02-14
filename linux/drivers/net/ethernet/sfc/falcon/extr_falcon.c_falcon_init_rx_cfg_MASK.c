
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_nic {int dummy; } ;
typedef int ef4_oword_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int const) ;
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
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_1 (struct ef4_nic*) ;
 int FUNC_2 (struct ef4_nic*,int *,int ) ;
 int FUNC_3 (struct ef4_nic*,int *,int ) ;

__attribute__((used)) static void FUNC_4(struct ef4_nic *VAR_20)
{

 const unsigned VAR_21 = 20;
 const unsigned VAR_22 = 25;
 ef4_oword_t VAR_23;

 FUNC_2(VAR_20, &VAR_23, VAR_19);
 if (FUNC_1(VAR_20) <= VAR_0) {






  FUNC_0(VAR_23, VAR_2, 0);
  FUNC_0(VAR_23, VAR_3,
        (3 * 4096) >> 5);
  FUNC_0(VAR_23, VAR_6, 512 >> 8);
  FUNC_0(VAR_23, VAR_4, 2048 >> 8);
  FUNC_0(VAR_23, VAR_7, VAR_21);
  FUNC_0(VAR_23, VAR_5, VAR_22);
 } else {

  FUNC_0(VAR_23, VAR_9, 0);
  FUNC_0(VAR_23, VAR_14,
        VAR_1 >> 5);

  FUNC_0(VAR_23, VAR_17, 27648 >> 8);
  FUNC_0(VAR_23, VAR_15, 54272 >> 8);
  FUNC_0(VAR_23, VAR_18, VAR_21);
  FUNC_0(VAR_23, VAR_16, VAR_22);
  FUNC_0(VAR_23, VAR_12, 1);




  FUNC_0(VAR_23, VAR_11, 1);
  FUNC_0(VAR_23, VAR_10, 1);
  FUNC_0(VAR_23, VAR_13, 1);
 }


 FUNC_0(VAR_23, VAR_8, 1);
 FUNC_3(VAR_20, &VAR_23, VAR_19);
}

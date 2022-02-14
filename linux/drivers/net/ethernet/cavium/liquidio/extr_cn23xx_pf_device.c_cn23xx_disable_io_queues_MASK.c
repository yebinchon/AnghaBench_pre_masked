
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int pf_srn; } ;
struct octeon_device {int num_iqs; TYPE_1__ sriov_info; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (struct octeon_device*,int ) ;
 int FUNC_8 (struct octeon_device*,int ) ;
 int FUNC_9 (struct octeon_device*,int ,int) ;
 int FUNC_10 (struct octeon_device*,int ,int) ;
 int FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct octeon_device *VAR_4)
{
 int VAR_5, VAR_6;
 u64 VAR_7;
 u32 VAR_8;
 u32 VAR_9, VAR_10;

 VAR_9 = VAR_4->sriov_info.pf_srn;
 VAR_10 = VAR_9 + VAR_4->num_iqs;


 for (VAR_5 = VAR_9; VAR_5 < VAR_10; VAR_5++) {
  VAR_6 = VAR_3;


  FUNC_6(VAR_7, FUNC_8(
      VAR_4, FUNC_2(VAR_5)));
  FUNC_6(VAR_7, FUNC_5(VAR_7) &
     (~(VAR_0)));
  FUNC_6(VAR_7, FUNC_5(VAR_7) | VAR_1);
  FUNC_10(VAR_4, FUNC_2(VAR_5),
       FUNC_5(VAR_7));




  FUNC_6(VAR_7, FUNC_8(
     VAR_4, VAR_2));
  while (!(FUNC_5(VAR_7) & FUNC_0(VAR_5)) && VAR_6--) {
   FUNC_6(VAR_7, FUNC_8(
     VAR_4, VAR_2));
   FUNC_11(1);
  }


  FUNC_9(VAR_4, FUNC_1(VAR_5), 0xFFFFFFFF);
  while (FUNC_8(VAR_4, FUNC_1(VAR_5)) &&
         VAR_6--) {
   FUNC_11(1);
  }
 }


 for (VAR_5 = VAR_9; VAR_5 < VAR_10; VAR_5++) {
  VAR_6 = VAR_3;





  FUNC_6(VAR_7, FUNC_8(
     VAR_4, VAR_2));
  while (!(FUNC_5(VAR_7) & FUNC_0(VAR_5)) && VAR_6--) {
   FUNC_6(VAR_7, FUNC_8(
     VAR_4, VAR_2));
   FUNC_11(1);
  }


  FUNC_9(VAR_4, FUNC_3(VAR_5),
     0xFFFFFFFF);
  while (FUNC_8(VAR_4,
      FUNC_3(VAR_5)) &&
         VAR_6--) {
   FUNC_11(1);
  }


  FUNC_6(VAR_8, FUNC_7(
     VAR_4, FUNC_4(VAR_5)));
  FUNC_9(VAR_4, FUNC_4(VAR_5),
     FUNC_5(VAR_8));
 }
}

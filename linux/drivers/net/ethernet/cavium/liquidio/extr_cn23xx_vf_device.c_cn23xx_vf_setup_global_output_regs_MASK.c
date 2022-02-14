
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ rings_per_vf; } ;
struct octeon_device {TYPE_1__ sriov_info; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct octeon_device*,int ) ;
 int FUNC_4 (struct octeon_device*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct octeon_device *VAR_9)
{
 u32 VAR_10;
 u32 VAR_11;

 for (VAR_11 = 0; VAR_11 < (VAR_9->sriov_info.rings_per_vf); VAR_11++) {
  FUNC_4(VAR_9, FUNC_0(VAR_11),
     0xFFFFFFFF);

  VAR_10 =
      FUNC_3(VAR_9, FUNC_1(VAR_11));

  VAR_10 &= 0xEFFFFFFFFFFFFFFFL;

  VAR_10 =
      FUNC_3(VAR_9, FUNC_2(VAR_11));


  VAR_10 &= ~VAR_4;


  VAR_10 |= VAR_1;


  VAR_10 &= ~(VAR_0);




  VAR_10 &= ~(VAR_8);
  VAR_10 &= ~(VAR_6);




  VAR_10 |= (VAR_3);




  VAR_10 &= ~(VAR_7);
  VAR_10 &= ~(VAR_5);

  VAR_10 |= (VAR_2);


  FUNC_4(VAR_9, FUNC_2(VAR_11),
     VAR_10);
 }
}

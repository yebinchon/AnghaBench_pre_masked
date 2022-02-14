
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ pf_srn; scalar_t__ num_pf_rings; } ;
struct octeon_device {scalar_t__ rev_id; TYPE_2__* mmio; scalar_t__ pf_num; TYPE_1__ sriov_info; scalar_t__ chip; } ;
struct octeon_cn23xx_pf {int conf; } ;
struct TYPE_4__ {scalar_t__ hw_addr; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_5 (struct octeon_device*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct octeon_device*,int ) ;
 int FUNC_7 (struct octeon_device*,int ,scalar_t__) ;
 int FUNC_8 (struct octeon_device*,int,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int,int *) ;

__attribute__((used)) static void FUNC_11(struct octeon_device *VAR_15)
{
 u32 VAR_16;
 u32 VAR_17, VAR_18, VAR_19;
 u64 VAR_20;

 struct octeon_cn23xx_pf *VAR_21 = (struct octeon_cn23xx_pf *)VAR_15->chip;

 VAR_19 = VAR_15->sriov_info.pf_srn;
 VAR_18 = VAR_19 + VAR_15->sriov_info.num_pf_rings;

 if (FUNC_0(VAR_21->conf)) {
  FUNC_8(VAR_15, VAR_10, 32);
 } else {

  FUNC_8(VAR_15, VAR_10, 0);
 }

 for (VAR_17 = VAR_19; VAR_17 < VAR_18; VAR_17++) {
  VAR_16 = FUNC_6(VAR_15, FUNC_3(VAR_17));


  VAR_16 &= ~VAR_4;


  VAR_16 |= VAR_1;


  VAR_16 &= ~(VAR_0);





  VAR_16 &= ~(VAR_8);
  VAR_16 &= ~(VAR_6);




  VAR_16 |= (VAR_3);





  VAR_16 &= ~(VAR_7);
  VAR_16 &= ~(VAR_5);

  VAR_16 |= (VAR_2);


  FUNC_7(VAR_15, FUNC_3(VAR_17), VAR_16);






  VAR_20 = FUNC_5(
      VAR_15, (u32)FUNC_2(VAR_21->conf));

  FUNC_8(VAR_15, FUNC_4(VAR_17),
       (FUNC_1(VAR_21->conf) |
        (VAR_20 << 32)));
 }


 FUNC_10(0x40, (u8 *)VAR_15->mmio[0].hw_addr + VAR_10);





 if ((VAR_15->rev_id == VAR_13) ||
     (VAR_15->rev_id == VAR_14))
  FUNC_10(FUNC_9((u8 *)VAR_15->mmio[0].hw_addr +
         VAR_9) | 0x2,
         (u8 *)VAR_15->mmio[0].hw_addr + VAR_9);


 if (VAR_15->pf_num)
  FUNC_10(0xffffffffffffffffULL,
         (u8 *)VAR_15->mmio[0].hw_addr + VAR_11);
 else
  FUNC_10(0xffffffffffffffffULL,
         (u8 *)VAR_15->mmio[0].hw_addr + VAR_12);
}

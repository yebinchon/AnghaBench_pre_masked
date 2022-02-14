
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_6__ {int total_vfs; } ;
struct TYPE_5__ {int default_vid; int max_queues; void* itr_scale; } ;
struct TYPE_4__ {int speed; } ;
struct fm10k_hw {TYPE_3__ iov; TYPE_2__ mac; TYPE_1__ bus; } ;
typedef int s32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 int FUNC_3 (int) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_4 (int) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_5 (int) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_6 (int) ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;



 int VAR_37 ;
 scalar_t__ FUNC_7 (struct fm10k_hw*) ;
 int FUNC_8 (struct fm10k_hw*,int ,int) ;

__attribute__((used)) static s32 FUNC_9(struct fm10k_hw *VAR_38)
{
 u32 VAR_39, VAR_40;
 u16 VAR_41;


 FUNC_8(VAR_38, FUNC_0(VAR_37), 0);
 FUNC_8(VAR_38, FUNC_1(VAR_37),
   VAR_0);


 for (VAR_41 = 1; VAR_41 < VAR_2; VAR_41++)
  FUNC_8(VAR_38, FUNC_1(VAR_41), VAR_1);


 FUNC_8(VAR_38, FUNC_2(0), 0);


 FUNC_8(VAR_38, FUNC_2(VAR_16), 0);


 for (VAR_41 = 1; VAR_41 < VAR_16; VAR_41++)
  FUNC_8(VAR_38, FUNC_2(VAR_41), VAR_41 - 1);


 FUNC_8(VAR_38, VAR_14, VAR_15);


 VAR_40 = VAR_34 | VAR_35 |
   (VAR_38->mac.default_vid << VAR_36);

 for (VAR_41 = 0; VAR_41 < VAR_17; VAR_41++) {

  FUNC_8(VAR_38, FUNC_5(VAR_41),
    (VAR_41 * VAR_30) |
    VAR_31);
  FUNC_8(VAR_38, FUNC_6(VAR_41), VAR_40);


  FUNC_8(VAR_38, FUNC_4(VAR_41),
    VAR_28 |
    VAR_27 |
    VAR_29 |
    VAR_26);
  FUNC_8(VAR_38, FUNC_3(VAR_41),
    VAR_24 |
    VAR_23 |
    VAR_22 |
    VAR_25);
 }




 switch (VAR_38->bus.speed) {
 case 130:
  VAR_39 = VAR_5;
  VAR_38->mac.itr_scale = VAR_19;
  break;
 case 129:
  VAR_39 = VAR_6;
  VAR_38->mac.itr_scale = VAR_20;
  break;
 case 128:
  VAR_39 = VAR_7;
  VAR_38->mac.itr_scale = VAR_21;
  break;
 default:
  VAR_39 = 0;

  VAR_38->mac.itr_scale = VAR_21;
  break;
 }


 FUNC_8(VAR_38, VAR_13, VAR_33);
 FUNC_8(VAR_38, VAR_12, VAR_32);






 VAR_39 |= VAR_11 | VAR_10 |
      VAR_9 | VAR_8 |
      VAR_4;

 FUNC_8(VAR_38, VAR_3, VAR_39);


 VAR_38->mac.max_queues = VAR_18;


 VAR_38->iov.total_vfs = FUNC_7(VAR_38) ? 64 : 7;

 return 0;
}

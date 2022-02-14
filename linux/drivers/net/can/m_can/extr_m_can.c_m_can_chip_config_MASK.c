
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int ctrlmode; } ;
struct m_can_classdev {int version; TYPE_3__* ops; TYPE_2__ can; TYPE_1__* mcfg; } ;
struct TYPE_6__ {int (* init ) (struct m_can_classdev*) ;} ;
struct TYPE_4__ {int off; int num; } ;


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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int FUNC_0 (struct m_can_classdev*,int) ;
 int FUNC_1 (struct m_can_classdev*,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct m_can_classdev*,int ,int) ;
 struct m_can_classdev* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct m_can_classdev*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_43)
{
 struct m_can_classdev *VAR_44 = FUNC_4(VAR_43);
 u32 VAR_45, VAR_46;

 FUNC_0(VAR_44, 1);


 FUNC_3(VAR_44, VAR_28, VAR_29);


 FUNC_3(VAR_44, VAR_24, 0x0);

 if (VAR_44->version == 30) {

  FUNC_3(VAR_44, VAR_33, (1 << VAR_38) |
    VAR_44->mcfg[VAR_21].off);
 } else {

  FUNC_3(VAR_44, VAR_33,
       (VAR_44->mcfg[VAR_21].num << VAR_39) |
       (VAR_44->mcfg[VAR_21].off));
 }


 FUNC_3(VAR_44, VAR_35, VAR_42);


 if (VAR_44->version == 30) {
  FUNC_3(VAR_44, VAR_34, (1 << VAR_41) |
    VAR_44->mcfg[VAR_22].off);
 } else {

  FUNC_3(VAR_44, VAR_34,
       ((VAR_44->mcfg[VAR_22].num << VAR_41)
        & VAR_40) |
       VAR_44->mcfg[VAR_22].off);
 }


 FUNC_3(VAR_44, VAR_30,
      (VAR_44->mcfg[VAR_19].num << VAR_36) |
       VAR_44->mcfg[VAR_19].off);

 FUNC_3(VAR_44, VAR_31,
      (VAR_44->mcfg[VAR_20].num << VAR_36) |
       VAR_44->mcfg[VAR_20].off);

 VAR_45 = FUNC_1(VAR_44, VAR_23);
 VAR_46 = FUNC_1(VAR_44, VAR_32);
 VAR_46 &= ~VAR_37;
 if (VAR_44->version == 30) {


  VAR_45 &= ~(VAR_14 | VAR_12 |
   (VAR_9 << VAR_10) |
   (VAR_7 << VAR_8));

  if (VAR_44->can.ctrlmode & VAR_1)
   VAR_45 |= VAR_6 << VAR_8;

 } else {

  VAR_45 &= ~(VAR_14 | VAR_12 | VAR_5 | VAR_11 |
     VAR_13);


  if (VAR_44->can.ctrlmode & VAR_2)
   VAR_45 |= VAR_13;

  if (VAR_44->can.ctrlmode & VAR_1)
   VAR_45 |= (VAR_5 | VAR_11);
 }


 if (VAR_44->can.ctrlmode & VAR_4) {
  VAR_45 |= VAR_14 | VAR_12;
  VAR_46 |= VAR_37;
 }


 if (VAR_44->can.ctrlmode & VAR_3)
  VAR_45 |= VAR_12;


 FUNC_3(VAR_44, VAR_23, VAR_45);
 FUNC_3(VAR_44, VAR_32, VAR_46);


 FUNC_3(VAR_44, VAR_27, VAR_16);
 if (!(VAR_44->can.ctrlmode & VAR_0))
  if (VAR_44->version == 30)
   FUNC_3(VAR_44, VAR_25, VAR_16 &
        ~(VAR_17));
  else
   FUNC_3(VAR_44, VAR_25, VAR_16 &
        ~(VAR_18));
 else
  FUNC_3(VAR_44, VAR_25, VAR_16);


 FUNC_3(VAR_44, VAR_26, VAR_15);


 FUNC_2(VAR_43);

 FUNC_0(VAR_44, 0);

 if (VAR_44->ops->init)
  VAR_44->ops->init(VAR_44);
}

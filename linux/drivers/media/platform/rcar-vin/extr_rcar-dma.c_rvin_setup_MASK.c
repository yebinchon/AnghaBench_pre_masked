
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int field; int pixelformat; int width; int height; } ;
struct rvin_dev {int std; int mbus_code; scalar_t__ is_csi; TYPE_3__* info; TYPE_2__ format; int alpha; TYPE_1__* parallel; } ;
struct TYPE_6__ {scalar_t__ model; int use_mc; } ;
struct TYPE_4__ {int mbus_flags; int mbus_type; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;





 scalar_t__ VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
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
 int FUNC_3 (struct rvin_dev*,int,int ) ;
 int FUNC_4 (struct rvin_dev*,char*,int) ;

__attribute__((used)) static int FUNC_5(struct rvin_dev *VAR_40)
{
 u32 VAR_41, VAR_42, VAR_43, VAR_44;
 bool VAR_45 = 0, VAR_46 = 0, VAR_47 = 0;

 switch (VAR_40->format.field) {
 case 136:
  VAR_41 = VAR_27;
  break;
 case 141:
  VAR_41 = VAR_25;
  break;
 case 140:

  VAR_41 = VAR_26;

  if (!VAR_40->info->use_mc && VAR_40->std & VAR_6)
   VAR_41 = VAR_26 | VAR_24;
  break;
 case 138:
  VAR_41 = VAR_26;
  break;
 case 139:
  VAR_41 = VAR_26 | VAR_24;
  break;
 case 137:
  VAR_41 = VAR_28;
  VAR_45 = 1;
  break;
 default:
  VAR_41 = VAR_27;
  break;
 }




 switch (VAR_40->mbus_code) {
 case 142:

  VAR_41 |= VAR_32;
  VAR_47 = 1;
  break;
 case 144:
  VAR_41 |= VAR_32 | VAR_38;
  VAR_47 = 1;
  break;
 case 143:

  if (!VAR_40->is_csi &&
      VAR_40->parallel->mbus_type == VAR_2)
   VAR_41 |= VAR_34;
  else
   VAR_41 |= VAR_33;

  VAR_47 = 1;
  break;
 case 146:
  VAR_41 |= VAR_29;
  break;
 case 145:

  if (!VAR_40->is_csi &&
      VAR_40->parallel->mbus_type == VAR_2)
   VAR_41 |= VAR_31;
  else
   VAR_41 |= VAR_30;

  VAR_47 = 1;
  break;
 default:
  break;
 }


 if (VAR_40->info->model == VAR_1)
  VAR_43 = VAR_8;
 else
  VAR_43 = VAR_8 | FUNC_1(1);

 if (!VAR_40->is_csi) {

  if (!(VAR_40->parallel->mbus_flags & VAR_4))
   VAR_43 |= VAR_9;


  if (!(VAR_40->parallel->mbus_flags & VAR_5))
   VAR_43 |= VAR_11;


  if (VAR_40->parallel->mbus_flags & VAR_3)
   VAR_43 |= VAR_7;
 }




 switch (VAR_40->format.pixelformat) {
 case 133:
  FUNC_3(VAR_40,
      FUNC_0(VAR_40->format.width * VAR_40->format.height, 0x80),
      VAR_39);
  VAR_42 = VAR_15;
  VAR_46 = 1;
  break;
 case 128:
  VAR_42 = VAR_13;
  VAR_46 = 1;
  break;
 case 131:
  VAR_42 = 0;
  VAR_46 = 1;
  break;
 case 129:
  VAR_42 = VAR_14;
  break;
 case 132:
  VAR_42 = 0;
  break;
 case 130:

  VAR_42 = VAR_16;
  break;
 case 134:
  VAR_42 = (VAR_40->alpha ? VAR_12 : 0) | VAR_14;
  break;
 case 135:
  VAR_42 = FUNC_2(VAR_40->alpha) | VAR_16 | VAR_14;
  break;
 default:
  FUNC_4(VAR_40, "Invalid pixelformat (0x%x)\n",
   VAR_40->format.pixelformat);
  return -VAR_0;
 }


 VAR_41 |= VAR_37;


 if (VAR_47 == VAR_46)
  VAR_41 |= VAR_22;

 if (VAR_40->info->model == VAR_1) {

  if (VAR_40->is_csi)
   VAR_41 &= ~VAR_23;
  else
   VAR_41 |= VAR_23;
 }


 VAR_44 = VAR_45 ? VAR_19 : VAR_18;


 FUNC_3(VAR_40, VAR_44, VAR_21);

 FUNC_3(VAR_40, VAR_44, VAR_20);

 FUNC_3(VAR_40, VAR_42, VAR_17);
 FUNC_3(VAR_40, VAR_43, VAR_10);


 FUNC_3(VAR_40, VAR_41 | VAR_35, VAR_36);

 return 0;
}

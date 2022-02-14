
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fdp1_job {int dummy; } ;
struct fdp1_dev {int dummy; } ;
struct fdp1_ctx {int deint_mode; int sequence; int aborting; struct fdp1_dev* fdp1; } ;


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






 int FUNC_0 (struct fdp1_dev*,char*) ;
 int FUNC_1 (struct fdp1_dev*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct fdp1_ctx *VAR_17,
          struct fdp1_job *VAR_18)
{
 struct fdp1_dev *VAR_19 = VAR_17->fdp1;
 u32 VAR_20 = VAR_9;
 u32 VAR_21 = VAR_16;
 u32 VAR_22 = VAR_6 | VAR_2;


 switch (VAR_17->deint_mode) {
 default:
 case 128:
  FUNC_0(VAR_19, "Progressive Mode\n");
  VAR_20 |= VAR_8;
  VAR_21 |= VAR_12;
  break;
 case 133:
  FUNC_0(VAR_19, "Adapt2D3D Mode\n");
  if (VAR_17->sequence == 0 || VAR_17->aborting)
   VAR_21 |= VAR_12;
  else
   VAR_21 |= VAR_11;

  if (VAR_17->sequence > 1) {
   VAR_22 |= VAR_5;
   VAR_22 |= VAR_1 | VAR_3;
  }

  if (VAR_17->sequence > 2)
   VAR_22 |= VAR_4;

  break;
 case 131:
  FUNC_0(VAR_19, "Fixed 3D Mode\n");
  VAR_21 |= VAR_13;

  if (!(VAR_17->sequence == 0 || VAR_17->aborting))
   VAR_22 |= VAR_1 | VAR_3;
  break;
 case 132:
  FUNC_0(VAR_19, "Fixed 2D Mode\n");
  VAR_21 |= VAR_12;

  break;
 case 129:
  FUNC_0(VAR_19, "Previous Field Mode\n");
  VAR_21 |= VAR_15;
  VAR_22 |= VAR_1;
  break;
 case 130:
  FUNC_0(VAR_19, "Next Field Mode\n");
  VAR_21 |= VAR_14;
  VAR_22 |= VAR_3;
  break;
 }

 FUNC_1(VAR_19, VAR_22, VAR_0);
 FUNC_1(VAR_19, VAR_20, VAR_7);
 FUNC_1(VAR_19, VAR_21, VAR_10);
}

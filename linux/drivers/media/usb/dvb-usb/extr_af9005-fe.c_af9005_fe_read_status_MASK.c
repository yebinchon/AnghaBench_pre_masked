
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_3__ {int * release; } ;
struct TYPE_4__ {TYPE_1__ tuner_ops; } ;
struct dvb_frontend {TYPE_2__ ops; struct af9005_fe_state* demodulator_priv; } ;
struct af9005_fe_state {scalar_t__ strong; int d; scalar_t__ opened; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int ,int ,scalar_t__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*,scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_17,
     enum fe_status *VAR_18)
{
 struct af9005_fe_state *VAR_19 = VAR_17->demodulator_priv;
 u8 VAR_20;
 int VAR_21;

 if (VAR_17->ops.tuner_ops.release == ((void*)0))
  return -VAR_0;

 *VAR_18 = 0;
 VAR_21 = FUNC_1(VAR_19->d, VAR_13,
     VAR_7, VAR_6, &VAR_20);
 if (VAR_21)
  return VAR_21;
 if (VAR_20)
  *VAR_18 |= VAR_3;

 VAR_21 = FUNC_1(VAR_19->d, VAR_14,
     VAR_9, VAR_8,
     &VAR_20);
 if (VAR_21)
  return VAR_21;
 if (VAR_20)
  *VAR_18 |= VAR_1;

 VAR_21 = FUNC_1(VAR_19->d,
     VAR_16,
     VAR_10,
     VAR_10, &VAR_20);
 if (VAR_21)
  return VAR_21;
 if (VAR_20)
  *VAR_18 |= VAR_4 | VAR_5 | VAR_2;
 if (VAR_19->opened)
  FUNC_0(VAR_19->d, *VAR_18 & VAR_2);

 VAR_21 =
     FUNC_1(VAR_19->d, VAR_15,
          VAR_12,
          VAR_11, &VAR_20);
 if (VAR_21)
  return VAR_21;
 if (VAR_20 != VAR_19->strong) {
  FUNC_2("adjust for strong signal %d\n", VAR_20);
  VAR_19->strong = VAR_20;
 }
 return 0;
}

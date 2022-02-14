
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct dvb_frontend {struct af9005_fe_state* demodulator_priv; } ;
struct af9005_fe_state {int d; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,int ,int ,int*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
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

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_15,
         u32 * VAR_16,
         u32 * VAR_17)
{
 struct af9005_fe_state *VAR_18 = VAR_15->demodulator_priv;
 u8 VAR_19, VAR_20, VAR_21, VAR_22;
 u32 VAR_23, VAR_24, VAR_25;
 int VAR_26;

 VAR_26 =
     FUNC_1(VAR_18->d, VAR_11,
          VAR_2, VAR_1,
          &VAR_19);
 if (VAR_26)
  return VAR_26;
 if (!VAR_19) {
  FUNC_2("viterbi counter not ready\n");
  return 101;
 }
 VAR_26 =
     FUNC_0(VAR_18->d, VAR_14,
          &VAR_20);
 if (VAR_26)
  return VAR_26;
 VAR_26 =
     FUNC_0(VAR_18->d, VAR_12,
          &VAR_21);
 if (VAR_26)
  return VAR_26;
 VAR_26 =
     FUNC_0(VAR_18->d, VAR_13,
          &VAR_22);
 if (VAR_26)
  return VAR_26;
 *VAR_16 = ((u32) VAR_22 << 16) + ((u32) VAR_21 << 8) + VAR_20;

 VAR_26 =
     FUNC_0(VAR_18->d, VAR_10,
          &VAR_20);
 if (VAR_26)
  return VAR_26;
 VAR_26 =
     FUNC_0(VAR_18->d, VAR_9,
          &VAR_21);
 if (VAR_26)
  return VAR_26;
 VAR_23 = ((u32) VAR_21 << 8) + VAR_20;
 if (VAR_23 == 0) {
  FUNC_2("super frame count 0\n");
  return 102;
 }


 VAR_26 =
     FUNC_1(VAR_18->d, VAR_8,
          VAR_6, VAR_5,
          &VAR_19);
 if (VAR_26)
  return VAR_26;
 if (VAR_19 == 0) {

  VAR_24 = 1512;
 } else if (VAR_19 == 1) {

  VAR_24 = 6048;
 } else {
  FUNC_3("Invalid fft mode");
  return -VAR_0;
 }


 VAR_26 =
     FUNC_1(VAR_18->d, VAR_7,
          VAR_4, VAR_3,
          &VAR_19);
 if (VAR_26)
  return VAR_26;
 switch (VAR_19) {
 case 0:
  VAR_25 = 2;
  break;
 case 1:
  VAR_25 = 4;
  break;
 case 2:
  VAR_25 = 6;
  break;
 default:
  FUNC_3("invalid modulation mode");
  return -VAR_0;
 }
 *VAR_17 = VAR_23 * 68 * 4 * VAR_24 * VAR_25;
 FUNC_2("PRE err count %d frame count %d bit count %d\n",
   *VAR_16, VAR_23, *VAR_17);
 return 0;
}

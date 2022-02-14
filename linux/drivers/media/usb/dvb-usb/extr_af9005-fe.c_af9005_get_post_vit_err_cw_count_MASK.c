
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
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

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_11,
         u32 * VAR_12,
         u32 * VAR_13,
         u16 * VAR_14)
{
 struct af9005_fe_state *VAR_15 = VAR_11->demodulator_priv;
 int VAR_16;
 u32 VAR_17;
 u32 VAR_18;
 u8 VAR_19, VAR_20, VAR_21, VAR_22;
 u16 VAR_23;

 *VAR_12 = 0;
 *VAR_13 = 0;


 VAR_16 =
     FUNC_1(VAR_15->d, VAR_7,
          VAR_2, VAR_1,
          &VAR_19);
 if (VAR_16)
  return VAR_16;
 if (!VAR_19) {
  FUNC_2("rsd counter not ready\n");
  return 100;
 }

 VAR_16 =
     FUNC_0(VAR_15->d,
          VAR_6,
          &VAR_20);
 if (VAR_16)
  return VAR_16;
 VAR_16 =
     FUNC_0(VAR_15->d,
          VAR_5,
          &VAR_21);
 if (VAR_16)
  return VAR_16;
 VAR_23 = ((u16) VAR_21 << 8) + VAR_20;


 VAR_16 =
     FUNC_0(VAR_15->d, VAR_10,
          &VAR_20);
 if (VAR_16)
  return VAR_16;
 VAR_16 =
     FUNC_0(VAR_15->d, VAR_8,
          &VAR_21);
 if (VAR_16)
  return VAR_16;
 VAR_16 =
     FUNC_0(VAR_15->d, VAR_9,
          &VAR_22);
 if (VAR_16)
  return VAR_16;
 VAR_17 = ((u32) VAR_22 << 16) + ((u32) VAR_21 << 8) + VAR_20;
 *VAR_12 = VAR_17 - (u32) VAR_23 *8 * 8;


 VAR_16 =
     FUNC_0(VAR_15->d, VAR_4,
          &VAR_20);
 if (VAR_16)
  return VAR_16;
 VAR_16 =
     FUNC_0(VAR_15->d, VAR_3,
          &VAR_21);
 if (VAR_16)
  return VAR_16;
 VAR_18 = ((u32) VAR_21 << 8) + VAR_20;
 if (VAR_18 == 0) {
  FUNC_3("wrong RSD packet count");
  return -VAR_0;
 }
 FUNC_2("POST abort count %d err count %d rsd packets %d\n",
   VAR_23, VAR_17, VAR_18);
 *VAR_13 = VAR_18 - (u32) VAR_23;
 *VAR_14 = VAR_23;
 return 0;

}

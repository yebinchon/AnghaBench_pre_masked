
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amvdec_session {struct amvdec_core* core; } ;
struct amvdec_core {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
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
 int FUNC_1 (struct amvdec_session*) ;
 int FUNC_2 (struct amvdec_session*,int,int,int) ;
 int FUNC_3 (struct amvdec_core*,int ) ;
 int FUNC_4 (struct amvdec_core*,int ,int) ;
 int FUNC_5 (struct amvdec_session*) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static irqreturn_t FUNC_7(struct amvdec_session *VAR_11)
{
 struct amvdec_core *VAR_12 = VAR_11->core;
 u32 VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 u32 VAR_16;
 u32 VAR_17 = VAR_10;
 u32 VAR_18;

 FUNC_4(VAR_12, VAR_0, 1);
 VAR_13 = FUNC_3(VAR_12, VAR_3);
 if (VAR_13 == 1) {
  FUNC_6(VAR_12->dev, "MPEG1/2 fatal error\n");
  FUNC_1(VAR_11);
  return VAR_1;
 }

 VAR_13 = FUNC_3(VAR_12, VAR_2);
 if (!VAR_13)
  return VAR_1;


 if ((VAR_13 & FUNC_0(23, 17)) == FUNC_0(23, 17))
  goto end;

 VAR_14 = FUNC_3(VAR_12, VAR_5);
 VAR_15 = VAR_14 & VAR_6;

 if (!VAR_15)
  VAR_17 = (VAR_14 & VAR_7) ?
   VAR_9 :
   VAR_8;

 FUNC_5(VAR_11);
 VAR_16 = ((VAR_13 & 0xf) - 1) & 7;
 VAR_18 = FUNC_3(VAR_12, VAR_4);
 FUNC_2(VAR_11, VAR_16, VAR_18, VAR_17);

end:
 FUNC_4(VAR_12, VAR_2, 0);
 return VAR_1;
}

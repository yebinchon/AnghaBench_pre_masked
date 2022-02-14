
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cal_ctx {int external_rate; int csi2_port; int cc; } ;


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
 unsigned int VAR_13 ;
 int FUNC_0 (int,struct cal_ctx*,char*,int,...) ;
 unsigned int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,unsigned int) ;
 int FUNC_3 (unsigned int*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct cal_ctx *VAR_14)
{
 unsigned int VAR_15, VAR_16;
 unsigned int VAR_17, VAR_18;
 unsigned int VAR_19;




 VAR_19 = VAR_14->external_rate / 2000000;
 VAR_19 = 1000000 / VAR_19;
 FUNC_0(1, VAR_14, "ddrclkperiod_us: %d\n", VAR_19);

 VAR_17 = 20000 / VAR_19;
 VAR_17 = (VAR_17 >= 2) ? VAR_17 - 2 : VAR_17;
 FUNC_0(1, VAR_14, "ths_term: %d (0x%02x)\n", VAR_17, VAR_17);
 VAR_18 = VAR_13;
 FUNC_0(1, VAR_14, "ths_settle: %d (0x%02x)\n", VAR_18, VAR_18);

 VAR_15 = FUNC_1(VAR_14->cc, VAR_0);
 FUNC_3(&VAR_15, VAR_1,
    VAR_2);
 FUNC_3(&VAR_15, VAR_17, VAR_4);
 FUNC_3(&VAR_15, VAR_18, VAR_3);

 FUNC_0(1, VAR_14, "CSI2_%d_REG0 = 0x%08x\n", (VAR_14->csi2_port - 1), VAR_15);
 FUNC_2(VAR_14->cc, VAR_0, VAR_15);

 VAR_16 = FUNC_1(VAR_14->cc, VAR_5);
 FUNC_3(&VAR_16, VAR_12, VAR_9);
 FUNC_3(&VAR_16, 0xb8, VAR_7);
 FUNC_3(&VAR_16, VAR_10, VAR_6);
 FUNC_3(&VAR_16, VAR_11, VAR_8);

 FUNC_0(1, VAR_14, "CSI2_%d_REG1 = 0x%08x\n", (VAR_14->csi2_port - 1), VAR_16);
 FUNC_2(VAR_14->cc, VAR_5, VAR_16);
}

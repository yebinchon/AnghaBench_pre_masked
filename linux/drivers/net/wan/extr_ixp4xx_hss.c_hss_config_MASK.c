
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port {scalar_t__ clock_type; int clock_reg; int npe; scalar_t__ id; scalar_t__ loopback; } ;
struct msg {scalar_t__ cmd; int data32; scalar_t__ hss_port; void* data16b; void* data16a; int index; } ;
typedef int msg ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
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
 scalar_t__ VAR_17 ;
 void* VAR_18 ;
 int FUNC_1 (struct port*) ;
 int FUNC_2 (struct port*,struct msg*,char*) ;
 int FUNC_3 (struct msg*,int ,int) ;
 scalar_t__ FUNC_4 (int ,struct msg*,char*) ;
 int FUNC_5 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct port *VAR_19)
{
 struct msg VAR_20;

 FUNC_3(&VAR_20, 0, sizeof(VAR_20));
 VAR_20.cmd = VAR_18;
 VAR_20.hss_port = VAR_19->id;
 VAR_20.index = VAR_10;
 VAR_20.data32 = VAR_12 | VAR_13 |
  VAR_16 | VAR_14;
 if (VAR_19->clock_type == VAR_2)
  VAR_20.data32 |= VAR_15;
 FUNC_2(VAR_19, &VAR_20, "HSS_SET_TX_PCR");

 VAR_20.index = VAR_8;
 VAR_20.data32 ^= VAR_16 | VAR_11;
 FUNC_2(VAR_19, &VAR_20, "HSS_SET_RX_PCR");

 FUNC_3(&VAR_20, 0, sizeof(VAR_20));
 VAR_20.cmd = VAR_18;
 VAR_20.hss_port = VAR_19->id;
 VAR_20.index = VAR_6;
 VAR_20.data32 = (VAR_19->loopback ? VAR_0 : 0) |
  (VAR_19->id ? VAR_1 : 0);
 FUNC_2(VAR_19, &VAR_20, "HSS_SET_CORE_CR");

 FUNC_3(&VAR_20, 0, sizeof(VAR_20));
 VAR_20.cmd = VAR_18;
 VAR_20.hss_port = VAR_19->id;
 VAR_20.index = VAR_5;
 VAR_20.data32 = VAR_19->clock_reg;
 FUNC_2(VAR_19, &VAR_20, "HSS_SET_CLOCK_CR");

 FUNC_3(&VAR_20, 0, sizeof(VAR_20));
 VAR_20.cmd = VAR_18;
 VAR_20.hss_port = VAR_19->id;
 VAR_20.index = VAR_9;
 VAR_20.data16a = VAR_3;
 VAR_20.data16b = VAR_4 - 1;
 FUNC_2(VAR_19, &VAR_20, "HSS_SET_TX_FCR");

 FUNC_3(&VAR_20, 0, sizeof(VAR_20));
 VAR_20.cmd = VAR_18;
 VAR_20.hss_port = VAR_19->id;
 VAR_20.index = VAR_7;
 VAR_20.data16a = VAR_3;
 VAR_20.data16b = VAR_4 - 1;
 FUNC_2(VAR_19, &VAR_20, "HSS_SET_RX_FCR");

 FUNC_1(VAR_19);

 FUNC_3(&VAR_20, 0, sizeof(VAR_20));
 VAR_20.cmd = VAR_17;
 VAR_20.hss_port = VAR_19->id;
 FUNC_2(VAR_19, &VAR_20, "HSS_LOAD_CONFIG");

 if (FUNC_4(VAR_19->npe, &VAR_20, "HSS_LOAD_CONFIG") ||

     VAR_20.cmd != VAR_17 || VAR_20.data32) {
  FUNC_5("HSS-%i: HSS_LOAD_CONFIG failed\n", VAR_19->id);
  FUNC_0();
 }


 FUNC_4(VAR_19->npe, &VAR_20, "FLUSH_IT");
}

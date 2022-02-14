
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {int dummy; } ;


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
 int FUNC_0 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int ,struct Scsi_Host*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*) ;

__attribute__((used)) static void FUNC_2(struct Scsi_Host *VAR_17)
{
 int VAR_18, VAR_19;

 VAR_18 = FUNC_0(VAR_15);
 VAR_19 = FUNC_0(VAR_16);

 FUNC_1(VAR_14, VAR_17,
       "enabled interrupts (%s%s%s%s%s%s%s%s%s%s%s%s%s%s)\n",
       (VAR_18 & VAR_9) ? "ENSELDO " : "",
       (VAR_18 & VAR_8) ? "ENSELDI " : "",
       (VAR_18 & VAR_10) ? "ENSELINGO " : "",
       (VAR_18 & VAR_13) ? "ENSWRAP " : "",
       (VAR_18 & VAR_7) ? "ENSDONE " : "",
       (VAR_18 & VAR_12) ? "ENSPIORDY " : "",
       (VAR_18 & VAR_2) ? "ENDMADONE " : "",
       (VAR_19 & VAR_11) ? "ENSELTIMO " : "",
       (VAR_19 & VAR_0) ? "ENATNTARG " : "",
       (VAR_19 & VAR_4) ? "ENPHASEMIS " : "",
       (VAR_19 & VAR_1) ? "ENBUSFREE " : "",
       (VAR_19 & VAR_6) ? "ENSCSIPERR " : "",
       (VAR_19 & VAR_3) ? "ENPHASECHG " : "",
       (VAR_19 & VAR_5) ? "ENREQINIT " : "");
}

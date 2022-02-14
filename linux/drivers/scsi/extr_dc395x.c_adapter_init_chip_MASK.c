
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct NvRamType {int channel_cfg; int delay_time; } ;
struct AdapterCtlBlk {int config; struct NvRamType eeprom; scalar_t__ last_reset; } ;


 int FUNC_0 (struct AdapterCtlBlk*,int ) ;
 int FUNC_1 (struct AdapterCtlBlk*,int ,int ) ;
 int FUNC_2 (struct AdapterCtlBlk*,int ,int) ;
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
 int FUNC_3 (int ,char*) ;
 scalar_t__ VAR_16 ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct AdapterCtlBlk *VAR_17)
{
        struct NvRamType *VAR_18 = &VAR_17->eeprom;


 FUNC_2(VAR_17, VAR_11, 0x00);
 FUNC_2(VAR_17, VAR_14, 0x00);


 FUNC_1(VAR_17, VAR_13, VAR_1);


 FUNC_2(VAR_17, VAR_10, VAR_0);
 FUNC_4(20);


 VAR_17->config = VAR_3 | VAR_4;
 if (FUNC_0(VAR_17, VAR_12) & VAR_15)
  VAR_17->config |= VAR_6;

 if (VAR_18->channel_cfg & VAR_9)
  VAR_17->config |= VAR_5;

 if (VAR_17->config & VAR_5) {
  FUNC_3(VAR_8, "Performing initial SCSI bus reset\n");
  FUNC_2(VAR_17, VAR_13, VAR_2);



  FUNC_4(500);

  VAR_17->last_reset =
      VAR_16 + VAR_7 / 2 +
      VAR_7 * VAR_17->eeprom.delay_time;


 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ port_tts; } ;
struct TYPE_3__ {int read_buff_add; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,scalar_t__,int ,char*,void*) ;
 TYPE_2__ VAR_14 ;
 TYPE_1__* VAR_15 ;
 scalar_t__ VAR_16 ;

__attribute__((used)) static void FUNC_4(int VAR_17)
{
 int VAR_18;

 if (!VAR_15->read_buff_add)
  return;

 VAR_18 = FUNC_3(VAR_17, VAR_16, VAR_0,
    "serial", (void *)VAR_16);

 if (VAR_18)
  FUNC_2("Unable to request Speakup serial I R Q\n");

 FUNC_1(VAR_9 | VAR_11 | VAR_10,
      VAR_14.port_tts + VAR_8);

 FUNC_1(VAR_3 | VAR_5 | VAR_4,
      VAR_14.port_tts + VAR_2);
 FUNC_0(VAR_14.port_tts + VAR_7);
 FUNC_0(VAR_14.port_tts + VAR_13);
 FUNC_0(VAR_14.port_tts + VAR_6);
 FUNC_0(VAR_14.port_tts + VAR_12);
 FUNC_1(1, VAR_14.port_tts + VAR_1);
}

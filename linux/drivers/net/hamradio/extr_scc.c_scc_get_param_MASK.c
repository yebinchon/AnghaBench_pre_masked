
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int txdelay; int persist; int slottime; int tailtime; int fulldup; int softdcd; int group; int idletime; int mintime; int maxkeyup; int waittime; int maxdefer; int tx_inhibit; } ;
struct TYPE_3__ {int speed; } ;
struct scc_channel {int* wreg; TYPE_2__ kiss; TYPE_1__ modem; } ;


 unsigned long FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static unsigned long FUNC_1(struct scc_channel *VAR_4, unsigned int VAR_5)
{
 switch (VAR_5)
 {
  case 130: return FUNC_0(VAR_4->kiss.txdelay);
  case 136: return FUNC_0(VAR_4->kiss.persist);
  case 134: return FUNC_0(VAR_4->kiss.slottime);
  case 129: return FUNC_0(VAR_4->kiss.tailtime);
  case 142: return FUNC_0(VAR_4->kiss.fulldup);
  case 133: return FUNC_0(VAR_4->kiss.softdcd);
  case 143: return FUNC_0((VAR_4->wreg[VAR_2] & VAR_0)? 1:0);
  case 135: return FUNC_0((VAR_4->wreg[VAR_2] & VAR_3)? 1:0);
  case 132: return FUNC_0(VAR_4->modem.speed);
  case 141: return FUNC_0(VAR_4->kiss.group);
  case 140: return FUNC_0(VAR_4->kiss.idletime);
  case 137: return FUNC_0(VAR_4->kiss.mintime);
  case 138: return FUNC_0(VAR_4->kiss.maxkeyup);
  case 128: return FUNC_0(VAR_4->kiss.waittime);
  case 139: return FUNC_0(VAR_4->kiss.maxdefer);
  case 131: return FUNC_0(VAR_4->kiss.tx_inhibit);
  default: return VAR_1;
 }

}

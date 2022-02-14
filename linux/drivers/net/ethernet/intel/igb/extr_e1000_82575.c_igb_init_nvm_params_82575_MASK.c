
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int update; int validate; int read; int write; int release; int acquire; } ;
struct e1000_nvm_info {int opcode_bits; int delay_usec; int override; int page_size; int address_bits; TYPE_2__ ops; int word_size; int type; } ;
struct TYPE_3__ {int type; } ;
struct e1000_hw {TYPE_1__ mac; struct e1000_nvm_info nvm; } ;
typedef int s32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;



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
 int FUNC_1 (int ) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_17)
{
 struct e1000_nvm_info *VAR_18 = &VAR_17->nvm;
 u32 VAR_19 = FUNC_1(VAR_0);
 u16 VAR_20;

 VAR_20 = (u16)((VAR_19 & VAR_2) >>
       VAR_3);




 VAR_20 += VAR_4;




 if (VAR_20 > 15)
  VAR_20 = 15;

 VAR_18->word_size = FUNC_0(VAR_20);
 VAR_18->opcode_bits = 8;
 VAR_18->delay_usec = 1;

 switch (VAR_18->override) {
 case 129:
  VAR_18->page_size = 32;
  VAR_18->address_bits = 16;
  break;
 case 128:
  VAR_18->page_size = 8;
  VAR_18->address_bits = 8;
  break;
 default:
  VAR_18->page_size = VAR_19 & VAR_1 ? 32 : 8;
  VAR_18->address_bits = VAR_19 & VAR_1 ?
        16 : 8;
  break;
 }
 if (VAR_18->word_size == FUNC_0(15))
  VAR_18->page_size = 128;

 VAR_18->type = VAR_5;


 VAR_18->ops.acquire = VAR_6;
 VAR_18->ops.release = VAR_9;
 VAR_18->ops.write = VAR_16;
 VAR_18->ops.validate = VAR_13;
 VAR_18->ops.update = VAR_10;
 if (VAR_18->word_size < FUNC_0(15))
  VAR_18->ops.read = VAR_7;
 else
  VAR_18->ops.read = VAR_8;


 switch (VAR_17->mac.type) {
 case 132:
  VAR_18->ops.validate = VAR_14;
  VAR_18->ops.update = VAR_11;
  break;
 case 130:
 case 131:
  VAR_18->ops.validate = VAR_15;
  VAR_18->ops.update = VAR_12;
  break;
 default:
  break;
 }

 return 0;
}

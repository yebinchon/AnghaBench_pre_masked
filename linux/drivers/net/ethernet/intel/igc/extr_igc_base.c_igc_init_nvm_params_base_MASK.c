
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct igc_nvm_info {int opcode_bits; int delay_usec; int page_size; int address_bits; int word_size; int type; } ;
struct igc_hw {struct igc_nvm_info nvm; } ;
typedef int s32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static s32 FUNC_2(struct igc_hw *VAR_6)
{
 struct igc_nvm_info *VAR_7 = &VAR_6->nvm;
 u32 VAR_8 = FUNC_1(VAR_0);
 u16 VAR_9;

 VAR_9 = (u16)((VAR_8 & VAR_2) >>
       VAR_3);




 VAR_9 += VAR_4;




 if (VAR_9 > 15)
  VAR_9 = 15;

 VAR_7->type = VAR_5;
 VAR_7->word_size = FUNC_0(VAR_9);
 VAR_7->opcode_bits = 8;
 VAR_7->delay_usec = 1;

 VAR_7->page_size = VAR_8 & VAR_1 ? 32 : 8;
 VAR_7->address_bits = VAR_8 & VAR_1 ?
       16 : 8;

 if (VAR_7->word_size == FUNC_0(15))
  VAR_7->page_size = 128;

 return 0;
}

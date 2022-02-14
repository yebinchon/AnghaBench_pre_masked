
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {int (* release ) (struct e1000_hw*) ;int (* acquire ) (struct e1000_hw*) ;} ;
struct e1000_nvm_info {scalar_t__ word_size; int opcode_bits; int address_bits; scalar_t__ page_size; TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_nvm_info nvm; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (struct e1000_hw*,scalar_t__,int) ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 (struct e1000_hw*) ;
 int FUNC_7 (int,int) ;

s32 FUNC_8(struct e1000_hw *VAR_4, u16 VAR_5, u16 VAR_6, u16 *VAR_7)
{
 struct e1000_nvm_info *VAR_8 = &VAR_4->nvm;
 s32 VAR_9 = -VAR_0;
 u16 VAR_10 = 0;




 if ((VAR_5 >= VAR_8->word_size) || (VAR_6 > (VAR_8->word_size - VAR_5)) ||
     (VAR_6 == 0)) {
  FUNC_3("nvm parameter(s) out of bounds\n");
  return -VAR_0;
 }

 while (VAR_10 < VAR_6) {
  u8 VAR_11 = VAR_3;

  VAR_9 = VAR_8->ops.acquire(VAR_4);
  if (VAR_9)
   return VAR_9;

  VAR_9 = FUNC_0(VAR_4);
  if (VAR_9) {
   VAR_8->ops.release(VAR_4);
   return VAR_9;
  }

  FUNC_2(VAR_4);


  FUNC_1(VAR_4, VAR_2,
      VAR_8->opcode_bits);

  FUNC_2(VAR_4);




  if ((VAR_8->address_bits == 8) && (VAR_5 >= 128))
   VAR_11 |= VAR_1;


  FUNC_1(VAR_4, VAR_11, VAR_8->opcode_bits);
  FUNC_1(VAR_4, (u16)((VAR_5 + VAR_10) * 2),
      VAR_8->address_bits);


  while (VAR_10 < VAR_6) {
   u16 VAR_12 = VAR_7[VAR_10];

   VAR_12 = (VAR_12 >> 8) | (VAR_12 << 8);
   FUNC_1(VAR_4, VAR_12, 16);
   VAR_10++;

   if ((((VAR_5 + VAR_10) * 2) % VAR_8->page_size) == 0) {
    FUNC_2(VAR_4);
    break;
   }
  }
  FUNC_7(10000, 11000);
  VAR_8->ops.release(VAR_4);
 }

 return VAR_9;
}

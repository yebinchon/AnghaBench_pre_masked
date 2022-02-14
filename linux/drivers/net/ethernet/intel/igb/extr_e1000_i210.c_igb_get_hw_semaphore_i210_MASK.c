
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int clear_semaphore_once; } ;
struct TYPE_6__ {TYPE_2__ _82575; } ;
struct TYPE_4__ {scalar_t__ word_size; } ;
struct e1000_hw {TYPE_3__ dev_spec; TYPE_1__ nvm; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct e1000_hw*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_4)
{
 u32 VAR_5;
 s32 VAR_6 = VAR_4->nvm.word_size + 1;
 s32 VAR_7 = 0;


 while (VAR_7 < VAR_6) {
  VAR_5 = FUNC_2(VAR_1);
  if (!(VAR_5 & VAR_2))
   break;

  FUNC_3(50);
  VAR_7++;
 }

 if (VAR_7 == VAR_6) {



  if (VAR_4->dev_spec._82575.clear_semaphore_once) {
   VAR_4->dev_spec._82575.clear_semaphore_once = 0;
   FUNC_1(VAR_4);
   for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
    VAR_5 = FUNC_2(VAR_1);
    if (!(VAR_5 & VAR_2))
     break;

    FUNC_3(50);
   }
  }


  if (VAR_7 == VAR_6) {
   FUNC_0("Driver can't access device - SMBI bit is set.\n");
   return -VAR_0;
  }
 }


 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  VAR_5 = FUNC_2(VAR_1);
  FUNC_4(VAR_1, VAR_5 | VAR_3);


  if (FUNC_2(VAR_1) & VAR_3)
   break;

  FUNC_3(50);
 }

 if (VAR_7 == VAR_6) {

  FUNC_1(VAR_4);
  FUNC_0("Driver can't access the NVM\n");
  return -VAR_0;
 }

 return 0;
}

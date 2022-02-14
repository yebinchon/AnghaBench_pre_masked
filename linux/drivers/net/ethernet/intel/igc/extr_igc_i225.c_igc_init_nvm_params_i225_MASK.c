
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * update; int * validate; int * write; int read; int release; int acquire; } ;
struct igc_nvm_info {TYPE_1__ ops; int type; } ;
struct igc_hw {struct igc_nvm_info nvm; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct igc_hw*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;

s32 FUNC_1(struct igc_hw *VAR_9)
{
 struct igc_nvm_info *VAR_10 = &VAR_9->nvm;

 VAR_10->ops.acquire = VAR_0;
 VAR_10->ops.release = VAR_5;


 if (FUNC_0(VAR_9)) {
  VAR_9->nvm.type = VAR_1;
  VAR_10->ops.read = VAR_4;
  VAR_10->ops.write = VAR_8;
  VAR_10->ops.validate = VAR_7;
  VAR_10->ops.update = VAR_6;
 } else {
  VAR_9->nvm.type = VAR_2;
  VAR_10->ops.read = VAR_3;
  VAR_10->ops.write = ((void*)0);
  VAR_10->ops.validate = ((void*)0);
  VAR_10->ops.update = ((void*)0);
 }
 return 0;
}

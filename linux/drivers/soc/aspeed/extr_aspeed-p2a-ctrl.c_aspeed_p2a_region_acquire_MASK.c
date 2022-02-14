
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct region {scalar_t__ max; scalar_t__ min; int bit; } ;
struct aspeed_p2a_user {int* readwrite; } ;
struct aspeed_p2a_ctrl_mapping {scalar_t__ addr; int length; } ;
struct aspeed_p2a_ctrl {int* readerwriters; int regmap; int tracking; TYPE_1__* config; } ;
struct TYPE_2__ {struct region* regions; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static bool FUNC_3(struct aspeed_p2a_user *VAR_2,
  struct aspeed_p2a_ctrl *VAR_3,
  struct aspeed_p2a_ctrl_mapping *VAR_4)
{
 int VAR_5;
 u64 VAR_6, VAR_7;
 bool VAR_8 = 0;

 VAR_6 = VAR_4->addr;
 VAR_7 = VAR_4->addr + (VAR_4->length - 1);


 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  const struct region *VAR_9 = &VAR_3->config->regions[VAR_5];



  if (VAR_9->max < VAR_6)
   continue;



  if (VAR_9->min > VAR_7)
   break;




  FUNC_0(&VAR_3->tracking);
  VAR_3->readerwriters[VAR_5] += 1;
  FUNC_1(&VAR_3->tracking);




  VAR_2->readwrite[VAR_5] += 1;


  FUNC_2(VAR_3->regmap, VAR_1, VAR_9->bit, 0);
  VAR_8 = 1;
 }

 return VAR_8;
}

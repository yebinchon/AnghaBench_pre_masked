
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bq24735 {int client; TYPE_1__* pdata; } ;
struct TYPE_2__ {scalar_t__ ext_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static inline int FUNC_1(struct bq24735 *VAR_2)
{
 if (VAR_2->pdata->ext_control)
  return 0;

 return FUNC_0(VAR_2->client, VAR_0,
       VAR_1,
       VAR_1);
}

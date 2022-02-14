
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int conf; } ;
struct dp_altmode {TYPE_3__ data; TYPE_1__* alt; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct dp_altmode*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct dp_altmode*) ;
 int FUNC_4 (TYPE_1__*,int ,TYPE_3__*) ;
 int FUNC_5 (TYPE_1__*,int ,int *,int) ;

__attribute__((used)) static int FUNC_6(struct dp_altmode *VAR_3, u32 VAR_4)
{
 u32 VAR_5 = FUNC_1(VAR_3, VAR_0);
 int VAR_6;

 VAR_6 = FUNC_4(VAR_3->alt, VAR_1, &VAR_3->data);
 if (VAR_6) {
  FUNC_2(&VAR_3->alt->dev,
   "unable to put to connector to safe mode\n");
  return VAR_6;
 }

 VAR_6 = FUNC_5(VAR_3->alt, VAR_5, &VAR_4, 2);
 if (VAR_6) {
  if (FUNC_0(VAR_3->data.conf))
   FUNC_3(VAR_3);
  else
   FUNC_4(VAR_3->alt, VAR_2,
          &VAR_3->data);
 }

 return VAR_6;
}

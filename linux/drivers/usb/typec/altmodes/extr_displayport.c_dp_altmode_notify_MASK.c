
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int conf; } ;
struct dp_altmode {TYPE_1__ data; int alt; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct dp_altmode *VAR_0)
{
 u8 VAR_1 = FUNC_2(FUNC_0(VAR_0->data.conf));

 return FUNC_3(VAR_0->alt, FUNC_1(VAR_1),
       &VAR_0->data);
}

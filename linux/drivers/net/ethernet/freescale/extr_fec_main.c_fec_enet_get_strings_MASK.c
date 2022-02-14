
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;

 TYPE_1__* VAR_1 ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2,
 u32 VAR_3, u8 *VAR_4)
{
 int VAR_5;
 switch (VAR_3) {
 case 128:
  for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++)
   FUNC_1(VAR_4 + VAR_5 * VAR_0,
    VAR_1[VAR_5].name, VAR_0);
  break;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct ef4_nic {TYPE_1__* type; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int (* describe_stats ) (struct ef4_nic*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct ef4_nic*,int *) ;
 int FUNC_1 (struct ef4_nic*,int *,int *,int *) ;
 TYPE_2__* VAR_2 ;
 struct ef4_nic* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct ef4_nic*,int *) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_3,
        u32 VAR_4, u8 *VAR_5)
{
 struct ef4_nic *VAR_6 = FUNC_2(VAR_3);
 int VAR_7;

 switch (VAR_4) {
 case 129:
  VAR_5 += (VAR_6->type->describe_stats(VAR_6, VAR_5) *
       VAR_1);
  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
   FUNC_3(VAR_5 + VAR_7 * VAR_1,
    VAR_2[VAR_7].name, VAR_1);
  VAR_5 += VAR_0 * VAR_1;
  VAR_5 += (FUNC_0(VAR_6, VAR_5) *
       VAR_1);
  break;
 case 128:
  FUNC_1(VAR_6, ((void*)0), VAR_5, ((void*)0));
  break;
 default:

  break;
 }
}

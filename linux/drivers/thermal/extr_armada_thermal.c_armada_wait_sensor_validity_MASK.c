
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct armada_thermal_priv {TYPE_1__* data; int syscon; } ;
struct TYPE_2__ {int is_valid_bit; int syscon_status_off; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct armada_thermal_priv *VAR_2)
{
 u32 VAR_3;

 return FUNC_0(VAR_2->syscon,
     VAR_2->data->syscon_status_off, VAR_3,
     VAR_3 & VAR_2->data->is_valid_bit,
     VAR_0,
     VAR_1);
}

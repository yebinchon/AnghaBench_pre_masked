
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct armada_thermal_priv {TYPE_1__* data; int syscon; } ;
struct TYPE_2__ {int is_valid_bit; int syscon_status_off; } ;


 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static bool FUNC_1(struct armada_thermal_priv *VAR_0)
{
 u32 VAR_1;

 if (!VAR_0->data->is_valid_bit)
  return 1;

 FUNC_0(VAR_0->syscon, VAR_0->data->syscon_status_off, &VAR_1);

 return VAR_1 & VAR_0->data->is_valid_bit;
}

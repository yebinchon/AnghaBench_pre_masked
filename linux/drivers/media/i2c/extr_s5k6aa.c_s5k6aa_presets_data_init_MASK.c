
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int code; int height; int width; } ;
struct s5k6aa_preset {int index; scalar_t__ clk_id; TYPE_1__ mbus_fmt; } ;
struct s5k6aa {struct s5k6aa_preset* presets; struct s5k6aa_preset* preset; int * fiv; } ;
struct TYPE_4__ {int code; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static void FUNC_0(struct s5k6aa *VAR_6)
{
 struct s5k6aa_preset *VAR_7 = &VAR_6->presets[0];
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_7->mbus_fmt.width = VAR_3;
  VAR_7->mbus_fmt.height = VAR_2;
  VAR_7->mbus_fmt.code = VAR_4[0].code;
  VAR_7->index = VAR_8;
  VAR_7->clk_id = 0;
  VAR_7++;
 }

 VAR_6->fiv = &VAR_5[VAR_0];
 VAR_6->preset = &VAR_6->presets[0];
}

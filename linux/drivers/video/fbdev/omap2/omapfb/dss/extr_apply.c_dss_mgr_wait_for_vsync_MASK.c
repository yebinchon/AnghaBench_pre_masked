
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct omap_overlay_manager {int id; TYPE_1__* output; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 unsigned long FUNC_3 (int) ;
 int FUNC_4 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct omap_overlay_manager *VAR_3)
{
 unsigned long VAR_4 = FUNC_3(500);
 u32 VAR_5;
 int VAR_6;

 if (VAR_3->output == ((void*)0))
  return -VAR_2;

 VAR_6 = FUNC_1();
 if (VAR_6)
  return VAR_6;

 switch (VAR_3->output->id) {
 case 128:
  VAR_5 = VAR_1;
  break;
 case 129:
  VAR_5 = VAR_0;
  break;
 default:
  VAR_5 = FUNC_0(VAR_3->id);
  break;
 }

 VAR_6 = FUNC_4(VAR_5, VAR_4);

 FUNC_2();

 return VAR_6;
}

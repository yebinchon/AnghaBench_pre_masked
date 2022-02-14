
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sih {unsigned int irq_lines; int bytes_ixr; TYPE_1__* mask; int module; scalar_t__ set_cor; int name; int control_offset; } ;
typedef int buf ;
struct TYPE_2__ {int isr_offset; int imr_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *,int,int) ;
 int VAR_3 ;
 int FUNC_1 (char*,int,int ,char*) ;
 int FUNC_2 (char*,int,...) ;
 struct sih* VAR_4 ;
 int FUNC_3 (int ,int *,int ,int ) ;
 int FUNC_4 (int ,int *,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(unsigned VAR_5)
{
 const struct sih *VAR_6;
 u8 VAR_7[4];
 int VAR_8;
 int VAR_9;


 if (VAR_5 > 1)
  return -VAR_0;

 VAR_2 = VAR_5;


 FUNC_0(VAR_7, 0xff, sizeof(VAR_7));
 VAR_6 = VAR_4;
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++, VAR_6++) {

  if (!VAR_6->bytes_ixr)
   continue;


  if (VAR_6->irq_lines <= VAR_5)
   continue;

  VAR_9 = FUNC_4(VAR_6->module, VAR_7,
    VAR_6->mask[VAR_5].imr_offset, VAR_6->bytes_ixr);
  if (VAR_9 < 0)
   FUNC_1("twl4030: err %d initializing %s %s\n",
     VAR_9, VAR_6->name, "IMR");
  if (VAR_6->set_cor) {
   VAR_9 = FUNC_5(VAR_6->module,
     VAR_1,
     VAR_6->control_offset);
   if (VAR_9 < 0)
    FUNC_1("twl4030: err %d initializing %s %s\n",
      VAR_9, VAR_6->name, "SIH_CTRL");
  }
 }

 VAR_6 = VAR_4;
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++, VAR_6++) {
  u8 VAR_10[4];
  int VAR_11;


  if (!VAR_6->bytes_ixr)
   continue;


  if (VAR_6->irq_lines <= VAR_5)
   continue;







  for (VAR_11 = 0; VAR_11 < 2; VAR_11++) {
   VAR_9 = FUNC_3(VAR_6->module, VAR_10,
    VAR_6->mask[VAR_5].isr_offset, VAR_6->bytes_ixr);
   if (VAR_9 < 0)
    FUNC_2("twl4030: err %d initializing %s %s\n",
     VAR_9, VAR_6->name, "ISR");

   if (!VAR_6->set_cor) {
    VAR_9 = FUNC_4(VAR_6->module, VAR_7,
     VAR_6->mask[VAR_5].isr_offset,
     VAR_6->bytes_ixr);
    if (VAR_9 < 0)
     FUNC_2("twl4030: write failed: %d\n",
      VAR_9);
   }




  }
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct res_needed {int* devices; int not_correct; scalar_t__ io; scalar_t__ pfmem; scalar_t__ mem; } ;
struct pci_func {int dummy; } ;
struct TYPE_6__ {int number; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned int FUNC_0 (int,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,...) ;
 TYPE_1__* VAR_19 ;
 struct res_needed* FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_1__*,unsigned int,int ,int*) ;
 int FUNC_5 (TYPE_1__*,unsigned int,int,int*) ;
 int FUNC_6 (TYPE_1__*,unsigned int,int ,scalar_t__*) ;
 int FUNC_7 (TYPE_1__*,unsigned int,int,int) ;

__attribute__((used)) static struct res_needed *FUNC_8(struct pci_func *VAR_20, u8 VAR_21)
{
 int VAR_22, VAR_23[6];
 u16 VAR_24;
 u8 VAR_25;
 u8 VAR_26, VAR_27;
 unsigned int VAR_28;
 int VAR_29 = 0;

 u32 VAR_30[6], VAR_31;
 u32 VAR_32[] = {
  VAR_3,
  VAR_4,
  VAR_5,
  VAR_6,
  VAR_7,
  VAR_8,
  0
 };
 struct res_needed *VAR_33;

 VAR_33 = FUNC_3(sizeof(*VAR_33), VAR_0);
 if (VAR_33 == ((void*)0))
  return ((void*)0);

 VAR_19->number = VAR_21;

 FUNC_1("the bus_no behind the bridge is %x\n", VAR_21);
 FUNC_1("scanning devices behind the bridge...\n");
 for (VAR_26 = 0; VAR_26 < 32; VAR_26++) {
  VAR_33->devices[VAR_26] = 0;
  for (VAR_27 = 0; VAR_27 < 8; VAR_27++) {
   VAR_28 = FUNC_0(VAR_26, VAR_27);

   FUNC_6(VAR_19, VAR_28, VAR_17, &VAR_24);

   if (VAR_24 != VAR_18) {

    VAR_29++;

    FUNC_4(VAR_19, VAR_28, VAR_15, &VAR_25);
    FUNC_5(VAR_19, VAR_28, VAR_14, &VAR_31);

    FUNC_1("hdr_type behind the bridge is %x\n", VAR_25);
    if ((VAR_25 & 0x7f) == VAR_16) {
     FUNC_2("embedded bridges not supported for hot-plugging.\n");
     VAR_33->not_correct = 1;
     return VAR_33;
    }

    VAR_31 >>= 8;
    if (VAR_31 == VAR_13) {
     FUNC_2("The device %x is VGA compatible and as is not supported for hot plugging.  Please choose another device.\n", VAR_26);
     VAR_33->not_correct = 1;
     return VAR_33;
    } else if (VAR_31 == VAR_12) {
     FUNC_2("The device %x is not supported for hot plugging.  Please choose another device.\n", VAR_26);
     VAR_33->not_correct = 1;
     return VAR_33;
    }

    VAR_33->devices[VAR_26] = 1;

    for (VAR_22 = 0; VAR_32[VAR_22]; VAR_22++) {
     FUNC_7(VAR_19, VAR_28, VAR_32[VAR_22], 0xFFFFFFFF);
     FUNC_5(VAR_19, VAR_28, VAR_32[VAR_22], &VAR_30[VAR_22]);

     FUNC_1("what is bar[count]? %x, count = %d\n", VAR_30[VAR_22], VAR_22);

     if (!VAR_30[VAR_22])
      continue;



     FUNC_1("count %d device %x function %x wants %x resources\n", VAR_22, VAR_26, VAR_27, VAR_30[VAR_22]);

     if (VAR_30[VAR_22] & VAR_11) {

      VAR_23[VAR_22] = VAR_30[VAR_22] & 0xFFFFFFFC;
      VAR_23[VAR_22] = ~VAR_23[VAR_22] + 1;
      VAR_33->io += VAR_23[VAR_22];
     } else {

      if (VAR_30[VAR_22] & VAR_9) {

       VAR_23[VAR_22] = VAR_30[VAR_22] & 0xFFFFFFF0;
       VAR_23[VAR_22] = ~VAR_23[VAR_22] + 1;
       VAR_33->pfmem += VAR_23[VAR_22];
       if (VAR_30[VAR_22] & VAR_10)

        VAR_22 += 1;

      } else {

       VAR_23[VAR_22] = VAR_30[VAR_22] & 0xFFFFFFF0;
       VAR_23[VAR_22] = ~VAR_23[VAR_22] + 1;
       VAR_33->mem += VAR_23[VAR_22];
       if (VAR_30[VAR_22] & VAR_10) {

        VAR_22 += 1;
       }
      }
     }
    }
   }
  }
 }

 if (!VAR_29)
  VAR_33->not_correct = 1;
 else
  VAR_33->not_correct = 0;
 if ((VAR_33->io) && (VAR_33->io < VAR_1))
  VAR_33->io = VAR_1;
 if ((VAR_33->mem) && (VAR_33->mem < VAR_2))
  VAR_33->mem = VAR_2;
 if ((VAR_33->pfmem) && (VAR_33->pfmem < VAR_2))
  VAR_33->pfmem = VAR_2;
 return VAR_33;
}

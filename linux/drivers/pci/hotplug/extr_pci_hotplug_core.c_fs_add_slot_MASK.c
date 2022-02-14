
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pci_slot {int kobj; } ;
struct TYPE_10__ {int attr; } ;
struct TYPE_9__ {int attr; } ;
struct TYPE_8__ {int attr; } ;
struct TYPE_7__ {int attr; } ;
struct TYPE_6__ {int attr; } ;


 scalar_t__ FUNC_0 (struct pci_slot*) ;
 scalar_t__ FUNC_1 (struct pci_slot*) ;
 scalar_t__ FUNC_2 (struct pci_slot*) ;
 scalar_t__ FUNC_3 (struct pci_slot*) ;
 scalar_t__ FUNC_4 (struct pci_slot*) ;
 TYPE_5__ VAR_0 ;
 TYPE_4__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_5 (struct pci_slot*) ;
 int FUNC_6 (struct pci_slot*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;

__attribute__((used)) static int FUNC_9(struct pci_slot *VAR_5)
{
 int VAR_6 = 0;


 FUNC_5(VAR_5);

 if (FUNC_3(VAR_5)) {
  VAR_6 = FUNC_7(&VAR_5->kobj,
        &VAR_2.attr);
  if (VAR_6)
   goto exit_power;
 }

 if (FUNC_1(VAR_5)) {
  VAR_6 = FUNC_7(&VAR_5->kobj,
        &VAR_0.attr);
  if (VAR_6)
   goto exit_attention;
 }

 if (FUNC_2(VAR_5)) {
  VAR_6 = FUNC_7(&VAR_5->kobj,
        &VAR_1.attr);
  if (VAR_6)
   goto exit_latch;
 }

 if (FUNC_0(VAR_5)) {
  VAR_6 = FUNC_7(&VAR_5->kobj,
        &VAR_3.attr);
  if (VAR_6)
   goto exit_adapter;
 }

 if (FUNC_4(VAR_5)) {
  VAR_6 = FUNC_7(&VAR_5->kobj,
        &VAR_4.attr);
  if (VAR_6)
   goto exit_test;
 }

 goto exit;

exit_test:
 if (FUNC_0(VAR_5))
  FUNC_8(&VAR_5->kobj,
      &VAR_3.attr);
exit_adapter:
 if (FUNC_2(VAR_5))
  FUNC_8(&VAR_5->kobj, &VAR_1.attr);
exit_latch:
 if (FUNC_1(VAR_5))
  FUNC_8(&VAR_5->kobj,
      &VAR_0.attr);
exit_attention:
 if (FUNC_3(VAR_5))
  FUNC_8(&VAR_5->kobj, &VAR_2.attr);
exit_power:
 FUNC_6(VAR_5);
exit:
 return VAR_6;
}

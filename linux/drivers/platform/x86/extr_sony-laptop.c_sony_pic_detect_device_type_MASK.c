
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sony_pic_dev {scalar_t__ model; void* event_types; void* evport_offset; void* handle_irq; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int FUNC_0 (struct pci_dev*) ;
 struct pci_dev* FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (char*,int) ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;

__attribute__((used)) static void FUNC_3(struct sony_pic_dev *VAR_16)
{
 struct pci_dev *VAR_17;

 VAR_17 = FUNC_1(VAR_5,
   VAR_0, ((void*)0));
 if (VAR_17) {
  VAR_16->model = VAR_6;
  VAR_16->evport_offset = VAR_9;
  VAR_16->event_types = VAR_12;
  goto out;
 }

 VAR_17 = FUNC_1(VAR_5,
   VAR_1, ((void*)0));
 if (VAR_17) {
  VAR_16->model = VAR_7;
  VAR_16->evport_offset = VAR_10;
  VAR_16->event_types = VAR_13;
  goto out;
 }

 VAR_17 = FUNC_1(VAR_5,
   VAR_2, ((void*)0));
 if (VAR_17) {
  VAR_16->model = VAR_8;
  VAR_16->handle_irq = VAR_15;
  VAR_16->evport_offset = VAR_11;
  VAR_16->event_types = VAR_14;
  goto out;
 }

 VAR_17 = FUNC_1(VAR_5,
   VAR_3, ((void*)0));
 if (VAR_17) {
  VAR_16->model = VAR_8;
  VAR_16->handle_irq = VAR_15;
  VAR_16->evport_offset = VAR_11;
  VAR_16->event_types = VAR_14;
  goto out;
 }

 VAR_17 = FUNC_1(VAR_5,
   VAR_4, ((void*)0));
 if (VAR_17) {
  VAR_16->model = VAR_8;
  VAR_16->handle_irq = VAR_15;
  VAR_16->evport_offset = VAR_11;
  VAR_16->event_types = VAR_14;
  goto out;
 }


 VAR_16->model = VAR_7;
 VAR_16->evport_offset = VAR_10;
 VAR_16->event_types = VAR_13;

out:
 FUNC_0(VAR_17);

 FUNC_2("detected Type%d model\n",
  VAR_16->model == VAR_6 ? 1 :
  VAR_16->model == VAR_7 ? 2 : 3);
}

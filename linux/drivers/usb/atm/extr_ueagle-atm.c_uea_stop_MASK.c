
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct uea_softc {int dsp_firm; int task; TYPE_1__* urb_int; int kthread; } ;
struct TYPE_3__ {int transfer_buffer; } ;


 int FUNC_0 (struct uea_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct uea_softc*,int ,int ,int ,int *) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_11(struct uea_softc *VAR_2)
{
 int VAR_3;
 FUNC_6(FUNC_0(VAR_2));
 VAR_3 = FUNC_3(VAR_2->kthread);
 FUNC_5(FUNC_0(VAR_2), "kthread finish with status %d\n", VAR_3);

 FUNC_8(VAR_2, VAR_1, VAR_0, 0, ((void*)0));

 FUNC_10(VAR_2->urb_int);
 FUNC_2(VAR_2->urb_int->transfer_buffer);
 FUNC_9(VAR_2->urb_int);


 FUNC_1(&VAR_2->task);

 FUNC_4(VAR_2->dsp_firm);
 FUNC_7(FUNC_0(VAR_2));
}

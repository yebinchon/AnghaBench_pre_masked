
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int format; } ;
struct ibmvfc_event {void (* done ) (struct ibmvfc_event*) ;int * eh_comp; TYPE_1__ crq; int * sync_iu; int * cmnd; } ;



__attribute__((used)) static void FUNC_0(struct ibmvfc_event *VAR_0,
         void (*VAR_1) (struct ibmvfc_event *), u8 VAR_2)
{
 VAR_0->cmnd = ((void*)0);
 VAR_0->sync_iu = ((void*)0);
 VAR_0->crq.format = VAR_2;
 VAR_0->done = VAR_1;
 VAR_0->eh_comp = ((void*)0);
}

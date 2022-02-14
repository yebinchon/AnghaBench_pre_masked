
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct urb {TYPE_5__* ep; TYPE_4__* dev; } ;
struct TYPE_7__ {TYPE_1__* m_bus; } ;
struct mon_reader_text {scalar_t__ nevents; int wait; int e_list; TYPE_2__ r; int e_slab; } ;
struct mon_event_text {char type; unsigned long id; int status; char setup_flag; char data_flag; int e_link; scalar_t__ length; int tstamp; int is_in; int xfertype; int epnum; int devnum; int busnum; } ;
struct TYPE_10__ {int desc; } ;
struct TYPE_9__ {int devnum; TYPE_3__* bus; } ;
struct TYPE_8__ {int busnum; } ;
struct TYPE_6__ {int cnt_text_lost; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct mon_event_text* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct urb*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(void *VAR_2, struct urb *VAR_3, int VAR_4)
{
 struct mon_reader_text *VAR_5 = VAR_2;
 struct mon_event_text *VAR_6;

 if (VAR_5->nevents >= VAR_0 ||
     (VAR_6 = FUNC_0(VAR_5->e_slab, VAR_1)) == ((void*)0)) {
  VAR_5->r.m_bus->cnt_text_lost++;
  return;
 }

 VAR_6->type = 'E';
 VAR_6->id = (unsigned long) VAR_3;
 VAR_6->busnum = VAR_3->dev->bus->busnum;
 VAR_6->devnum = VAR_3->dev->devnum;
 VAR_6->epnum = FUNC_3(&VAR_3->ep->desc);
 VAR_6->xfertype = FUNC_4(&VAR_3->ep->desc);
 VAR_6->is_in = FUNC_5(VAR_3);
 VAR_6->tstamp = FUNC_2();
 VAR_6->length = 0;
 VAR_6->status = VAR_4;

 VAR_6->setup_flag = '-';
 VAR_6->data_flag = 'E';

 VAR_5->nevents++;
 FUNC_1(&VAR_6->e_link, &VAR_5->e_list);
 FUNC_6(&VAR_5->wait);
}

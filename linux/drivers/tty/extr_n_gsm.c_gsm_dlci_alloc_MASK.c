
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gsm_mux {struct gsm_dlci** dlci; int adaption; } ;
struct TYPE_2__ {int * ops; } ;
struct gsm_dlci {int addr; int data; int state; int adaption; struct gsm_mux* gsm; TYPE_1__ port; int t1; int skb_list; int _fifo; int * fifo; int mutex; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct gsm_dlci*) ;
 struct gsm_dlci* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static struct gsm_dlci *FUNC_8(struct gsm_mux *VAR_7, int VAR_8)
{
 struct gsm_dlci *VAR_9 = FUNC_2(sizeof(struct gsm_dlci), VAR_1);
 if (VAR_9 == ((void*)0))
  return ((void*)0);
 FUNC_5(&VAR_9->lock);
 FUNC_3(&VAR_9->mutex);
 VAR_9->fifo = &VAR_9->_fifo;
 if (FUNC_0(&VAR_9->_fifo, 4096, VAR_2) < 0) {
  FUNC_1(VAR_9);
  return ((void*)0);
 }

 FUNC_4(&VAR_9->skb_list);
 FUNC_6(&VAR_9->t1, VAR_5, 0);
 FUNC_7(&VAR_9->port);
 VAR_9->port.ops = &VAR_6;
 VAR_9->gsm = VAR_7;
 VAR_9->addr = VAR_8;
 VAR_9->adaption = VAR_7->adaption;
 VAR_9->state = VAR_0;
 if (VAR_8)
  VAR_9->data = VAR_4;
 else
  VAR_9->data = VAR_3;
 VAR_7->dlci[VAR_8] = VAR_9;
 return VAR_9;
}

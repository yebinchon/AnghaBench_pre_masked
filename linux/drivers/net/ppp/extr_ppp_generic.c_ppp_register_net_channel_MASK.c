
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ppp_net {int all_channels_lock; int new_channels; scalar_t__ last_channel_index; } ;
struct ppp_channel {int hdrlen; struct channel* ppp; } ;
struct net {int dummy; } ;
struct TYPE_2__ {scalar_t__ index; int hdrlen; } ;
struct channel {int lastseq; int list; TYPE_1__ file; int upl; int downl; int chan_sem; int chan_net; struct ppp_channel* chan; int * ppp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (struct net*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *) ;
 struct channel* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 struct ppp_net* FUNC_6 (struct net*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct net *VAR_4, struct ppp_channel *VAR_5)
{
 struct channel *VAR_6;
 struct ppp_net *VAR_7;

 VAR_6 = FUNC_4(sizeof(struct channel), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_7 = FUNC_6(VAR_4);

 VAR_6->ppp = ((void*)0);
 VAR_6->chan = VAR_5;
 VAR_6->chan_net = FUNC_1(VAR_4);
 VAR_5->ppp = VAR_6;
 FUNC_2(&VAR_6->file, VAR_0);
 VAR_6->file.hdrlen = VAR_5->hdrlen;



 FUNC_3(&VAR_6->chan_sem);
 FUNC_9(&VAR_6->downl);
 FUNC_7(&VAR_6->upl);

 FUNC_8(&VAR_7->all_channels_lock);
 VAR_6->file.index = ++VAR_7->last_channel_index;
 FUNC_5(&VAR_6->list, &VAR_7->new_channels);
 FUNC_0(&VAR_3);
 FUNC_10(&VAR_7->all_channels_lock);

 return 0;
}

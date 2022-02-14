
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ppp_net {int all_ppp_mutex; } ;
struct TYPE_6__ {scalar_t__ hdrlen; int refcnt; } ;
struct ppp {TYPE_3__ file; int n_channels; int channels; TYPE_2__* dev; } ;
struct TYPE_4__ {scalar_t__ hdrlen; } ;
struct channel {int upl; struct ppp* ppp; int clist; TYPE_1__ file; int downl; int chan; int chan_net; } ;
struct TYPE_5__ {int hard_header_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct ppp* FUNC_3 (struct ppp_net*,int) ;
 int FUNC_4 (struct ppp*) ;
 struct ppp_net* FUNC_5 (int ) ;
 int FUNC_6 (struct ppp*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int
FUNC_12(struct channel *VAR_3, int VAR_4)
{
 struct ppp *VAR_5;
 struct ppp_net *VAR_6;
 int VAR_7 = -VAR_2;
 int VAR_8;

 VAR_6 = FUNC_5(VAR_3->chan_net);

 FUNC_1(&VAR_6->all_ppp_mutex);
 VAR_5 = FUNC_3(VAR_6, VAR_4);
 if (!VAR_5)
  goto out;
 FUNC_10(&VAR_3->upl);
 VAR_7 = -VAR_0;
 if (VAR_3->ppp)
  goto outl;

 FUNC_4(VAR_5);
 FUNC_8(&VAR_3->downl);
 if (!VAR_3->chan) {

  FUNC_9(&VAR_3->downl);
  FUNC_6(VAR_5);
  VAR_7 = -VAR_1;
  goto outl;
 }
 FUNC_9(&VAR_3->downl);
 if (VAR_3->file.hdrlen > VAR_5->file.hdrlen)
  VAR_5->file.hdrlen = VAR_3->file.hdrlen;
 VAR_8 = VAR_3->file.hdrlen + 2;
 if (VAR_8 > VAR_5->dev->hard_header_len)
  VAR_5->dev->hard_header_len = VAR_8;
 FUNC_0(&VAR_3->clist, &VAR_5->channels);
 ++VAR_5->n_channels;
 VAR_3->ppp = VAR_5;
 FUNC_7(&VAR_5->file.refcnt);
 FUNC_6(VAR_5);
 VAR_7 = 0;

 outl:
 FUNC_11(&VAR_3->upl);
 out:
 FUNC_2(&VAR_6->all_ppp_mutex);
 return VAR_7;
}

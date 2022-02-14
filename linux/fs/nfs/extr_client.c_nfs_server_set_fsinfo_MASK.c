
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int rsize; int wsize; int rpages; int wpages; int dtsize; int flags; int client; int clone_blksize; int time_delta; int maxfilesize; scalar_t__ acdirmax; scalar_t__ acdirmin; scalar_t__ acregmax; scalar_t__ acregmin; int wtmult; } ;
struct nfs_fsinfo {int rtpref; int wtpref; int rtmax; int wtmax; int dtpref; int clone_blksize; int time_delta; int maxfilesize; int wtmult; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 void* FUNC_1 (int,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static void FUNC_4(struct nfs_server *VAR_5,
      struct nfs_fsinfo *VAR_6)
{
 unsigned long VAR_7;


 if (VAR_5->rsize == 0)
  VAR_5->rsize = FUNC_1(VAR_6->rtpref, ((void*)0));
 if (VAR_5->wsize == 0)
  VAR_5->wsize = FUNC_1(VAR_6->wtpref, ((void*)0));

 if (VAR_6->rtmax >= 512 && VAR_5->rsize > VAR_6->rtmax)
  VAR_5->rsize = FUNC_1(VAR_6->rtmax, ((void*)0));
 if (VAR_6->wtmax >= 512 && VAR_5->wsize > VAR_6->wtmax)
  VAR_5->wsize = FUNC_1(VAR_6->wtmax, ((void*)0));

 VAR_7 = FUNC_1(FUNC_2(VAR_5->client), ((void*)0));
 if (VAR_5->rsize > VAR_7)
  VAR_5->rsize = VAR_7;
 if (VAR_5->rsize > VAR_0)
  VAR_5->rsize = VAR_0;
 VAR_5->rpages = (VAR_5->rsize + VAR_4 - 1) >> VAR_3;

 if (VAR_5->wsize > VAR_7)
  VAR_5->wsize = VAR_7;
 if (VAR_5->wsize > VAR_0)
  VAR_5->wsize = VAR_0;
 VAR_5->wpages = (VAR_5->wsize + VAR_4 - 1) >> VAR_3;

 VAR_5->wtmult = FUNC_0(VAR_6->wtmult, ((void*)0));

 VAR_5->dtsize = FUNC_1(VAR_6->dtpref, ((void*)0));
 if (VAR_5->dtsize > VAR_4 * VAR_1)
  VAR_5->dtsize = VAR_4 * VAR_1;
 if (VAR_5->dtsize > VAR_5->rsize)
  VAR_5->dtsize = VAR_5->rsize;

 if (VAR_5->flags & VAR_2) {
  VAR_5->acregmin = VAR_5->acregmax = 0;
  VAR_5->acdirmin = VAR_5->acdirmax = 0;
 }

 VAR_5->maxfilesize = VAR_6->maxfilesize;

 VAR_5->time_delta = VAR_6->time_delta;

 VAR_5->clone_blksize = VAR_6->clone_blksize;

 FUNC_3(VAR_5->client, VAR_5->wsize + 100, VAR_5->rsize + 100);
}

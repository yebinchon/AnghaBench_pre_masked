
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdbuf_t {int len; struct cmdbuf_t* next; struct cmdbuf_t* prev; int buf; } ;
struct cardstate {scalar_t__ mstate; int curlen; int cmdbytes; int lock; int write_tasklet; scalar_t__ connected; int cmdlock; struct cmdbuf_t* lastcmdbuf; struct cmdbuf_t* cmdbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,int,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct cardstate *VAR_3, struct cmdbuf_t *VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;

 FUNC_0(VAR_3->mstate != VAR_2 ?
      VAR_1 : VAR_0,
      "CMD Transmit", VAR_4->len, VAR_4->buf);

 FUNC_1(&VAR_3->cmdlock, VAR_5);
 VAR_4->prev = VAR_3->lastcmdbuf;
 if (VAR_3->lastcmdbuf)
  VAR_3->lastcmdbuf->next = VAR_4;
 else {
  VAR_3->cmdbuf = VAR_4;
  VAR_3->curlen = VAR_4->len;
 }
 VAR_3->cmdbytes += VAR_4->len;
 VAR_3->lastcmdbuf = VAR_4;
 FUNC_2(&VAR_3->cmdlock, VAR_5);

 FUNC_1(&VAR_3->lock, VAR_5);
 VAR_6 = VAR_4->len;
 if (VAR_3->connected)
  FUNC_3(&VAR_3->write_tasklet);
 FUNC_2(&VAR_3->lock, VAR_5);
 return VAR_6;
}

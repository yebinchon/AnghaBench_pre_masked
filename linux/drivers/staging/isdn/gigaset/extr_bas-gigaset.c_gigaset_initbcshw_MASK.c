
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct isowbuf_t {int dummy; } ;
struct TYPE_4__ {struct bas_bc_state* bas; } ;
struct bc_state {TYPE_2__ hw; } ;
struct bas_bc_state {int rcvd_tasklet; scalar_t__ stolen0s; scalar_t__ shared0s; scalar_t__ aborts; scalar_t__ runts; scalar_t__ giants; scalar_t__ frameerrs; scalar_t__ fcserrs; scalar_t__ alignerrs; scalar_t__ goodbytes; scalar_t__ inbits; scalar_t__ inbyte; scalar_t__ seqlen; scalar_t__ isoinlost; int loststatus; int * isoindone; int ** isoinurbs; int isoinlock; int sent_tasklet; void* isooutbuf; scalar_t__ numsub; int * isooutovfl; int isooutfree; int isooutdone; TYPE_1__* isoouturbs; int isooutlock; int corrbytes; scalar_t__ running; } ;
struct TYPE_3__ {struct bc_state* bcs; int * urb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct bas_bc_state*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (char*) ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,unsigned long) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_6(struct bc_state *VAR_7)
{
 int VAR_8;
 struct bas_bc_state *VAR_9;

 VAR_7->hw.bas = VAR_9 = FUNC_2(sizeof(struct bas_bc_state), VAR_4);
 if (!VAR_9) {
  FUNC_3("out of memory\n");
  return -VAR_3;
 }

 VAR_9->running = 0;
 FUNC_0(&VAR_9->corrbytes, 0);
 FUNC_4(&VAR_9->isooutlock);
 for (VAR_8 = 0; VAR_8 < VAR_1; ++VAR_8) {
  VAR_9->isoouturbs[VAR_8].urb = ((void*)0);
  VAR_9->isoouturbs[VAR_8].bcs = VAR_7;
 }
 VAR_9->isooutdone = VAR_9->isooutfree = *(VAR_9->isooutovfl = ((void*)0));
 VAR_9->numsub = 0;
 VAR_9->isooutbuf = FUNC_2(sizeof(struct isowbuf_t), VAR_4);
 if (!VAR_9->isooutbuf) {
  FUNC_3("out of memory\n");
  FUNC_1(VAR_9);
  VAR_7->hw.bas = ((void*)0);
  return -VAR_3;
 }
 FUNC_5(&VAR_9->sent_tasklet,
       VAR_6, (unsigned long) VAR_7);

 FUNC_4(&VAR_9->isoinlock);
 for (VAR_8 = 0; VAR_8 < VAR_0; ++VAR_8)
  VAR_9->isoinurbs[VAR_8] = ((void*)0);
 VAR_9->isoindone = ((void*)0);
 VAR_9->loststatus = -VAR_2;
 VAR_9->isoinlost = 0;
 VAR_9->seqlen = 0;
 VAR_9->inbyte = 0;
 VAR_9->inbits = 0;
 VAR_9->goodbytes = 0;
 VAR_9->alignerrs = 0;
 VAR_9->fcserrs = 0;
 VAR_9->frameerrs = 0;
 VAR_9->giants = 0;
 VAR_9->runts = 0;
 VAR_9->aborts = 0;
 VAR_9->shared0s = 0;
 VAR_9->stolen0s = 0;
 FUNC_5(&VAR_9->rcvd_tasklet,
       VAR_5, (unsigned long) VAR_7);
 return 0;
}

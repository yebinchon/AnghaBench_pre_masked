
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ddb_input {int nr; TYPE_2__* redo; struct ddb_dma* dma; TYPE_1__* port; } ;
struct ddb_dvb {int demux; } ;
struct ddb_dma {int cbuf; int stat; int ctrl; int size; int num; int * vbuf; int * pbuf; } ;
struct ddb {int dev; } ;
struct TYPE_4__ {struct ddb_dma* dma; } ;
struct TYPE_3__ {struct ddb* dev; struct ddb_dvb* dvb; } ;


 int FUNC_0 (struct ddb_dma*) ;
 int FUNC_1 (struct ddb_dma*) ;
 int FUNC_2 (struct ddb_dma*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct ddb*,int,int ) ;
 int FUNC_4 (int ,int ,int,int ) ;
 int FUNC_5 (int *,int ,int) ;
 void* FUNC_6 (struct ddb*,int ) ;

__attribute__((used)) static void FUNC_7(struct ddb_input *VAR_2,
       struct ddb_input *VAR_3)
{
 struct ddb_dvb *VAR_4 = &VAR_3->port->dvb[VAR_3->nr & 1];
 struct ddb_dma *VAR_5, *VAR_6;
 struct ddb *VAR_7 = VAR_2->port->dev;
 int VAR_8 = 1;

 VAR_5 = VAR_2->dma;
 VAR_6 = VAR_2->dma;




 if (VAR_2->redo) {
  VAR_6 = VAR_2->redo->dma;
  VAR_8 = 0;
 }
 while (VAR_5->cbuf != ((VAR_5->stat >> 11) & 0x1f) ||
        (4 & VAR_5->ctrl)) {
  if (4 & VAR_5->ctrl) {

   VAR_8 = 1;
  }
  if (VAR_1)
   FUNC_4(VAR_7->dev, VAR_6->pbuf[VAR_5->cbuf],
      VAR_6->size, VAR_0);
  FUNC_5(&VAR_4->demux,
      VAR_6->vbuf[VAR_5->cbuf],
      VAR_6->size / 188);
  VAR_5->cbuf = (VAR_5->cbuf + 1) % VAR_6->num;
  if (VAR_8)
   FUNC_3(VAR_7, (VAR_5->cbuf << 11),
      FUNC_0(VAR_5));
  VAR_5->stat = FUNC_6(VAR_7, FUNC_2(VAR_5));
  VAR_5->ctrl = FUNC_6(VAR_7, FUNC_1(VAR_5));
 }
}

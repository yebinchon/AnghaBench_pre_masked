
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dvb_demux_feed {int pes_type; int ts_type; int filter; struct dvb_demux* demux; } ;
struct dvb_demux {int* pids; struct av7110* priv; } ;
struct av7110 {int full_ts; scalar_t__ fe_synced; } ;


 int VAR_0 ;
 int FUNC_0 (struct av7110*,int,int,int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (struct av7110*,int ,struct dvb_demux_feed*) ;
 int FUNC_3 (struct av7110*,int ,int ,int ) ;
 int FUNC_4 (int,char*,struct av7110*) ;

__attribute__((used)) static int FUNC_5(struct dvb_demux_feed *VAR_5)
{
 struct dvb_demux *VAR_6 = VAR_5->demux;
 struct av7110 *VAR_7 = VAR_6->priv;
 u16 *VAR_8 = VAR_6->pids, VAR_9[5];
 int VAR_10;
 int VAR_11 = 0;

 FUNC_4(4, "%p\n", VAR_7);

 VAR_9[0] = VAR_9[1] = VAR_9[2] = VAR_9[3] = VAR_9[4] = 0xffff;
 VAR_10 = VAR_5->pes_type;
 VAR_9[VAR_10] = (VAR_8[VAR_10]&0x8000) ? 0 : VAR_8[VAR_10];
 if ((VAR_10 == 2) && VAR_9[VAR_10] && (VAR_5->ts_type & VAR_4)) {
  VAR_9[VAR_10] = 0;
  VAR_11 = FUNC_0(VAR_7, VAR_9[1], VAR_9[0], VAR_9[2], VAR_9[3], VAR_9[4]);
  if (!VAR_11)
   VAR_11 = FUNC_1(VAR_5->filter);
  return VAR_11;
 }
 if (VAR_5->pes_type <= 2 || VAR_5->pes_type == 4) {
  VAR_11 = FUNC_0(VAR_7, VAR_9[1], VAR_9[0], VAR_9[2], VAR_9[3], VAR_9[4]);
  if (VAR_11)
   return VAR_11;
 }

 if (VAR_5->pes_type < 2 && VAR_9[0])
  if (VAR_7->fe_synced)
  {
   VAR_11 = FUNC_3(VAR_7, VAR_0, VAR_3, 0);
   if (VAR_11)
    return VAR_11;
  }

 if ((VAR_5->ts_type & VAR_4) && !VAR_7->full_ts) {
  if (VAR_5->pes_type == 0 && !(VAR_6->pids[0] & 0x8000))
   VAR_11 = FUNC_2(VAR_7, VAR_1, VAR_5);
  if (VAR_5->pes_type == 1 && !(VAR_6->pids[1] & 0x8000))
   VAR_11 = FUNC_2(VAR_7, VAR_2, VAR_5);
 }
 return VAR_11;
}

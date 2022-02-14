
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct channel_info {unsigned long back_buffer_busaddr; size_t demux_mapping; scalar_t__ irec; int tsin_id; scalar_t__ back_buffer_aligned; struct c8sectpfei* fei; } ;
struct c8sectpfei {TYPE_2__** c8sectpfe; int dev; } ;
struct TYPE_4__ {TYPE_1__* demux; } ;
struct TYPE_3__ {int dvb_demux; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int ,struct channel_info*,int,int *,int,unsigned long,unsigned long) ;
 int FUNC_3 (int ,unsigned long,int,int ) ;
 int FUNC_4 (int *,int *,int) ;
 unsigned long FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_8(unsigned long VAR_3)
{
 struct channel_info *VAR_4 = (struct channel_info *)VAR_3;
 struct c8sectpfei *VAR_5;
 unsigned long VAR_6, VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;
 u8 *VAR_12;

 if (FUNC_6(!VAR_4 || !VAR_4->irec))
  return;

 VAR_5 = VAR_4->fei;

 VAR_6 = FUNC_5(VAR_4->irec + FUNC_1(0));
 VAR_7 = FUNC_5(VAR_4->irec + FUNC_0(0));

 VAR_8 = VAR_7 - VAR_4->back_buffer_busaddr;


 if (VAR_6 < VAR_7)
  VAR_6 = VAR_4->back_buffer_busaddr + VAR_1;

 VAR_11 = VAR_6 - VAR_7;
 VAR_9 = VAR_11 / VAR_2;


 FUNC_3(VAR_5->dev,
    VAR_7,
    VAR_11,
    VAR_0);

 VAR_12 = (u8 *) VAR_4->back_buffer_aligned;

 FUNC_2(VAR_5->dev,
  "chan=%d channel=%p num_packets = %d, buf = %p, pos = 0x%x\n\trp=0x%lx, wp=0x%lx\n",
  VAR_4->tsin_id, VAR_4, VAR_9, VAR_12, VAR_8, VAR_7, VAR_6);

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  FUNC_4(
   &VAR_5->c8sectpfe[0]->
    demux[VAR_4->demux_mapping].dvb_demux,
   &VAR_12[VAR_8], 1);

  VAR_8 += VAR_2;
 }


 if (VAR_6 == (VAR_4->back_buffer_busaddr + VAR_1))
  FUNC_7(VAR_4->back_buffer_busaddr, VAR_4->irec +
   FUNC_0(0));
 else
  FUNC_7(VAR_6, VAR_4->irec + FUNC_0(0));
}

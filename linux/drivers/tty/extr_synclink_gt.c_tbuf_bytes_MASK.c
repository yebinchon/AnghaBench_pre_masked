
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slgt_info {unsigned int tbuf_current; unsigned int tbuf_count; scalar_t__ tx_active; TYPE_1__* tbufs; } ;
struct TYPE_2__ {unsigned int buf_count; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (TYPE_1__) ;
 unsigned int FUNC_1 (struct slgt_info*,int ) ;

__attribute__((used)) static unsigned int FUNC_2(struct slgt_info *VAR_2)
{
 unsigned int VAR_3 = 0;
 unsigned int VAR_4 = VAR_2->tbuf_current;
 unsigned int VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7 = 0;
 do {
  VAR_6 = FUNC_0(VAR_2->tbufs[VAR_4]);
  if (VAR_6)
   VAR_3 += VAR_6;
  else if (!VAR_3)
   VAR_7 = VAR_2->tbufs[VAR_4].buf_count;
  if (++VAR_4 == VAR_2->tbuf_count)
   VAR_4 = 0;
 } while (VAR_4 != VAR_2->tbuf_current);


 VAR_5 = FUNC_1(VAR_2, VAR_1);


 if (VAR_5 & VAR_0)
  VAR_3 += VAR_7;


 VAR_3 += (VAR_5 >> 8) & 0xff;


 if (VAR_2->tx_active)
  VAR_3++;

 return VAR_3;
}

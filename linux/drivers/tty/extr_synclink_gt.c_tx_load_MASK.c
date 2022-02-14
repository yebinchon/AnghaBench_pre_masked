
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mode; } ;
struct slgt_info {unsigned int tbuf_start; unsigned int tbuf_current; unsigned int tbuf_count; int tx_active; struct slgt_desc* tbufs; TYPE_1__ params; } ;
struct slgt_desc {unsigned short buf_count; int buf; } ;


 int FUNC_0 (struct slgt_info*,char const*,unsigned int,char*) ;
 scalar_t__ FUNC_1 (unsigned int,unsigned int) ;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (struct slgt_info*) ;
 int FUNC_3 (int ,char const*,unsigned short) ;
 int FUNC_4 (struct slgt_desc,unsigned short) ;
 int FUNC_5 (struct slgt_desc,int) ;
 int FUNC_6 (struct slgt_info*) ;
 int FUNC_7 (struct slgt_info*) ;

__attribute__((used)) static bool FUNC_8(struct slgt_info *VAR_3, const char *VAR_4, unsigned int VAR_5)
{
 unsigned short VAR_6;
 unsigned int VAR_7;
 struct slgt_desc *VAR_8;


 if (FUNC_1(VAR_5, VAR_0) > FUNC_2(VAR_3))
  return 0;

 FUNC_0(VAR_3, VAR_4, VAR_5, "tx");
 VAR_3->tbuf_start = VAR_7 = VAR_3->tbuf_current;

 while (VAR_5) {
  VAR_8 = &VAR_3->tbufs[VAR_7];

  VAR_6 = (unsigned short)((VAR_5 > VAR_0) ? VAR_0 : VAR_5);
  FUNC_3(VAR_8->buf, VAR_4, VAR_6);

  VAR_5 -= VAR_6;
  VAR_4 += VAR_6;





  if ((!VAR_5 && VAR_3->params.mode == VAR_1) ||
      VAR_3->params.mode == VAR_2)
   FUNC_5(*VAR_8, 1);
  else
   FUNC_5(*VAR_8, 0);


  if (VAR_7 != VAR_3->tbuf_start)
   FUNC_4(*VAR_8, VAR_6);
  VAR_8->buf_count = VAR_6;

  if (++VAR_7 == VAR_3->tbuf_count)
   VAR_7 = 0;
 }

 VAR_3->tbuf_current = VAR_7;


 VAR_8 = &VAR_3->tbufs[VAR_3->tbuf_start];
 FUNC_4(*VAR_8, VAR_8->buf_count);


 if (!VAR_3->tx_active)
  FUNC_6(VAR_3);
 FUNC_7(VAR_3);

 return 1;
}

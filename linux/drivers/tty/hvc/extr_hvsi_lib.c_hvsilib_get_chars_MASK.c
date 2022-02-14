
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hvsi_priv {size_t inbuf_cur; int inbuf_len; int termno; int established; int * inbuf; scalar_t__ inbuf_pktlen; int opened; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct hvsi_priv*) ;
 int FUNC_2 (char*,int *,unsigned int) ;
 int FUNC_3 (int *,int *,int) ;
 unsigned int FUNC_4 (int,int) ;
 int FUNC_5 (char*,int ) ;

int FUNC_6(struct hvsi_priv *VAR_2, char *VAR_3, int VAR_4)
{
 unsigned int VAR_5, VAR_6 = 0;

 if (FUNC_0(!VAR_2))
  return -VAR_0;






 if (!VAR_2->opened)
  return 0;




 for (VAR_5 = 1; VAR_4 && VAR_5 < 2; VAR_5++) {

  if (VAR_2->inbuf_pktlen) {
   unsigned int VAR_7 = FUNC_4(VAR_4, (int)VAR_2->inbuf_pktlen);
   FUNC_2(&VAR_3[VAR_6], &VAR_2->inbuf[VAR_2->inbuf_cur], VAR_7);
   VAR_2->inbuf_cur += VAR_7;
   VAR_2->inbuf_pktlen -= VAR_7;
   VAR_4 -= VAR_7;
   VAR_6 += VAR_7;
  }
  if (VAR_4 == 0)
   break;


  if (VAR_2->inbuf_cur) {
   VAR_2->inbuf_len -= VAR_2->inbuf_cur;
   FUNC_3(VAR_2->inbuf, &VAR_2->inbuf[VAR_2->inbuf_cur],
    VAR_2->inbuf_len);
   VAR_2->inbuf_cur = 0;
  }


  if (FUNC_1(VAR_2))
   VAR_5--;
 }
 if (!VAR_2->established) {
  FUNC_5("HVSI@%x: returning -EPIPE\n", VAR_2->termno);
  return -VAR_1;
 }
 return VAR_6;
}

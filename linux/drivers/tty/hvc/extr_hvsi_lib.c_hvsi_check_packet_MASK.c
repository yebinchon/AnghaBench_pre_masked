
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hvsi_priv {int* inbuf; int inbuf_len; int inbuf_pktlen; int inbuf_cur; int termno; } ;






 int FUNC_0 (struct hvsi_priv*) ;
 int FUNC_1 (struct hvsi_priv*) ;
 int FUNC_2 (struct hvsi_priv*) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (char*,int ,int,int) ;

__attribute__((used)) static int FUNC_5(struct hvsi_priv *VAR_0)
{
 u8 VAR_1, VAR_2;




 if (VAR_0->inbuf[0] < 0xfc) {
  VAR_0->inbuf_len = VAR_0->inbuf_pktlen = 0;
  return 0;
 }
 VAR_2 = VAR_0->inbuf[0];
 VAR_1 = VAR_0->inbuf[1];


 if (VAR_0->inbuf_len < VAR_1)
  return 0;

 FUNC_4("HVSI@%x: Got packet type %x len %d bytes:\n",
   VAR_0->termno, VAR_2, VAR_1);


 switch(VAR_2) {
 case 130:
  VAR_0->inbuf_pktlen = VAR_1 - 4;
  VAR_0->inbuf_cur = 4;
  return 1;
 case 131:
  FUNC_0(VAR_0);
  break;
 case 129:
  FUNC_1(VAR_0);
  break;
 case 128:
  FUNC_2(VAR_0);
  break;
 }


 VAR_0->inbuf_len -= VAR_1;
 FUNC_3(VAR_0->inbuf, &VAR_0->inbuf[VAR_1], VAR_0->inbuf_len);
 return 1;
}

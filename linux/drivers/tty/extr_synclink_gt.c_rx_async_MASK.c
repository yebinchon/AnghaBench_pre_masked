
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mgsl_icount {int frame; int parity; int rx; } ;
struct slgt_info {unsigned int rbuf_current; int rbuf_index; unsigned char ignore_status_mask; unsigned int rbuf_count; int port; int rx_timer; int device_name; struct slgt_desc* rbufs; struct mgsl_icount icount; } ;
struct slgt_desc {unsigned char* buf; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (struct slgt_info*,unsigned char*,int,char*) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct slgt_desc) ;
 int FUNC_3 (struct slgt_desc) ;
 int FUNC_4 (struct slgt_info*,unsigned int,unsigned int) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned char,int) ;

__attribute__((used)) static void FUNC_8(struct slgt_info *VAR_5)
{
  struct mgsl_icount *VAR_6 = &VAR_5->icount;
 unsigned int VAR_7, VAR_8;
 unsigned char *VAR_9;
 unsigned char VAR_10;
 struct slgt_desc *VAR_11 = VAR_5->rbufs;
 int VAR_12, VAR_13;
 int VAR_14 = 0;
 int VAR_15;
 unsigned char VAR_16;

 VAR_7 = VAR_8 = VAR_5->rbuf_current;

 while(FUNC_2(VAR_11[VAR_8])) {
  VAR_13 = FUNC_3(VAR_11[VAR_8]) - VAR_5->rbuf_index;
  VAR_9 = VAR_11[VAR_8].buf + VAR_5->rbuf_index;

  FUNC_1(("%s rx_async count=%d\n", VAR_5->device_name, VAR_13));
  FUNC_0(VAR_5, VAR_9, VAR_13, "rx");

  for(VAR_12=0 ; VAR_12 < VAR_13; VAR_12+=2, VAR_9+=2) {
   VAR_16 = *VAR_9;
   VAR_6->rx++;

   VAR_15 = 0;

   VAR_10 = *(VAR_9 + 1) & (VAR_1 + VAR_0);
   if (VAR_10) {
    if (VAR_10 & VAR_1)
     VAR_6->parity++;
    else if (VAR_10 & VAR_0)
     VAR_6->frame++;

    if (VAR_10 & VAR_5->ignore_status_mask)
     continue;
    if (VAR_10 & VAR_1)
     VAR_15 = VAR_3;
    else if (VAR_10 & VAR_0)
     VAR_15 = VAR_2;
   }
   FUNC_7(&VAR_5->port, VAR_16, VAR_15);
   VAR_14++;
  }

  if (VAR_12 < VAR_13) {

   VAR_5->rbuf_index += VAR_12;
   FUNC_5(&VAR_5->rx_timer, VAR_4 + 1);
   break;
  }

  VAR_5->rbuf_index = 0;
  FUNC_4(VAR_5, VAR_8, VAR_8);

  if (++VAR_8 == VAR_5->rbuf_count)
   VAR_8 = 0;


  if (VAR_8 == VAR_7)
   break;
 }

 if (VAR_14)
  FUNC_6(&VAR_5->port);
}

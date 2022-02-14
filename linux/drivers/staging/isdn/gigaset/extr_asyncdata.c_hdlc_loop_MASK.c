
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct inbuf_t {unsigned char* data; int head; struct cardstate* cs; } ;
struct cardstate {int dev; scalar_t__ dle; struct bc_state* bcs; } ;
struct bc_state {int inputstate; scalar_t__ rx_fcs; unsigned char emptycount; int rx_bufsize; struct sk_buff* rx_skb; } ;
typedef scalar_t__ __u16 ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 unsigned char VAR_10 ;
 int FUNC_0 (struct sk_buff*,unsigned char) ;
 int FUNC_1 (struct sk_buff*,int) ;
 scalar_t__ FUNC_2 (scalar_t__,unsigned char) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (struct bc_state*) ;
 struct sk_buff* FUNC_8 (struct bc_state*) ;
 int FUNC_9 (struct bc_state*,struct sk_buff*) ;
 scalar_t__ FUNC_10 (unsigned char) ;

__attribute__((used)) static unsigned FUNC_11(unsigned VAR_11, struct inbuf_t *VAR_12)
{
 struct cardstate *VAR_13 = VAR_12->cs;
 struct bc_state *VAR_14 = VAR_13->bcs;
 int VAR_15 = VAR_14->inputstate;
 __u16 VAR_16 = VAR_14->rx_fcs;
 struct sk_buff *VAR_17 = VAR_14->rx_skb;
 unsigned char *VAR_18 = VAR_12->data + VAR_12->head;
 unsigned VAR_19 = 0;
 unsigned char VAR_20;

 if (VAR_15 & VAR_4) {
  if (!VAR_11)
   return 0;
  VAR_15 &= ~VAR_4;
  goto byte_stuff;
 }

 while (VAR_19 < VAR_11) {
  VAR_20 = *VAR_18++;
  VAR_19++;
  if (VAR_20 == VAR_1) {
   if (VAR_15 & VAR_2) {

    VAR_15 &= ~VAR_2;
   } else if (VAR_13->dle || (VAR_15 & VAR_3)) {

    VAR_15 |= VAR_2;
    break;
   }
  }

  if (VAR_20 == VAR_6) {

   if (VAR_19 >= VAR_11) {

    VAR_15 |= VAR_4;
    break;
   }
byte_stuff:
   VAR_20 = *VAR_18++;
   VAR_19++;
   if (VAR_20 == VAR_1) {
    if (VAR_15 & VAR_2) {

     VAR_15 &= ~VAR_2;
    } else if (VAR_13->dle ||
        (VAR_15 & VAR_3)) {

     VAR_15 |=
      VAR_2 | VAR_4;
     break;
    }
   }
   VAR_20 ^= VAR_10;




  } else if (VAR_20 == VAR_7) {

   if (VAR_15 & VAR_5) {
    FUNC_6(VAR_0,
     "7e----------------------------");


    if (!VAR_17) {

     FUNC_7(VAR_14);
    } else if (VAR_17->len < 2) {

     FUNC_5(VAR_13->dev,
       "short frame (%d)\n",
       VAR_17->len);
     FUNC_7(VAR_14);
     FUNC_4(VAR_17);
    } else if (VAR_16 != VAR_8) {

     FUNC_3(VAR_13->dev,
      "Checksum failed, %u bytes corrupted!\n",
      VAR_17->len);
     FUNC_7(VAR_14);
     FUNC_4(VAR_17);
    } else {

     FUNC_1(VAR_17, VAR_17->len - 2);
     FUNC_9(VAR_14, VAR_17);
    }


    VAR_15 &= ~VAR_5;
    VAR_17 = FUNC_8(VAR_14);
   } else {




    if (!VAR_17) {

     FUNC_7(VAR_14);
     VAR_17 = FUNC_8(VAR_14);
    }
   }

   VAR_16 = VAR_9;
   continue;





  }
  VAR_15 |= VAR_5;
  if (VAR_17) {
   if (VAR_17->len >= VAR_14->rx_bufsize) {
    FUNC_5(VAR_13->dev, "received packet too long\n");
    FUNC_4(VAR_17);

    VAR_14->rx_skb = VAR_17 = ((void*)0);
   } else {
    FUNC_0(VAR_17, VAR_20);
    VAR_16 = FUNC_2(VAR_16, VAR_20);
   }
  }
 }

 VAR_14->inputstate = VAR_15;
 VAR_14->rx_fcs = VAR_16;
 return VAR_19;
}

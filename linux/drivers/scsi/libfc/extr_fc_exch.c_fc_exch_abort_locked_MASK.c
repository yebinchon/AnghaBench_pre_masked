
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_seq {int dummy; } ;
struct fc_frame {int dummy; } ;
struct fc_exch {int esb_stat; int state; int lp; scalar_t__ sid; int did; int seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct fc_exch*,char*,int,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct fc_exch*,unsigned int) ;
 int FUNC_2 (struct fc_frame*,int ,int ,scalar_t__,int ,int,int ) ;
 struct fc_frame* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,struct fc_seq*,struct fc_frame*) ;
 struct fc_seq* FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct fc_exch *VAR_12,
    unsigned int VAR_13)
{
 struct fc_seq *VAR_14;
 struct fc_frame *VAR_15;
 int VAR_16;

 FUNC_0(VAR_12, "exch: abort, time %d msecs\n", VAR_13);
 if (VAR_12->esb_stat & (VAR_4 | VAR_3) ||
     VAR_12->state & (VAR_6 | VAR_7)) {
  FUNC_0(VAR_12, "exch: already completed esb %x state %x\n",
       VAR_12->esb_stat, VAR_12->state);
  return -VAR_2;
 }




 VAR_14 = FUNC_5(&VAR_12->seq);
 if (!VAR_14)
  return -VAR_1;

 if (VAR_13)
  FUNC_1(VAR_12, VAR_13);

 if (VAR_12->sid) {



  VAR_15 = FUNC_3(VAR_12->lp, 0);
  if (VAR_15) {
   VAR_12->esb_stat |= VAR_5;
   FUNC_2(VAR_15, VAR_10, VAR_12->did, VAR_12->sid,
           VAR_11, VAR_8 |
           VAR_9, 0);
   VAR_16 = FUNC_4(VAR_12->lp, VAR_14, VAR_15);
  } else {
   VAR_16 = -VAR_0;
  }
 } else {




  VAR_16 = 0;
 }
 VAR_12->esb_stat |= VAR_3;
 return VAR_16;
}

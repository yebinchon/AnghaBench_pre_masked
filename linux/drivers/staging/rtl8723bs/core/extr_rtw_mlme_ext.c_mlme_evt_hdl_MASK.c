
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef int u8 ;
typedef scalar_t__ u16 ;
struct evt_priv {int event_seq; int evt_done_cnt; } ;
struct adapter {struct evt_priv evtpriv; } ;
struct TYPE_2__ {scalar_t__ parmsize; void (* event_callback ) (struct adapter*,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*) ;
 TYPE_1__* VAR_5 ;

u8 FUNC_3(struct adapter *VAR_6, unsigned char *VAR_7)
{
 u8 VAR_8, VAR_9;
 u16 VAR_10;
 uint *VAR_11;
 void (*VAR_12)(struct adapter *VAR_13, u8 *VAR_14);
 struct evt_priv *VAR_15 = &(VAR_6->evtpriv);

 if (VAR_7 == ((void*)0))
  goto _abort_event_;

 VAR_11 = (uint *)VAR_7;
 VAR_10 = (u16)(*VAR_11&0xffff);
 VAR_9 = (u8)((*VAR_11>>24)&0x7f);
 VAR_8 = (u8)((*VAR_11>>16)&0xff);
 if (VAR_8 >= VAR_1) {
  FUNC_0(VAR_4, VAR_2, ("\nEvent Code(%d) mismatch!\n", VAR_8));
  goto _abort_event_;
 }


 if ((VAR_5[VAR_8].parmsize != 0) &&
   (VAR_5[VAR_8].parmsize != VAR_10)) {

  FUNC_0(VAR_4, VAR_2, ("\nEvent(%d) Parm Size mismatch (%d vs %d)!\n",
   VAR_8, VAR_5[VAR_8].parmsize, VAR_10));
  goto _abort_event_;

 }

 FUNC_1(&VAR_15->event_seq);

 VAR_11 += 2;

 if (VAR_11) {
  VAR_12 = VAR_5[VAR_8].event_callback;
  VAR_12(VAR_6, (u8 *)VAR_11);

  VAR_15->evt_done_cnt++;
 }


_abort_event_:


 return VAR_0;

}

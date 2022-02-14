
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef size_t u8 ;
typedef scalar_t__ u16 ;
struct adapter {int dummy; } ;
struct TYPE_2__ {scalar_t__ parmsize; void (* event_callback ) (struct adapter*,size_t*) ;} ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

u8 FUNC_1(struct adapter *VAR_5, unsigned char *VAR_6)
{
 u8 VAR_7;
 u16 VAR_8;
 uint *VAR_9;
 void (*VAR_10)(struct adapter *VAR_11, u8 *VAR_12);

 VAR_9 = (uint *)VAR_6;
 VAR_8 = (u16)(*VAR_9 & 0xffff);
 VAR_7 = (u8)((*VAR_9>>16) & 0xff);


 if (VAR_7 >= VAR_1) {
  FUNC_0(VAR_3, VAR_2, ("\nEvent Code(%d) mismatch!\n", VAR_7));
  goto _abort_event_;
 }


 if ((VAR_4[VAR_7].parmsize != 0) &&
     (VAR_4[VAR_7].parmsize != VAR_8)) {
  FUNC_0(VAR_3, VAR_2,
    ("\nEvent(%d) Parm Size mismatch (%d vs %d)!\n",
    VAR_7, VAR_4[VAR_7].parmsize, VAR_8));
  goto _abort_event_;
 }

 VAR_9 += 2;

 if (VAR_9) {
  VAR_10 = VAR_4[VAR_7].event_callback;
  VAR_10(VAR_5, (u8 *)VAR_9);
 }

_abort_event_:
 return VAR_0;
}

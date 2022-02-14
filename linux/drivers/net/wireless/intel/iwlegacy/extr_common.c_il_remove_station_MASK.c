
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct il_priv {scalar_t__ num_stations; int sta_lock; TYPE_1__* stations; } ;
struct TYPE_2__ {int used; int * lq; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,size_t const,size_t const*) ;
 int FUNC_2 (char*,size_t const*) ;
 int VAR_0 ;
 size_t const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct il_priv*) ;
 int FUNC_5 (struct il_priv*,size_t const*,size_t const,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

int
FUNC_9(struct il_priv *VAR_5, const u8 VAR_6, const u8 * VAR_7)
{
 unsigned long VAR_8;

 if (!FUNC_4(VAR_5)) {
  FUNC_2("Unable to remove station %pM, device not ready.\n",
         VAR_7);





  return 0;
 }

 FUNC_1("Removing STA from driver:%d  %pM\n", VAR_6, VAR_7);

 if (FUNC_3(VAR_6 == VAR_1))
  return -VAR_0;

 FUNC_7(&VAR_5->sta_lock, VAR_8);

 if (!(VAR_5->stations[VAR_6].used & VAR_2)) {
  FUNC_2("Removing %pM but non DRIVER active\n", VAR_7);
  goto out_err;
 }

 if (!(VAR_5->stations[VAR_6].used & VAR_4)) {
  FUNC_2("Removing %pM but non UCODE active\n", VAR_7);
  goto out_err;
 }

 if (VAR_5->stations[VAR_6].used & VAR_3) {
  FUNC_6(VAR_5->stations[VAR_6].lq);
  VAR_5->stations[VAR_6].lq = ((void*)0);
 }

 VAR_5->stations[VAR_6].used &= ~VAR_2;

 VAR_5->num_stations--;

 FUNC_0(VAR_5->num_stations < 0);

 FUNC_8(&VAR_5->sta_lock, VAR_8);

 return FUNC_5(VAR_5, VAR_7, VAR_6, 0);
out_err:
 FUNC_8(&VAR_5->sta_lock, VAR_8);
 return -VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct il_priv {int sta_lock; TYPE_1__* stations; } ;
struct TYPE_2__ {int used; } ;


 int FUNC_0 (char*,size_t const*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct il_priv*,size_t const*,int ,int *,size_t*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_4(struct il_priv *VAR_2, const u8 * VAR_3, u8 * VAR_4)
{
 int VAR_5;
 u8 VAR_6;
 unsigned long VAR_7;

 if (VAR_4)
  *VAR_4 = VAR_0;

 VAR_5 = FUNC_1(VAR_2, VAR_3, 0, ((void*)0), &VAR_6);
 if (VAR_5) {
  FUNC_0("Unable to add station %pM\n", VAR_3);
  return VAR_5;
 }

 if (VAR_4)
  *VAR_4 = VAR_6;

 FUNC_2(&VAR_2->sta_lock, VAR_7);
 VAR_2->stations[VAR_6].used |= VAR_1;
 FUNC_3(&VAR_2->sta_lock, VAR_7);

 return 0;
}

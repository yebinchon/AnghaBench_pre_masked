
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct libipw_security {int flags; scalar_t__* key_sizes; scalar_t__ level; scalar_t__ active_key; scalar_t__ auth_mode; scalar_t__ enabled; int encrypt; int * keys; } ;
struct ipw2100_priv {int status; int action_mutex; TYPE_1__* ieee; } ;
struct TYPE_4__ {scalar_t__* key_sizes; int flags; scalar_t__ active_key; scalar_t__ auth_mode; scalar_t__ enabled; scalar_t__ level; int encrypt; int * keys; } ;
struct TYPE_3__ {TYPE_2__ sec; } ;


 int FUNC_0 (char*,char,char,char,char,char,char,char,char,char) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct ipw2100_priv*,int ) ;
 struct ipw2100_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_10,
          struct libipw_security *VAR_11)
{
 struct ipw2100_priv *VAR_12 = FUNC_2(VAR_10);
 int VAR_13, VAR_14 = 0;

 FUNC_4(&VAR_12->action_mutex);
 if (!(VAR_12->status & VAR_8))
  goto done;

 for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
  if (VAR_11->flags & (1 << VAR_13)) {
   VAR_12->ieee->sec.key_sizes[VAR_13] = VAR_11->key_sizes[VAR_13];
   if (VAR_11->key_sizes[VAR_13] == 0)
    VAR_12->ieee->sec.flags &= ~(1 << VAR_13);
   else
    FUNC_3(VAR_12->ieee->sec.keys[VAR_13], VAR_11->keys[VAR_13],
           VAR_11->key_sizes[VAR_13]);
   if (VAR_11->level == VAR_5) {
    VAR_12->ieee->sec.flags |= (1 << VAR_13);
    VAR_12->status |= VAR_9;
   } else
    VAR_12->ieee->sec.flags &= ~(1 << VAR_13);
  }
 }

 if ((VAR_11->flags & VAR_0) &&
     VAR_12->ieee->sec.active_key != VAR_11->active_key) {
  VAR_12->ieee->sec.active_key = VAR_11->active_key;
  VAR_12->ieee->sec.flags |= VAR_0;
  VAR_12->status |= VAR_9;
 }

 if ((VAR_11->flags & VAR_1) &&
     (VAR_12->ieee->sec.auth_mode != VAR_11->auth_mode)) {
  VAR_12->ieee->sec.auth_mode = VAR_11->auth_mode;
  VAR_12->ieee->sec.flags |= VAR_1;
  VAR_12->status |= VAR_9;
 }

 if (VAR_11->flags & VAR_2 && VAR_12->ieee->sec.enabled != VAR_11->enabled) {
  VAR_12->ieee->sec.flags |= VAR_2;
  VAR_12->ieee->sec.enabled = VAR_11->enabled;
  VAR_12->status |= VAR_9;
  VAR_14 = 1;
 }

 if (VAR_11->flags & VAR_3)
  VAR_12->ieee->sec.encrypt = VAR_11->encrypt;

 if (VAR_11->flags & VAR_4 && VAR_12->ieee->sec.level != VAR_11->level) {
  VAR_12->ieee->sec.level = VAR_11->level;
  VAR_12->ieee->sec.flags |= VAR_4;
  VAR_12->status |= VAR_9;
 }

 FUNC_0("Security flags: %c %c%c%c%c %c%c%c%c\n",
        VAR_12->ieee->sec.flags & (1 << 8) ? '1' : '0',
        VAR_12->ieee->sec.flags & (1 << 7) ? '1' : '0',
        VAR_12->ieee->sec.flags & (1 << 6) ? '1' : '0',
        VAR_12->ieee->sec.flags & (1 << 5) ? '1' : '0',
        VAR_12->ieee->sec.flags & (1 << 4) ? '1' : '0',
        VAR_12->ieee->sec.flags & (1 << 3) ? '1' : '0',
        VAR_12->ieee->sec.flags & (1 << 2) ? '1' : '0',
        VAR_12->ieee->sec.flags & (1 << 1) ? '1' : '0',
        VAR_12->ieee->sec.flags & (1 << 0) ? '1' : '0');






 if (!(VAR_12->status & (VAR_6 | VAR_7)))
  FUNC_1(VAR_12, 0);
      done:
 FUNC_5(&VAR_12->action_mutex);
}

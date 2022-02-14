
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct uwb_rceb {int dummy; } ;
struct uwb_rccb {int bCommandContext; } ;
struct uwb_rc_cmd_done_params {size_t reply_size; struct uwb_rceb* reply; int completion; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;
struct uwb_rc {TYPE_1__ uwb_dev; } ;
typedef size_t ssize_t ;


 int FUNC_0 (struct device*,char*,char const*,int ,int ,int ,int) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (struct uwb_rc*,char const*,struct uwb_rccb*,size_t,int ,int ,int ,struct uwb_rc_cmd_done_params*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static
ssize_t FUNC_4(struct uwb_rc *VAR_1, const char *VAR_2,
       struct uwb_rccb *VAR_3, size_t VAR_4,
       struct uwb_rceb *VAR_5, size_t VAR_6,
       u8 VAR_7, u16 VAR_8,
       struct uwb_rceb **VAR_9)
{
 ssize_t VAR_10 = 0;
 struct device *VAR_11 = &VAR_1->uwb_dev.dev;
 struct uwb_rc_cmd_done_params VAR_12;

 FUNC_1(&VAR_12.completion);
 VAR_12.reply = VAR_5;
 VAR_12.reply_size = VAR_6;

 VAR_10 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4,
      VAR_7, VAR_8,
      VAR_0, &VAR_12);
 if (VAR_10)
  return VAR_10;

 FUNC_3(&VAR_12.completion);

 if (VAR_9)
  *VAR_9 = VAR_12.reply;

 if (VAR_12.reply_size < 0)
  FUNC_0(VAR_11, "%s: confirmation event 0x%02x/%04x/%02x "
   "reception failed: %d\n", VAR_2,
   VAR_7, VAR_8, VAR_3->bCommandContext,
   (int)VAR_12.reply_size);
 return VAR_12.reply_size;
}

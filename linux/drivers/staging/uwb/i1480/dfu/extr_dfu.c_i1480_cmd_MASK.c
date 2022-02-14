
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct uwb_rceb {int wEvent; int bEventType; } ;
struct uwb_rccb {int bCommandContext; } ;
struct i1480 {size_t (* cmd ) (struct i1480*,char const*,size_t) ;size_t (* wait_init_done ) (struct i1480*) ;struct uwb_rceb* evt_buf; int dev; int evt_result; int evt_complete; struct uwb_rccb* cmd_buf; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,char const*,size_t,...) ;
 int FUNC_1 (int*,int) ;
 size_t FUNC_2 (struct i1480*,struct uwb_rceb*,char const*,int,int,int) ;
 int FUNC_3 (int *) ;
 size_t FUNC_4 (struct i1480*,char const*,size_t) ;
 size_t FUNC_5 (struct i1480*) ;
 size_t FUNC_6 (int *,int ) ;

ssize_t FUNC_7(struct i1480 *VAR_4, const char *VAR_5, size_t VAR_6,
    size_t VAR_7)
{
 ssize_t VAR_8;
 struct uwb_rceb *VAR_9 = VAR_4->evt_buf;
 struct uwb_rccb *VAR_10 = VAR_4->cmd_buf;
 u16 VAR_11 = VAR_9->wEvent;
 u8 VAR_12 = VAR_9->bEventType;
 u8 VAR_13;

 FUNC_3(&VAR_4->evt_complete);
 VAR_4->evt_result = -VAR_0;
 do {
  FUNC_1(&VAR_13, 1);
 } while (VAR_13 == 0x00 || VAR_13 == 0xff);
 VAR_10->bCommandContext = VAR_13;
 VAR_8 = VAR_4->cmd(VAR_4, VAR_5, VAR_6);
 if (VAR_8 < 0)
  goto error;

 VAR_8 = FUNC_6(
  &VAR_4->evt_complete, VAR_3);
 if (VAR_8 == 0) {
  VAR_8 = -VAR_2;
  goto error;
 }
 if (VAR_8 < 0)
  goto error;
 VAR_8 = VAR_4->evt_result;
 if (VAR_8 < 0) {
  FUNC_0(VAR_4->dev, "%s: command reply reception failed: %zd\n",
   VAR_5, VAR_8);
  goto error;
 }






 if (FUNC_2(VAR_4, VAR_4->evt_buf, ((void*)0),
        0, 0xfd, 0x0022) == 0) {

  VAR_8 = VAR_4->wait_init_done(VAR_4);
  if (VAR_8 < 0)
   goto error;
  VAR_8 = VAR_4->evt_result;
 }
 if (VAR_8 != VAR_7) {
  FUNC_0(VAR_4->dev, "%s returned only %zu bytes, %zu expected\n",
   VAR_5, VAR_8, VAR_7);
  VAR_8 = -VAR_1;
  goto error;
 }

 VAR_8 = FUNC_2(VAR_4, VAR_4->evt_buf, VAR_5, VAR_13,
      VAR_12, VAR_11);
error:
 return VAR_8;
}

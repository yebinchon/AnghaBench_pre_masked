
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
typedef int u8 ;
typedef void* u16 ;
struct wil6210_priv {int wmi_mutex; int wmi_ev_lock; void* reply_size; int * reply_buf; int reply_mid; void* reply_id; int wmi_call; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wil6210_priv*,void*,int ,void*,void*) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 unsigned long FUNC_8 (int *,int ) ;
 int FUNC_9 (struct wil6210_priv*,char*,void*,void*,scalar_t__) ;
 int FUNC_10 (struct wil6210_priv*,char*,void*,void*,int) ;

int FUNC_11(struct wil6210_priv *VAR_2, u16 VAR_3, u8 VAR_4, void *VAR_5, u16 VAR_6,
      u16 VAR_7, void *VAR_8, u16 VAR_9, int VAR_10)
{
 int VAR_11;
 unsigned long VAR_12;
 ulong VAR_13;

 FUNC_3(&VAR_2->wmi_mutex);

 FUNC_6(&VAR_2->wmi_ev_lock, VAR_13);
 VAR_2->reply_id = VAR_7;
 VAR_2->reply_mid = VAR_4;
 VAR_2->reply_buf = VAR_8;
 VAR_2->reply_size = VAR_9;
 FUNC_5(&VAR_2->wmi_call);
 FUNC_7(&VAR_2->wmi_ev_lock, VAR_13);

 VAR_11 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_11)
  goto out;

 VAR_12 = FUNC_8(&VAR_2->wmi_call,
          FUNC_2(VAR_10));
 if (0 == VAR_12) {
  FUNC_10(VAR_2, "wmi_call(0x%04x->0x%04x) timeout %d msec\n",
   VAR_3, VAR_7, VAR_10);
  VAR_11 = -VAR_0;
 } else {
  FUNC_9(VAR_2,
       "wmi_call(0x%04x->0x%04x) completed in %d msec\n",
       VAR_3, VAR_7,
       VAR_10 - FUNC_1(VAR_12));
 }

out:
 FUNC_6(&VAR_2->wmi_ev_lock, VAR_13);
 VAR_2->reply_id = 0;
 VAR_2->reply_mid = VAR_1;
 VAR_2->reply_buf = ((void*)0);
 VAR_2->reply_size = 0;
 FUNC_7(&VAR_2->wmi_ev_lock, VAR_13);

 FUNC_4(&VAR_2->wmi_mutex);

 return VAR_11;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil6210_priv {int status; int bus_request_kbps_pre_suspend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct wil6210_priv*,int ) ;
 int FUNC_3 (struct wil6210_priv*,int ,int ) ;
 int FUNC_4 (struct wil6210_priv*) ;
 int FUNC_5 (struct wil6210_priv*,char*,int) ;
 int FUNC_6 (struct wil6210_priv*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct wil6210_priv*) ;
 int FUNC_8 (struct wil6210_priv*) ;
 int FUNC_9 (struct wil6210_priv*) ;

__attribute__((used)) static int FUNC_10(struct wil6210_priv *VAR_5)
{
 int VAR_6 = 0;




 FUNC_1(VAR_3, VAR_5->status);
 FUNC_0(VAR_4, VAR_5->status);
 FUNC_3(VAR_5, VAR_1, VAR_0);
 FUNC_7(VAR_5);

 FUNC_2(VAR_5, VAR_5->bus_request_kbps_pre_suspend);


 VAR_6 = FUNC_9(VAR_5);
 if (VAR_6) {
  FUNC_5(VAR_5, "device failed to resume (%d)\n", VAR_6);
  if (VAR_2)
   goto out;
  VAR_6 = FUNC_4(VAR_5);
  if (VAR_6) {
   FUNC_5(VAR_5, "wil_down failed (%d)\n", VAR_6);
   goto out;
  }
  VAR_6 = FUNC_8(VAR_5);
  if (VAR_6) {
   FUNC_5(VAR_5, "wil_up failed (%d)\n", VAR_6);
   goto out;
  }
 }


 FUNC_6(VAR_5);

out:
 if (VAR_6)
  FUNC_1(VAR_4, VAR_5->status);
 return VAR_6;
}

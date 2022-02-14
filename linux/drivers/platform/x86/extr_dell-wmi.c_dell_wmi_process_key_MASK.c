
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_device {int dev; } ;
struct key_entry {scalar_t__ keycode; } ;
struct dell_wmi_priv {int input_dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,int *) ;
 struct dell_wmi_priv* FUNC_2 (int *) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (char*,int,int) ;
 struct key_entry* FUNC_5 (int ,int) ;
 int FUNC_6 (int ,struct key_entry const*,int,int) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_7(struct wmi_device *VAR_5, int VAR_6, int VAR_7)
{
 struct dell_wmi_priv *VAR_8 = FUNC_2(&VAR_5->dev);
 const struct key_entry *VAR_9;

 VAR_9 = FUNC_5(VAR_8->input_dev,
      (VAR_6 << 16) | VAR_7);
 if (!VAR_9) {
  FUNC_4("Unknown key with type 0x%04x and code 0x%04x pressed\n",
   VAR_6, VAR_7);
  return;
 }

 FUNC_3("Key with type 0x%04x and code 0x%04x pressed\n", VAR_6, VAR_7);


 if ((VAR_9->keycode == VAR_2 ||
      VAR_9->keycode == VAR_1) &&
     FUNC_0())
  return;

 if (VAR_6 == 0x0000 && VAR_7 == 0xe025 && !VAR_4)
  return;

 if (VAR_9->keycode == VAR_3)
  FUNC_1(
   VAR_0, ((void*)0));

 FUNC_6(VAR_8->input_dev, VAR_9, 1, 1);
}

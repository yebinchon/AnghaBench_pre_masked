
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct wmi_device {int dev; } ;
struct key_entry {int code; int type; } ;
struct dell_wmi_priv {TYPE_3__* input_dev; } ;
struct dell_dmi_results {int err; int keymap_size; struct key_entry* keymap; } ;
struct TYPE_8__ {int * parent; } ;
struct TYPE_7__ {int bustype; } ;
struct TYPE_9__ {char* name; TYPE_2__ dev; TYPE_1__ id; } ;


 int FUNC_0 (struct key_entry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct key_entry* VAR_4 ;
 struct key_entry* VAR_5 ;
 struct key_entry* VAR_6 ;
 struct dell_wmi_priv* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,struct dell_dmi_results*) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int,struct key_entry*,int) ;
 TYPE_3__* FUNC_4 () ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 struct key_entry* FUNC_7 (int,int,int ) ;
 int FUNC_8 (struct key_entry*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_3__*,struct key_entry*,int *) ;

__attribute__((used)) static int FUNC_11(struct wmi_device *VAR_8)
{
 struct dell_wmi_priv *VAR_9 = FUNC_1(&VAR_8->dev);
 struct dell_dmi_results VAR_10 = {};
 struct key_entry *VAR_11;
 int VAR_12, VAR_13, VAR_14 = 0;

 VAR_9->input_dev = FUNC_4();
 if (!VAR_9->input_dev)
  return -VAR_1;

 VAR_9->input_dev->name = "Dell WMI hotkeys";
 VAR_9->input_dev->id.bustype = VAR_0;
 VAR_9->input_dev->dev.parent = &VAR_8->dev;

 if (FUNC_2(VAR_7, &VAR_10)) {





  FUNC_9("no DMI; using the old-style hotkey interface\n");
 }

 if (VAR_10.err) {
  VAR_12 = VAR_10.err;
  goto err_free_dev;
 }

 VAR_11 = FUNC_7(VAR_10.keymap_size +
    FUNC_0(VAR_4) +
    FUNC_0(VAR_5) +
    FUNC_0(VAR_6) +
    1,
    sizeof(struct key_entry), VAR_2);
 if (!VAR_11) {
  FUNC_8(VAR_10.keymap);
  VAR_12 = -VAR_1;
  goto err_free_dev;
 }


 for (VAR_13 = 0; VAR_13 < VAR_10.keymap_size; VAR_13++) {
  VAR_11[VAR_14] = VAR_10.keymap[VAR_13];
  VAR_11[VAR_14].code |= (0x0010 << 16);
  VAR_14++;
 }

 FUNC_8(VAR_10.keymap);


 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_5); VAR_13++) {
  const struct key_entry *VAR_15 = &VAR_5[VAR_13];






  if (VAR_10.keymap_size &&
      FUNC_3(VAR_15->code | (0x0010 << 16),
      VAR_11, VAR_10.keymap_size)
     )
   continue;

  VAR_11[VAR_14] = *VAR_15;
  VAR_11[VAR_14].code |= (0x0010 << 16);
  VAR_14++;
 }


 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_6); VAR_13++) {
  VAR_11[VAR_14] = VAR_6[VAR_13];
  VAR_11[VAR_14].code |= (0x0011 << 16);
  VAR_14++;
 }





 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_4); VAR_13++) {
  VAR_11[VAR_14] = VAR_4[VAR_13];
  VAR_14++;
 }

 VAR_11[VAR_14].type = VAR_3;

 VAR_12 = FUNC_10(VAR_9->input_dev, VAR_11, ((void*)0));




 FUNC_8(VAR_11);
 if (VAR_12)
  goto err_free_dev;

 VAR_12 = FUNC_6(VAR_9->input_dev);
 if (VAR_12)
  goto err_free_dev;

 return 0;

 err_free_dev:
 FUNC_5(VAR_9->input_dev);
 return VAR_12;
}

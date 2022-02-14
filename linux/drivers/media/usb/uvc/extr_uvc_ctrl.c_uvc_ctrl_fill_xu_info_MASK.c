
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct uvc_device {int intfnum; } ;
struct uvc_control_info {int flags; int size; scalar_t__ selector; int entity; scalar_t__ index; } ;
struct uvc_control {TYPE_2__* entity; scalar_t__ index; } ;
typedef int __le16 ;
struct TYPE_3__ {int guidExtensionCode; } ;
struct TYPE_4__ {int id; TYPE_1__ extension; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct uvc_device*,struct uvc_control const*,struct uvc_control_info*) ;
 int FUNC_5 (struct uvc_device*,struct uvc_control const*,struct uvc_control_info*) ;
 int FUNC_6 (struct uvc_device*,int ,int ,int ,scalar_t__,int *,int) ;
 int FUNC_7 (int ,char*,int ,scalar_t__,int,...) ;

__attribute__((used)) static int FUNC_8(struct uvc_device *VAR_11,
 const struct uvc_control *VAR_12, struct uvc_control_info *VAR_13)
{
 u8 *VAR_14;
 int VAR_15;

 VAR_14 = FUNC_1(2, VAR_1);
 if (VAR_14 == ((void*)0))
  return -VAR_0;

 FUNC_3(VAR_13->entity, VAR_12->entity->extension.guidExtensionCode,
        sizeof(VAR_13->entity));
 VAR_13->index = VAR_12->index;
 VAR_13->selector = VAR_12->index + 1;


 VAR_15 = FUNC_6(VAR_11, VAR_9, VAR_12->entity->id, VAR_11->intfnum,
        VAR_13->selector, VAR_14, 2);
 if (VAR_15 < 0) {
  FUNC_7(VAR_10,
     "GET_LEN failed on control %pUl/%u (%d).\n",
      VAR_13->entity, VAR_13->selector, VAR_15);
  goto done;
 }

 VAR_13->size = FUNC_2((__le16 *)VAR_14);

 VAR_13->flags = VAR_6 | VAR_5
      | VAR_7 | VAR_4;

 VAR_15 = FUNC_5(VAR_11, VAR_12, VAR_13);
 if (VAR_15 < 0) {
  FUNC_7(VAR_10,
     "Failed to get flags for control %pUl/%u (%d).\n",
     VAR_13->entity, VAR_13->selector, VAR_15);
  goto done;
 }

 FUNC_4(VAR_11, VAR_12, VAR_13);

 FUNC_7(VAR_10, "XU control %pUl/%u queried: len %u, "
    "flags { get %u set %u auto %u }.\n",
    VAR_13->entity, VAR_13->selector, VAR_13->size,
    (VAR_13->flags & VAR_3) ? 1 : 0,
    (VAR_13->flags & VAR_8) ? 1 : 0,
    (VAR_13->flags & VAR_2) ? 1 : 0);

done:
 FUNC_0(VAR_14);
 return VAR_15;
}

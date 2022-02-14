
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct uvc_device {int intfnum; } ;
struct uvc_control_info {int flags; int selector; } ;
struct uvc_control {TYPE_1__* entity; } ;
struct TYPE_2__ {int id; } ;


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
 int FUNC_0 (int*) ;
 int* FUNC_1 (int,int ) ;
 int FUNC_2 (struct uvc_device*,int ,int ,int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_3(struct uvc_device *VAR_11,
         const struct uvc_control *VAR_12,
         struct uvc_control_info *VAR_13)
{
 u8 *VAR_14;
 int VAR_15;

 VAR_14 = FUNC_1(1, VAR_1);
 if (VAR_14 == ((void*)0))
  return -VAR_0;

 VAR_15 = FUNC_2(VAR_11, VAR_10, VAR_12->entity->id, VAR_11->intfnum,
        VAR_13->selector, VAR_14, 1);
 if (!VAR_15)
  VAR_13->flags |= (VAR_14[0] & VAR_4 ?
    VAR_8 : 0)
       | (VAR_14[0] & VAR_5 ?
    VAR_9 : 0)
       | (VAR_14[0] & VAR_3 ?
    VAR_7 : 0)
       | (VAR_14[0] & VAR_2 ?
    VAR_6 : 0);

 FUNC_0(VAR_14);
 return VAR_15;
}

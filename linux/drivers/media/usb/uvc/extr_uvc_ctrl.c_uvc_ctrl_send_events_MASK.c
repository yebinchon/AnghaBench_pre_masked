
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct v4l2_ext_control {int value; int id; } ;
struct uvc_fh {int chain; } ;
struct uvc_control_mapping {scalar_t__ master_id; scalar_t__* slave_ids; } ;
struct TYPE_2__ {int flags; } ;
struct uvc_control {TYPE_1__ info; } ;


 unsigned int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,struct uvc_fh*,struct uvc_control*,struct uvc_control_mapping*,int ,scalar_t__) ;
 int FUNC_2 (int ,struct uvc_fh*,struct uvc_control*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct v4l2_ext_control const*,unsigned int,scalar_t__) ;
 struct uvc_control* FUNC_4 (int ,int ,struct uvc_control_mapping**) ;

__attribute__((used)) static void FUNC_5(struct uvc_fh *VAR_3,
 const struct v4l2_ext_control *VAR_4, unsigned int VAR_5)
{
 struct uvc_control_mapping *VAR_6;
 struct uvc_control *VAR_7;
 u32 VAR_8 = VAR_2;
 unsigned int VAR_9;
 unsigned int VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_5; ++VAR_9) {
  VAR_7 = FUNC_4(VAR_3->chain, VAR_4[VAR_9].id, &VAR_6);

  if (VAR_7->info.flags & VAR_0)

   continue;

  for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_6->slave_ids); ++VAR_10) {
   u32 VAR_11 = VAR_6->slave_ids[VAR_10];

   if (!VAR_11)
    break;





   if (FUNC_3(VAR_4, VAR_5,
       VAR_11))
    continue;

   FUNC_2(VAR_3->chain, VAR_3, VAR_7,
        VAR_11);
  }





  if (VAR_6->master_id &&
      FUNC_3(VAR_4, VAR_5,
      VAR_6->master_id))
   VAR_8 |= VAR_1;

  FUNC_1(VAR_3->chain, VAR_3, VAR_7, VAR_6,
        VAR_4[VAR_9].value, VAR_8);
 }
}

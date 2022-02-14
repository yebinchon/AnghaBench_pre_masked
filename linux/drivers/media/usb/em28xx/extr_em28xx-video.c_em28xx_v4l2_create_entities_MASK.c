
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct media_entity {int function; int flags; int name; } ;
struct TYPE_9__ {void* flags; } ;
struct TYPE_7__ {struct media_entity entity; } ;
struct TYPE_6__ {struct media_entity entity; } ;
struct em28xx_v4l2 {TYPE_4__ vbi_pad; TYPE_2__ vbi_dev; TYPE_4__ video_pad; TYPE_1__ vdev; } ;
struct em28xx {TYPE_3__* intf; int media_dev; TYPE_4__* input_pad; int tuner_type; struct media_entity* input_ent; scalar_t__ is_webcam; struct em28xx_v4l2* v4l2; } ;
struct TYPE_10__ {size_t type; } ;
struct TYPE_8__ {int dev; } ;




 TYPE_5__* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,char*,...) ;
 scalar_t__ FUNC_2 (struct em28xx*) ;
 int * VAR_8 ;
 int FUNC_3 (int ,struct media_entity*) ;
 int FUNC_4 (struct media_entity*,int,TYPE_4__*) ;

__attribute__((used)) static void FUNC_5(struct em28xx *VAR_9)
{
}

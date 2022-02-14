
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mmp_overlay {int status; TYPE_2__* path; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_5__ {scalar_t__ (* check_status ) (TYPE_2__*) ;} ;
struct TYPE_6__ {scalar_t__ status; TYPE_1__ ops; int name; } ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct mmp_overlay*,int) ;
 TYPE_4__* FUNC_2 (struct mmp_overlay*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(struct mmp_overlay *VAR_0, int VAR_1)
{
 if (VAR_0->status == VAR_1) {
  FUNC_0(FUNC_2(VAR_0)->dev, "overlay %s is already %s\n",
   VAR_0->path->name, FUNC_4(VAR_0->status));
  return;
 }
 VAR_0->status = VAR_1;
 FUNC_1(VAR_0, VAR_1);
 if (VAR_0->path->ops.check_status(VAR_0->path)
   != VAR_0->path->status)
  FUNC_3(VAR_0->path, VAR_1);
}

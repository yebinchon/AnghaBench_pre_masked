
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmmdev_heartbeat {int enabled; scalar_t__ interval_ns; } ;
struct vbg_dev {scalar_t__ heartbeat_interval_ms; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int) ;
 struct vmmdev_heartbeat* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct vmmdev_heartbeat*,int) ;
 int FUNC_3 (struct vbg_dev*,struct vmmdev_heartbeat*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct vbg_dev *VAR_3, bool VAR_4)
{
 struct vmmdev_heartbeat *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_2,
       VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->enabled = VAR_4;
 VAR_5->interval_ns = 0;
 VAR_6 = FUNC_3(VAR_3, VAR_5);
 FUNC_0(VAR_5->interval_ns, 1000000);
 VAR_3->heartbeat_interval_ms = VAR_5->interval_ns;
 FUNC_2(VAR_5, sizeof(*VAR_5));

 return FUNC_4(VAR_6);
}

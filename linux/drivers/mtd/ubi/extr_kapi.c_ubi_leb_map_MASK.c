
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume_desc {scalar_t__ mode; struct ubi_volume* vol; } ;
struct ubi_volume {scalar_t__ vol_type; scalar_t__ upd_marker; int vol_id; struct ubi_device* ubi; } ;
struct ubi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,int ,int) ;
 scalar_t__ FUNC_1 (struct ubi_volume*,int) ;
 int FUNC_2 (struct ubi_device*,struct ubi_volume*,int,int *,int ,int ) ;
 int FUNC_3 (struct ubi_volume*,int) ;

int FUNC_4(struct ubi_volume_desc *VAR_6, int VAR_7)
{
 struct ubi_volume *VAR_8 = VAR_6->vol;
 struct ubi_device *VAR_9 = VAR_8->ubi;

 FUNC_0("map LEB %d:%d", VAR_8->vol_id, VAR_7);

 if (VAR_6->mode == VAR_4 || VAR_8->vol_type == VAR_5)
  return -VAR_3;

 if (!FUNC_3(VAR_8, VAR_7))
  return -VAR_2;

 if (VAR_8->upd_marker)
  return -VAR_0;

 if (FUNC_1(VAR_8, VAR_7))
  return -VAR_1;

 return FUNC_2(VAR_9, VAR_8, VAR_7, ((void*)0), 0, 0);
}

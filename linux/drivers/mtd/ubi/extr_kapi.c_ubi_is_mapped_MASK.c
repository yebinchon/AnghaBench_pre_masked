
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume_desc {struct ubi_volume* vol; } ;
struct ubi_volume {scalar_t__ upd_marker; int vol_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct ubi_volume*,int) ;
 int FUNC_2 (struct ubi_volume*,int) ;

int FUNC_3(struct ubi_volume_desc *VAR_2, int VAR_3)
{
 struct ubi_volume *VAR_4 = VAR_2->vol;

 FUNC_0("test LEB %d:%d", VAR_4->vol_id, VAR_3);

 if (!FUNC_2(VAR_4, VAR_3))
  return -VAR_1;

 if (VAR_4->upd_marker)
  return -VAR_0;

 return FUNC_1(VAR_4, VAR_3);
}

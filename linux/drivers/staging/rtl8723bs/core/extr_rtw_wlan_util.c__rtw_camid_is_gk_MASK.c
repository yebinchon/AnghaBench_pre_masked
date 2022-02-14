
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct cam_ctl_t {int bitmap; } ;
struct dvobj_priv {TYPE_1__* cam_cache; struct cam_ctl_t cam_ctl; } ;
struct adapter {int dummy; } ;
struct TYPE_2__ {int ctrl; } ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 size_t VAR_1 ;
 struct dvobj_priv* FUNC_1 (struct adapter*) ;

__attribute__((used)) static bool FUNC_2(struct adapter *VAR_2, u8 VAR_3)
{
 struct dvobj_priv *VAR_4 = FUNC_1(VAR_2);
 struct cam_ctl_t *VAR_5 = &VAR_4->cam_ctl;
 bool VAR_6 = 0;

 if (VAR_3 >= VAR_1)
  goto exit;

 if (!(VAR_5->bitmap & FUNC_0(VAR_3)))
  goto exit;

 VAR_6 = (VAR_4->cam_cache[VAR_3].ctrl&VAR_0)?1:0;

exit:
 return VAR_6;
}

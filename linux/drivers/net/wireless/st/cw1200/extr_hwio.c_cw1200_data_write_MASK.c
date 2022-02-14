
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cw1200_common {int buf_id_tx; int hwbus_priv; TYPE_1__* hwbus_ops; } ;
struct TYPE_2__ {int (* unlock ) (int ) ;int (* lock ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cw1200_common*,int ,void const*,size_t,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct cw1200_common *VAR_2, const void *VAR_3,
   size_t VAR_4)
{
 int VAR_5, VAR_6 = 1;
 int VAR_7 = VAR_2->buf_id_tx;

 VAR_2->hwbus_ops->lock(VAR_2->hwbus_priv);

 while (VAR_6 <= VAR_0) {
  VAR_5 = FUNC_0(VAR_2,
      VAR_1, VAR_3,
      VAR_4, VAR_7);
  if (!VAR_5) {
   VAR_7 = (VAR_7 + 1) & 31;
   VAR_2->buf_id_tx = VAR_7;
   break;
  } else {
   VAR_6++;
   FUNC_1(1);
   FUNC_2("error :[%d]\n", VAR_5);
  }
 }

 VAR_2->hwbus_ops->unlock(VAR_2->hwbus_priv);
 return VAR_5;
}

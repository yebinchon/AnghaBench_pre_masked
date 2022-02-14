
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct fscache_object {TYPE_2__* cookie; } ;
typedef int loff_t ;
typedef enum fscache_checkaux { ____Placeholder_fscache_checkaux } fscache_checkaux ;
struct TYPE_4__ {int netfs_data; TYPE_1__* def; } ;
struct TYPE_3__ {int (* check_aux ) (int ,void const*,int ,int ) ;} ;


 int FUNC_0 () ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,void const*,int ,int ) ;

enum fscache_checkaux FUNC_3(struct fscache_object *VAR_4,
     const void *VAR_5, uint16_t VAR_6,
     loff_t VAR_7)
{
 enum fscache_checkaux VAR_8;

 if (!VAR_4->cookie->def->check_aux) {
  FUNC_1(&VAR_0);
  return 128;
 }

 VAR_8 = VAR_4->cookie->def->check_aux(VAR_4->cookie->netfs_data,
      VAR_5, VAR_6, VAR_7);
 switch (VAR_8) {

 case 128:
  FUNC_1(&VAR_2);
  break;


 case 130:
  FUNC_1(&VAR_3);
  break;


 case 129:
  FUNC_1(&VAR_1);
  break;

 default:
  FUNC_0();
 }

 return VAR_8;
}

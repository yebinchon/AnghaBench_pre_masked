
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_xdomain {int get_properties_work; TYPE_1__* tb; int properties_changed_work; int get_uuid_work; scalar_t__ needs_uuid; int properties_changed_retries; int properties_retries; int uuid_retries; } ;
struct TYPE_2__ {int wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct tb_xdomain *VAR_3)
{
 VAR_3->uuid_retries = VAR_2;
 VAR_3->properties_retries = VAR_1;
 VAR_3->properties_changed_retries = VAR_0;

 if (VAR_3->needs_uuid) {
  FUNC_1(VAR_3->tb->wq, &VAR_3->get_uuid_work,
       FUNC_0(100));
 } else {

  FUNC_1(VAR_3->tb->wq, &VAR_3->properties_changed_work,
       FUNC_0(100));
  FUNC_1(VAR_3->tb->wq, &VAR_3->get_properties_work,
       FUNC_0(1000));
 }
}

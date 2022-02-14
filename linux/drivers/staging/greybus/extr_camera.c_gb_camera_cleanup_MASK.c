
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_camera {int mutex; int * connection; int * data_connection; } ;


 int FUNC_0 (struct gb_camera*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct gb_camera *VAR_0)
{
 FUNC_0(VAR_0);

 FUNC_3(&VAR_0->mutex);
 if (VAR_0->data_connection) {
  FUNC_2(VAR_0->data_connection);
  FUNC_1(VAR_0->data_connection);
  VAR_0->data_connection = ((void*)0);
 }

 if (VAR_0->connection) {
  FUNC_2(VAR_0->connection);
  FUNC_1(VAR_0->connection);
  VAR_0->connection = ((void*)0);
 }
 FUNC_4(&VAR_0->mutex);
}

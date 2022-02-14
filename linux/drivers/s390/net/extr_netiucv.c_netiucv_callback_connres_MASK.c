
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iucv_path {struct iucv_connection* private; } ;
struct iucv_connection {int fsm; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct iucv_connection*) ;

__attribute__((used)) static void FUNC_1(struct iucv_path *VAR_1, u8 *VAR_2)
{
 struct iucv_connection *VAR_3 = VAR_1->private;

 FUNC_0(VAR_3->fsm, VAR_0, VAR_3);
}

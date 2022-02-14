
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_log {struct gb_connection* connection; } ;
struct gb_connection {int dummy; } ;
struct gb_bundle {int dummy; } ;


 int FUNC_0 (struct gb_connection*) ;
 int FUNC_1 (struct gb_connection*) ;
 struct gb_log* FUNC_2 (struct gb_bundle*) ;
 int FUNC_3 (struct gb_log*) ;

__attribute__((used)) static void FUNC_4(struct gb_bundle *VAR_0)
{
 struct gb_log *VAR_1 = FUNC_2(VAR_0);
 struct gb_connection *VAR_2 = VAR_1->connection;

 FUNC_1(VAR_2);
 FUNC_0(VAR_2);

 FUNC_3(VAR_1);
}

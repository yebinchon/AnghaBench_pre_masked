
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct earlycon_device {int port; } ;
struct console {struct earlycon_device* data; } ;


 int FUNC_0 (int *,char const*,int ) ;

__attribute__((used)) static void FUNC_1(struct console *VAR_0,
          const char *VAR_1,
          u_int VAR_2)
{
 struct earlycon_device *VAR_3 = VAR_0->data;

 FUNC_0(&VAR_3->port, VAR_1, VAR_2);
}

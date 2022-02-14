
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct kgdb_nmi_tty_priv* driver_data; } ;
struct kgdb_nmi_tty_priv {int port; } ;


 int FUNC_0 (struct kgdb_nmi_tty_priv*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_0)
{
 struct kgdb_nmi_tty_priv *VAR_1 = VAR_0->driver_data;

 VAR_0->driver_data = ((void*)0);
 FUNC_1(&VAR_1->port);
 FUNC_0(VAR_1);
}

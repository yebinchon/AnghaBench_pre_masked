
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct kgdb_nmi_tty_priv* driver_data; } ;
struct kgdb_nmi_tty_priv {int port; } ;
struct file {unsigned int f_flags; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int *,struct tty_struct*,struct file*) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_4, struct file *VAR_5)
{
 struct kgdb_nmi_tty_priv *VAR_6 = VAR_4->driver_data;
 unsigned int VAR_7 = VAR_5->f_flags & VAR_0;
 int VAR_8;

 VAR_8 = FUNC_1(&VAR_6->port, VAR_4, VAR_5);
 if (!VAR_8 && (VAR_7 == VAR_1 || VAR_7 == VAR_2))
  FUNC_0(&VAR_3);

 return VAR_8;
}

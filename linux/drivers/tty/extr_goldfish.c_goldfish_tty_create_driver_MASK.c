
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_driver {char* driver_name; char* name; int flags; int init_termios; int subtype; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct tty_driver* FUNC_0 (int ) ;
 struct tty_driver* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int * FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tty_driver*) ;
 int FUNC_4 (struct tty_driver*) ;
 int FUNC_5 (struct tty_driver*,int *) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_6(void)
{
 int VAR_12;
 struct tty_driver *VAR_13;

 VAR_10 = FUNC_1(VAR_8,
    sizeof(*VAR_10),
    VAR_1);
 if (VAR_10 == ((void*)0)) {
  VAR_12 = -VAR_0;
  goto err_alloc_goldfish_ttys_failed;
 }
 VAR_13 = FUNC_0(VAR_8);
 if (VAR_13 == ((void*)0)) {
  VAR_12 = -VAR_0;
  goto err_alloc_tty_driver_failed;
 }
 VAR_13->driver_name = "goldfish";
 VAR_13->name = "ttyGF";
 VAR_13->type = VAR_6;
 VAR_13->subtype = VAR_2;
 VAR_13->init_termios = VAR_11;
 VAR_13->flags = VAR_5 | VAR_4 |
      VAR_3;
 FUNC_5(VAR_13, &VAR_9);
 VAR_12 = FUNC_4(VAR_13);
 if (VAR_12)
  goto err_tty_register_driver_failed;

 VAR_7 = VAR_13;
 return 0;

err_tty_register_driver_failed:
 FUNC_3(VAR_13);
err_alloc_tty_driver_failed:
 FUNC_2(VAR_10);
 VAR_10 = ((void*)0);
err_alloc_goldfish_ttys_failed:
 return VAR_12;
}

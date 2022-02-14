
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kgdb_io {int name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 struct kgdb_io* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct kgdb_io *VAR_3)
{
 FUNC_0(VAR_1);





 FUNC_2();

 FUNC_4(&VAR_2);

 FUNC_1(VAR_0 != VAR_3);
 VAR_0 = ((void*)0);

 FUNC_5(&VAR_2);

 FUNC_3("Unregistered I/O driver %s, debugger disabled\n",
  VAR_3->name);
}

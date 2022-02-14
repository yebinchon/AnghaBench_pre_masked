
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct initio_host {int jsint; scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct initio_host * VAR_7, int VAR_8)
{
 FUNC_3(VAR_2, VAR_7->addr + VAR_4);

 while (!((VAR_7->jsint = FUNC_1(VAR_7->addr + VAR_5)) & VAR_3))
  FUNC_0();


 FUNC_3(0, VAR_7->addr + VAR_6);




 FUNC_2(VAR_8 * VAR_0);

 FUNC_1(VAR_7->addr + VAR_5);
 return VAR_1;
}

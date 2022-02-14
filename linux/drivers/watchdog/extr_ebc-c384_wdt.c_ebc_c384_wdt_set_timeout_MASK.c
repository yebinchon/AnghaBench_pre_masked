
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {unsigned int timeout; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 unsigned int FUNC_1 (unsigned int,int) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_1, unsigned VAR_2)
{

 if (VAR_2 > 255) {

  VAR_1->timeout = FUNC_1(VAR_2, 60);


  FUNC_0(0x00, VAR_0);
 } else {
  VAR_1->timeout = VAR_2;


  FUNC_0(0x80, VAR_0);
 }

 return 0;
}

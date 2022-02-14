
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eg20t_port {scalar_t__ membase; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct eg20t_port *VAR_1,
         const unsigned char *VAR_2, int VAR_3)
{
 int VAR_4;
 unsigned int VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_3;) {
  VAR_5 = VAR_2[VAR_4++];
  FUNC_0(VAR_5, VAR_1->membase + VAR_0);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx88_core {int boardnr; } ;
struct cx8802_driver {struct cx88_core* core; } ;



 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct cx8802_driver *VAR_1)
{
 struct cx88_core *VAR_2 = VAR_1->core;
 int VAR_3 = 0;

 switch (VAR_2->boardnr) {
 case 128:

  break;
 default:
  VAR_3 = -VAR_0;
 }
 return VAR_3;
}

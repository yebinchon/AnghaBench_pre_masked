
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int has_dvb; } ;
struct cx231xx {int * dvb; TYPE_1__ board; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct cx231xx *VAR_0)
{
 if (!VAR_0->board.has_dvb) {

  return 0;
 }

 if (VAR_0->dvb) {
  FUNC_1(VAR_0->dvb);
  FUNC_0(VAR_0->dvb);
  VAR_0->dvb = ((void*)0);
 }

 return 0;
}

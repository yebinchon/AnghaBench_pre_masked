
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {int daisy; } ;
struct pardevice {int daisy; } ;
struct daisydev {int devnum; int daisy; int port; struct daisydev* next; } ;


 int FUNC_0 (struct pardevice*) ;
 struct parport* FUNC_1 (int ) ;
 int FUNC_2 (struct parport*) ;
 struct pardevice* FUNC_3 (struct parport*,char const*,int *,int *,int *,int ,int *) ;
 int FUNC_4 (struct pardevice*) ;
 int FUNC_5 (struct pardevice*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct daisydev* VAR_0 ;
 int VAR_1 ;

struct pardevice *FUNC_8(int VAR_2, const char *VAR_3)
{
 struct daisydev *VAR_4 = VAR_0;
 struct parport *VAR_5;
 struct pardevice *VAR_6;
 int VAR_7;

 FUNC_6(&VAR_1);
 while (VAR_4 && VAR_4->devnum != VAR_2)
  VAR_4 = VAR_4->next;

 if (!VAR_4) {
  FUNC_7(&VAR_1);
  return ((void*)0);
 }

 VAR_7 = VAR_4->daisy;
 VAR_5 = FUNC_1(VAR_4->port);
 FUNC_7(&VAR_1);

 VAR_6 = FUNC_3(VAR_5, VAR_3, ((void*)0), ((void*)0), ((void*)0), 0, ((void*)0));
 FUNC_2(VAR_5);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->daisy = VAR_7;


 if (VAR_7 >= 0) {
  int VAR_8;
  FUNC_0(VAR_6);
  VAR_8 = VAR_5->daisy;
  FUNC_4(VAR_6);

  if (VAR_8 != VAR_7) {

   FUNC_5(VAR_6);
   return ((void*)0);
  }
 }

 return VAR_6;
}

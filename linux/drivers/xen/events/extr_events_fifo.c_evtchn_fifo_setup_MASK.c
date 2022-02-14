
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_info {unsigned int evtchn; } ;
struct evtchn_expand_array {int array_gfn; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct evtchn_expand_array*) ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 void** VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 (void*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (void*) ;

__attribute__((used)) static int FUNC_7(struct irq_info *VAR_8)
{
 unsigned VAR_9 = VAR_8->evtchn;
 unsigned VAR_10;
 int VAR_11;

 VAR_10 = VAR_9 / VAR_2 + 1;

 if (VAR_10 > VAR_5)
  return -VAR_0;

 while (VAR_7 < VAR_10) {
  void *VAR_12;
  struct evtchn_expand_array VAR_13;


  VAR_12 = VAR_6[VAR_7];
  if (!VAR_12) {
   VAR_12 = (void *)FUNC_1(VAR_4);
   if (VAR_12 == ((void*)0)) {
    VAR_11 = -VAR_1;
    goto error;
   }
   VAR_6[VAR_7] = VAR_12;
  }


  FUNC_3(VAR_12);

  VAR_13.array_gfn = FUNC_6(VAR_12);

  VAR_11 = FUNC_0(VAR_3, &VAR_13);
  if (VAR_11 < 0)
   goto error;

  VAR_7++;
 }
 return 0;

  error:
 if (VAR_7 == 0)
  FUNC_4("xen: unable to expand event array with initial page (%d)\n", VAR_11);
 else
  FUNC_5("unable to expand event array (%d)\n", VAR_11);
 FUNC_2();
 return VAR_11;
}

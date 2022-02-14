
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct loopback_test {char* test_name; int test_id; } ;
struct TYPE_2__ {int type; int * name; } ;


 int FUNC_0 (struct loopback_test*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (struct loopback_test*) ;
 int FUNC_3 (struct loopback_test*) ;
 int FUNC_4 (struct loopback_test*) ;
 int FUNC_5 (struct loopback_test*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct loopback_test*) ;
 int VAR_1 ;
 scalar_t__ FUNC_8 (int *,char*) ;
 int FUNC_9 () ;
 int FUNC_10 (struct loopback_test*) ;

void FUNC_11(struct loopback_test *VAR_2)
{
 int VAR_3;
 int VAR_4;

 for (VAR_3 = 0; VAR_0[VAR_3].name != ((void*)0); VAR_3++) {
  if (FUNC_8(VAR_0[VAR_3].name, VAR_2->test_name))
   VAR_2->test_id = VAR_0[VAR_3].type;
 }
 if (!VAR_2->test_id) {
  FUNC_1(VAR_1, "invalid test %s\n", VAR_2->test_name);
  FUNC_9();
  return;
 }

 FUNC_5(VAR_2);

 VAR_4 = FUNC_4(VAR_2);
 if (VAR_4)
  goto err;

 FUNC_7(VAR_2);

 VAR_4 = FUNC_10(VAR_2);
 FUNC_0(VAR_2);
 if (VAR_4)
  goto err;


 FUNC_2(VAR_2);

 FUNC_3(VAR_2);

 return;

err:
 FUNC_6("Error running test\n");
 return;
}

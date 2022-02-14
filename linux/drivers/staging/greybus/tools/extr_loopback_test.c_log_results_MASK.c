
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
struct tm {int dummy; } ;
struct loopback_test {char* test_name; int size; int iteration_max; int device_count; int porcelain; scalar_t__ file_output; int aggregate_results; scalar_t__ aggregate_output; TYPE_1__* devices; } ;
typedef int file_name ;
typedef int data ;
struct TYPE_2__ {char* name; int results; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct loopback_test*,int) ;
 int FUNC_3 (struct loopback_test*,int *,char*,char*,int,struct tm*) ;
 int FUNC_4 (int ,char*,...) ;
 struct tm* FUNC_5 (int *) ;
 int FUNC_6 (char*,int,int) ;
 int FUNC_7 (char*,int,char*,char*,int,int) ;
 int VAR_5 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int,char*,int) ;

__attribute__((used)) static int FUNC_10(struct loopback_test *VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10;
 struct tm VAR_11;
 time_t VAR_12;
 char VAR_13[VAR_1];
 char VAR_14[VAR_0];

 VAR_12 = FUNC_8(((void*)0));
 VAR_11 = *FUNC_5(&VAR_12);







 if (VAR_6->file_output && !VAR_6->porcelain) {
  FUNC_7(VAR_13, sizeof(VAR_13), "%s_%d_%d.csv",
    VAR_6->test_name, VAR_6->size, VAR_6->iteration_max);

  VAR_7 = FUNC_6(VAR_13, VAR_4 | VAR_3 | VAR_2, 0644);
  if (VAR_7 < 0) {
   FUNC_4(VAR_5, "unable to open %s for appendation\n", VAR_13);
   FUNC_0();
  }

 }
 for (VAR_8 = 0; VAR_8 < VAR_6->device_count; VAR_8++) {
  if (!FUNC_2(VAR_6, VAR_8))
   continue;

  VAR_9 = FUNC_3(VAR_6, &VAR_6->devices[VAR_8].results,
        VAR_6->devices[VAR_8].name,
        VAR_14, sizeof(VAR_14), &VAR_11);
  if (VAR_6->file_output && !VAR_6->porcelain) {
   VAR_10 = FUNC_9(VAR_7, VAR_14, VAR_9);
   if (VAR_10 == -1)
    FUNC_4(VAR_5, "unable to write %d bytes to csv.\n", VAR_9);
  }

 }


 if (VAR_6->aggregate_output) {
  VAR_9 = FUNC_3(VAR_6, &VAR_6->aggregate_results, "aggregate",
        VAR_14, sizeof(VAR_14), &VAR_11);
  if (VAR_6->file_output && !VAR_6->porcelain) {
   VAR_10 = FUNC_9(VAR_7, VAR_14, VAR_9);
   if (VAR_10 == -1)
    FUNC_4(VAR_5, "unable to write %d bytes to csv.\n", VAR_9);
  }
 }

 if (VAR_6->file_output && !VAR_6->porcelain)
  FUNC_1(VAR_7);

 return 0;
}

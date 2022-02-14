
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct tmFwInfoStruct {int dummy; } ;
struct saa7164_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct saa7164_dev*) ;
 int FUNC_5 (struct saa7164_dev*,struct tmFwInfoStruct*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(void *VAR_2)
{
 struct saa7164_dev *VAR_3 = VAR_2;
 struct tmFwInfoStruct VAR_4;
 u64 VAR_5 = 0;

 FUNC_0(VAR_0, "thread started\n");

 FUNC_6();

 while (1) {
  FUNC_3(100);
  if (FUNC_2())
   break;
  FUNC_7();

  FUNC_0(VAR_0, "thread running\n");




  FUNC_4(VAR_3);


  if ((VAR_5 + 1000 ) < FUNC_1(VAR_1)) {
   FUNC_5(VAR_3, &VAR_4);
   VAR_5 = FUNC_1(VAR_1);
  }

 }

 FUNC_0(VAR_0, "thread exiting\n");
 return 0;
}

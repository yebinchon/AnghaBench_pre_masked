
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct docg3 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct docg3*) ;
 int FUNC_2 (struct docg3*) ;
 int FUNC_3 (struct docg3*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct docg3 *VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = 0;

 for (VAR_4 = 0; !FUNC_2(VAR_3) && VAR_4 < 5; VAR_4++)
  FUNC_4(20);
 if (!FUNC_2(VAR_3)) {
  FUNC_0("Timeout reached and the chip is still not ready\n");
  VAR_6 = -VAR_1;
  goto out;
 }

 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5 & VAR_0) {
  FUNC_0("Erase/Write failed on (a) plane(s), status = %x\n",
   VAR_5);
  VAR_6 = -VAR_2;
 }

out:
 FUNC_3(VAR_3);
 return VAR_6;
}

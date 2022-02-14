
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (char*,unsigned long,unsigned long) ;
 int FUNC_1 (scalar_t__,int *) ;
 unsigned long FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (char*,char*,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_5 (char*) ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static int FUNC_8(char *VAR_8, char *VAR_9)
{
 unsigned long VAR_10 = FUNC_5(VAR_9);
 unsigned long VAR_11;
 int VAR_12 = 0;

 FUNC_4(&VAR_8[1], (char *)VAR_4,
   VAR_1);
 FUNC_1(VAR_4, &VAR_5);
 VAR_11 = FUNC_2(&VAR_5);
 FUNC_7("Stopped at IP: %lx\n", VAR_11);






 if (VAR_2 && VAR_7 &&
     VAR_11 + VAR_12 == VAR_7 &&
     ((!FUNC_6(VAR_9, "sys_open") || !FUNC_6(VAR_9, "do_fork")))) {

  FUNC_7("Emul: rewind hit single step bp\n");
  VAR_6 = 1;
 } else if (FUNC_6(VAR_9, "silent") && VAR_11 + VAR_12 != VAR_10) {
  FUNC_0("kgdbts: BP mismatch %lx expected %lx\n",
      VAR_11 + VAR_12, VAR_10);
  return 1;
 }

 VAR_11 += VAR_12;
 VAR_3 = VAR_11;



 return 0;
}

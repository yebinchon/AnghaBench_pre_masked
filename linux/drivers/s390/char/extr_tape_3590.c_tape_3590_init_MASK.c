
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int,int,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int) ;
 int VAR_2 ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_7(void)
{
 int VAR_5;

 VAR_1 = FUNC_3("tape_3590", 2, 2, 4 * sizeof(long));
 FUNC_4(VAR_1, &VAR_2);




 FUNC_0(3, "3590 init\n");

 VAR_4 = FUNC_1("tape_3590", 0, 0);
 if (!VAR_4)
  return -VAR_0;


 VAR_5 = FUNC_2(&VAR_3);
 if (VAR_5) {
  FUNC_6(VAR_4);
  FUNC_0(3, "3590 init failed\n");
 } else
  FUNC_0(3, "3590 registered\n");
 return VAR_5;
}

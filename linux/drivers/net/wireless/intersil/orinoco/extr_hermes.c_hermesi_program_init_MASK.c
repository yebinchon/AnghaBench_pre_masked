
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hermes {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* init_cmd_wait ) (struct hermes*,int,int,int,int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hermes*,int) ;
 int FUNC_1 (struct hermes*,int ,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct hermes*,int,int,int,int ,int *) ;
 int FUNC_4 (struct hermes*,int,int,int,int ,int *) ;
 int FUNC_5 (struct hermes*,int,int,int,int ,int *) ;

__attribute__((used)) static int FUNC_6(struct hermes *VAR_3, u32 VAR_4)
{
 int VAR_5;







 FUNC_1(VAR_3, VAR_0, 0xFFFF);


 VAR_5 = VAR_3->ops->init_cmd_wait(VAR_3,
         0x0100 | VAR_1,
         0, 0, 0, ((void*)0));
 if (VAR_5)
  return VAR_5;

 VAR_5 = VAR_3->ops->init_cmd_wait(VAR_3,
         0x0000 | VAR_1,
         0, 0, 0, ((void*)0));
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_3, 1);
 FUNC_2("AUX enable returned %d\n", VAR_5);

 if (VAR_5)
  return VAR_5;

 FUNC_2("Enabling volatile, EP 0x%08x\n", VAR_4);
 VAR_5 = VAR_3->ops->init_cmd_wait(VAR_3,
         VAR_2,
         VAR_4 & 0xFFFFu,
         VAR_4 >> 16,
         0,
         ((void*)0));
 FUNC_2("PROGRAM_ENABLE returned %d\n", VAR_5);

 return VAR_5;
}

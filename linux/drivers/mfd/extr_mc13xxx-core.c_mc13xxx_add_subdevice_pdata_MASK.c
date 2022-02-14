
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfd_cell {void* platform_data; size_t pdata_size; int name; } ;
struct mc13xxx {int irq_data; int dev; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,scalar_t__,int ) ;
 char* FUNC_1 (struct mc13xxx*) ;
 int FUNC_2 (int ,int,struct mfd_cell*,int,int *,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int,char const*,char const*) ;
 scalar_t__ FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct mc13xxx *VAR_3,
  const char *VAR_4, void *VAR_5, size_t VAR_6)
{
 char VAR_7[30];
 const char *VAR_8 = FUNC_1(VAR_3);

 struct mfd_cell VAR_9 = {
  .platform_data = VAR_5,
  .pdata_size = VAR_6,
 };


 if (FUNC_4(VAR_7, sizeof(VAR_7), VAR_4, VAR_8) > sizeof(VAR_7))
  return -VAR_0;

 VAR_9.name = FUNC_0(VAR_7, FUNC_5(VAR_7) + 1, VAR_2);
 if (!VAR_9.name)
  return -VAR_1;

 return FUNC_2(VAR_3->dev, -1, &VAR_9, 1, ((void*)0), 0,
          FUNC_3(VAR_3->irq_data));
}

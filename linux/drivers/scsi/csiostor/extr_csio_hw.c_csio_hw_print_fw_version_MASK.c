
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_hw {int fwrev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct csio_hw*,char*,char*,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct csio_hw *VAR_0, char *VAR_1)
{
 FUNC_4(VAR_0, "%s: %u.%u.%u.%u\n", VAR_1,
      FUNC_1(VAR_0->fwrev),
      FUNC_3(VAR_0->fwrev),
      FUNC_2(VAR_0->fwrev),
      FUNC_0(VAR_0->fwrev));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_blob {int fw; scalar_t__ name; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct fw_blob* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(void)
{
 struct fw_blob *VAR_2;

 FUNC_0(&VAR_1);
 for (VAR_2 = VAR_0; VAR_2->name; VAR_2++)
  FUNC_2(VAR_2->fw);
 FUNC_1(&VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar9170 {size_t erp_mode; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,int ,size_t,char*,size_t,int ) ;
 int * VAR_0 ;

__attribute__((used)) static char *FUNC_1(struct ar9170 *VAR_1, char *VAR_2,
           size_t VAR_3, ssize_t *VAR_4)
{
 FUNC_0(VAR_2, *VAR_4, VAR_3, "ERP Setting: (%d) -> %s\n", VAR_1->erp_mode,
     VAR_0[VAR_1->erp_mode]);
 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_ooo_cmdsn {int ooo_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct iscsi_ooo_cmdsn* FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static struct iscsi_ooo_cmdsn *FUNC_3(void)
{
 struct iscsi_ooo_cmdsn *VAR_2 = ((void*)0);

 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (!VAR_2) {
  FUNC_2("Unable to allocate memory for"
   " struct iscsi_ooo_cmdsn.\n");
  return ((void*)0);
 }
 FUNC_0(&VAR_2->ooo_list);

 return VAR_2;
}

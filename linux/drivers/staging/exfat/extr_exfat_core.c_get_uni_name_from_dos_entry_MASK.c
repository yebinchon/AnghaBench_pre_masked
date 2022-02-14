
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct uni_name_t {int dummy; } ;
struct super_block {int dummy; } ;
struct dos_name_t {int name_case; int name; } ;
struct dos_dentry_t {int lcase; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct super_block*,struct uni_name_t*,struct dos_name_t*) ;

void FUNC_2(struct super_block *VAR_1,
     struct dos_dentry_t *VAR_2,
     struct uni_name_t *VAR_3, u8 VAR_4)
{
 struct dos_name_t VAR_5;

 if (VAR_4 == 0x0)
  VAR_5.name_case = 0x0;
 else
  VAR_5.name_case = VAR_2->lcase;

 FUNC_0(VAR_5.name, VAR_2->name, VAR_0);
 FUNC_1(VAR_1, VAR_3, &VAR_5);
}

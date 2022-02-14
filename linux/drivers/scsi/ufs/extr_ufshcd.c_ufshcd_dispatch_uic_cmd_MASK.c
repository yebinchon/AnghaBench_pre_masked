
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uic_command {int argument1; int argument2; int argument3; int command; } ;
struct ufs_hba {struct uic_command* active_uic_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct uic_command*) ;
 int FUNC_1 (struct ufs_hba*,int,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct ufs_hba *VAR_5, struct uic_command *VAR_6)
{
 FUNC_0(VAR_5->active_uic_cmd);

 VAR_5->active_uic_cmd = VAR_6;


 FUNC_1(VAR_5, VAR_6->argument1, VAR_2);
 FUNC_1(VAR_5, VAR_6->argument2, VAR_3);
 FUNC_1(VAR_5, VAR_6->argument3, VAR_4);


 FUNC_1(VAR_5, VAR_6->command & VAR_0,
        VAR_1);
}

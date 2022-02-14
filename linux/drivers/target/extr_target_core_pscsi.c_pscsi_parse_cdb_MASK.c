
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {int se_cmd_flags; } ;
typedef int sense_reason_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct se_cmd*,int ) ;
 int VAR_2 ;

__attribute__((used)) static sense_reason_t
FUNC_1(struct se_cmd *VAR_3)
{
 if (VAR_3->se_cmd_flags & VAR_0)
  return VAR_1;

 return FUNC_0(VAR_3, VAR_2);
}

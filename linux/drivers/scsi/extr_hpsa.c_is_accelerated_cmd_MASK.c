
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct CommandList {scalar_t__ cmd_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct CommandList *VAR_2)
{
 return VAR_2->cmd_type == VAR_0 || VAR_2->cmd_type == VAR_1;
}

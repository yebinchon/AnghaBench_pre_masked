
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvaser_cmd_ext {int len; } ;
struct TYPE_2__ {scalar_t__ cmd_no; } ;
struct kvaser_cmd {TYPE_1__ header; } ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (int ) ;

__attribute__((used)) static size_t FUNC_1(struct kvaser_cmd *VAR_1)
{
 size_t VAR_2;

 if (VAR_1->header.cmd_no == VAR_0)
  VAR_2 = FUNC_0(((struct kvaser_cmd_ext *)VAR_1)->len);
 else
  VAR_2 = sizeof(struct kvaser_cmd);

 return VAR_2;
}

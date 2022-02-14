
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct tb_cfg_result {int err; int response_route; scalar_t__ response_port; int member_0; } ;
struct tb_cfg_header {int dummy; } ;
struct TYPE_2__ {scalar_t__ eof; } ;
struct ctl_pkg {TYPE_1__ frame; struct tb_cfg_header* buffer; } ;
typedef enum tb_cfg_pkg_type { ____Placeholder_tb_cfg_pkg_type } tb_cfg_pkg_type ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ctl_pkg const*,int ,int,int ) ;
 struct tb_cfg_result FUNC_1 (struct ctl_pkg const*) ;
 int FUNC_2 (struct tb_cfg_header*) ;

__attribute__((used)) static struct tb_cfg_result FUNC_3(const struct ctl_pkg *VAR_1, u32 VAR_2,
      enum tb_cfg_pkg_type VAR_3, u64 VAR_4)
{
 struct tb_cfg_header *VAR_5 = VAR_1->buffer;
 struct tb_cfg_result VAR_6 = { 0 };

 if (VAR_1->frame.eof == VAR_0)
  return FUNC_1(VAR_1);

 VAR_6.response_port = 0;
 VAR_6.response_route = FUNC_2(VAR_5);
 VAR_6.err = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 return VAR_6;
}

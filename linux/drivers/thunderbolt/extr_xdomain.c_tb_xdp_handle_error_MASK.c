
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_xdp_header {scalar_t__ type; } ;
struct tb_xdp_error_response {int error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 scalar_t__ VAR_3 ;



__attribute__((used)) static int FUNC_0(const struct tb_xdp_header *VAR_4)
{
 const struct tb_xdp_error_response *VAR_5;

 if (VAR_4->type != VAR_3)
  return 0;

 VAR_5 = (const struct tb_xdp_error_response *)VAR_4;

 switch (VAR_5->error) {
 case 128:
 case 129:
  return -VAR_1;
 case 130:
  return -VAR_2;
 case 131:
  return -VAR_0;
 default:
  break;
 }

 return 0;
}

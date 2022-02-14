
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_cfg_request {scalar_t__ response_type; struct icm_pkg_header* request; } ;
struct icm_pkg_header {scalar_t__ code; } ;
struct TYPE_2__ {scalar_t__ eof; } ;
struct ctl_pkg {TYPE_1__ frame; struct icm_pkg_header* buffer; } ;



__attribute__((used)) static bool FUNC_0(const struct tb_cfg_request *VAR_0,
        const struct ctl_pkg *VAR_1)
{
 const struct icm_pkg_header *VAR_2 = VAR_1->buffer;
 const struct icm_pkg_header *VAR_3 = VAR_0->request;

 if (VAR_1->frame.eof != VAR_0->response_type)
  return 0;
 if (VAR_2->code != VAR_3->code)
  return 0;

 return 1;
}

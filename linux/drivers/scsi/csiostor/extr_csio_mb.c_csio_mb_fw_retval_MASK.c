
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_cmd_hdr {int lo; } ;
struct csio_mb {scalar_t__ mb; } ;
typedef enum fw_retval { ____Placeholder_fw_retval } fw_retval ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

enum fw_retval
FUNC_2(struct csio_mb *VAR_0)
{
 struct fw_cmd_hdr *VAR_1;

 VAR_1 = (struct fw_cmd_hdr *)(VAR_0->mb);

 return FUNC_0(FUNC_1(VAR_1->lo));
}

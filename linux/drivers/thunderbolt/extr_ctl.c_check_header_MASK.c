
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct tb_cfg_header {int unknown; } ;
struct TYPE_2__ {scalar_t__ size; int eof; int sof; } ;
struct ctl_pkg {TYPE_1__ frame; struct tb_cfg_header* buffer; } ;
typedef enum tb_cfg_pkg_type { ____Placeholder_tb_cfg_pkg_type } tb_cfg_pkg_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,char*,int,...) ;
 int FUNC_1 (struct tb_cfg_header*) ;

__attribute__((used)) static int FUNC_2(const struct ctl_pkg *VAR_1, u32 VAR_2,
   enum tb_cfg_pkg_type VAR_3, u64 VAR_4)
{
 struct tb_cfg_header *VAR_5 = VAR_1->buffer;


 if (FUNC_0(VAR_2 != VAR_1->frame.size,
   "wrong framesize (expected %#x, got %#x)\n",
   VAR_2, VAR_1->frame.size))
  return -VAR_0;
 if (FUNC_0(VAR_3 != VAR_1->frame.eof, "wrong eof (expected %#x, got %#x)\n",
   VAR_3, VAR_1->frame.eof))
  return -VAR_0;
 if (FUNC_0(VAR_1->frame.sof, "wrong sof (expected 0x0, got %#x)\n",
   VAR_1->frame.sof))
  return -VAR_0;


 if (FUNC_0(VAR_5->unknown != 1 << 9,
   "header->unknown is %#x\n", VAR_5->unknown))
  return -VAR_0;
 if (FUNC_0(VAR_4 != FUNC_1(VAR_5),
   "wrong route (expected %llx, got %llx)",
   VAR_4, FUNC_1(VAR_5)))
  return -VAR_0;
 return 0;
}

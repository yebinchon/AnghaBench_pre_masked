
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_ctl {int tx; } ;
struct TYPE_2__ {size_t size; int sof; int eof; int callback; } ;
struct ctl_pkg {TYPE_1__ frame; scalar_t__ buffer; } ;
typedef enum tb_cfg_pkg_type { ____Placeholder_tb_cfg_pkg_type } tb_cfg_pkg_type ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,void const*,size_t) ;
 int FUNC_1 (scalar_t__,size_t) ;
 int FUNC_2 (struct tb_ctl*,char*,size_t,...) ;
 struct ctl_pkg* FUNC_3 (struct tb_ctl*) ;
 int FUNC_4 (struct ctl_pkg*) ;
 int VAR_3 ;
 int FUNC_5 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct tb_ctl *VAR_4, const void *VAR_5, size_t VAR_6,
       enum tb_cfg_pkg_type VAR_7)
{
 int VAR_8;
 struct ctl_pkg *VAR_9;
 if (VAR_6 % 4 != 0) {
  FUNC_2(VAR_4, "TX: invalid size: %zu\n", VAR_6);
  return -VAR_0;
 }
 if (VAR_6 > VAR_2 - 4) {
  FUNC_2(VAR_4, "TX: packet too large: %zu/%d\n",
       VAR_6, VAR_2 - 4);
  return -VAR_0;
 }
 VAR_9 = FUNC_3(VAR_4);
 if (!VAR_9)
  return -VAR_1;
 VAR_9->frame.callback = VAR_3;
 VAR_9->frame.size = VAR_6 + 4;
 VAR_9->frame.sof = VAR_7;
 VAR_9->frame.eof = VAR_7;
 FUNC_0(VAR_9->buffer, VAR_5, VAR_6 / 4);
 *(__be32 *) (VAR_9->buffer + VAR_6) = FUNC_1(VAR_9->buffer, VAR_6);

 VAR_8 = FUNC_5(VAR_4->tx, &VAR_9->frame);
 if (VAR_8)
  FUNC_4(VAR_9);
 return VAR_8;
}

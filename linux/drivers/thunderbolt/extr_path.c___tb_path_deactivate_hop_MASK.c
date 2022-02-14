
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_regs_hop {scalar_t__ egress_shared_buffer; scalar_t__ ingress_shared_buffer; scalar_t__ egress_fc; scalar_t__ ingress_fc; int pending; scalar_t__ enable; } ;
struct tb_port {int dummy; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct tb_port*,struct tb_regs_hop*,int ,int,int) ;
 int FUNC_4 (struct tb_port*,struct tb_regs_hop*,int ,int,int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct tb_port *VAR_2, int VAR_3,
        bool VAR_4)
{
 struct tb_regs_hop VAR_5;
 ktime_t VAR_6;
 int VAR_7;


 VAR_7 = FUNC_3(VAR_2, &VAR_5, VAR_1, 2 * VAR_3, 2);
 if (VAR_7)
  return VAR_7;


 if (!VAR_5.enable)
  return 0;

 VAR_5.enable = 0;

 VAR_7 = FUNC_4(VAR_2, &VAR_5, VAR_1, 2 * VAR_3, 2);
 if (VAR_7)
  return VAR_7;


 VAR_6 = FUNC_0(FUNC_2(), 500);
 do {
  VAR_7 = FUNC_3(VAR_2, &VAR_5, VAR_1, 2 * VAR_3, 2);
  if (VAR_7)
   return VAR_7;

  if (!VAR_5.pending) {
   if (VAR_4) {

    VAR_5.ingress_fc = 0;
    VAR_5.egress_fc = 0;
    VAR_5.ingress_shared_buffer = 0;
    VAR_5.egress_shared_buffer = 0;

    return FUNC_4(VAR_2, &VAR_5, VAR_1,
           2 * VAR_3, 2);
   }

   return 0;
  }

  FUNC_5(10, 20);
 } while (FUNC_1(FUNC_2(), VAR_6));

 return -VAR_0;
}

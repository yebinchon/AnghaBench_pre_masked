
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker {struct ofdpa* wpriv; } ;
struct ofdpa_port {int dummy; } ;
struct ofdpa {scalar_t__ fib_aborted; } ;
struct fib_nh {int fib_nh_flags; int fib_nh_dev; } ;
struct fib_entry_notifier_info {int tb_id; int fi; int dst_len; int dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fib_nh* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 struct ofdpa_port* FUNC_2 (int ,struct rocker*) ;
 int FUNC_3 (struct ofdpa_port*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct rocker *VAR_2,
     const struct fib_entry_notifier_info *VAR_3)
{
 struct ofdpa *VAR_4 = VAR_2->wpriv;
 struct ofdpa_port *VAR_5;
 struct fib_nh *VAR_6;

 if (VAR_4->fib_aborted)
  return 0;
 VAR_6 = FUNC_0(VAR_3->fi, 0);
 VAR_5 = FUNC_2(VAR_6->fib_nh_dev, VAR_2);
 if (!VAR_5)
  return 0;
 VAR_6->fib_nh_flags &= ~VAR_1;
 return FUNC_3(VAR_5, FUNC_1(VAR_3->dst),
       VAR_3->dst_len, VAR_3->fi,
       VAR_3->tb_id, VAR_0);
}

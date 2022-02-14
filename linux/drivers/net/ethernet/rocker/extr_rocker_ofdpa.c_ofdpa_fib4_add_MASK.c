
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
 struct fib_nh* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 struct ofdpa_port* FUNC_2 (int ,struct rocker*) ;
 int FUNC_3 (struct ofdpa_port*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct rocker *VAR_1,
     const struct fib_entry_notifier_info *VAR_2)
{
 struct ofdpa *VAR_3 = VAR_1->wpriv;
 struct ofdpa_port *VAR_4;
 struct fib_nh *VAR_5;
 int VAR_6;

 if (VAR_3->fib_aborted)
  return 0;
 VAR_5 = FUNC_0(VAR_2->fi, 0);
 VAR_4 = FUNC_2(VAR_5->fib_nh_dev, VAR_1);
 if (!VAR_4)
  return 0;
 VAR_6 = FUNC_3(VAR_4, FUNC_1(VAR_2->dst),
      VAR_2->dst_len, VAR_2->fi,
      VAR_2->tb_id, 0);
 if (VAR_6)
  return VAR_6;
 VAR_5->fib_nh_flags |= VAR_0;
 return 0;
}

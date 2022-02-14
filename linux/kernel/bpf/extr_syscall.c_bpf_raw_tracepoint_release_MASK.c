
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct bpf_raw_tracepoint* private_data; } ;
struct bpf_raw_tracepoint {int btp; scalar_t__ prog; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bpf_raw_tracepoint*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_0, struct file *VAR_1)
{
 struct bpf_raw_tracepoint *VAR_2 = VAR_1->private_data;

 if (VAR_2->prog) {
  FUNC_0(VAR_2->btp, VAR_2->prog);
  FUNC_1(VAR_2->prog);
 }
 FUNC_2(VAR_2->btp);
 FUNC_3(VAR_2);
 return 0;
}

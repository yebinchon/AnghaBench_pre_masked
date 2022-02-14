
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct ntb_dev {int dummy; } ;
struct idt_ntb_dev {int peer_cnt; size_t part; int * msg_locks; TYPE_1__* peers; } ;
struct TYPE_8__ {TYPE_2__* msgs; } ;
struct TYPE_7__ {int * msgctl; } ;
struct TYPE_6__ {int out; } ;
struct TYPE_5__ {int part; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct idt_ntb_dev*,int ,int) ;
 int FUNC_2 (struct idt_ntb_dev*,int ,int) ;
 TYPE_4__ VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct idt_ntb_dev* FUNC_5 (struct ntb_dev*) ;

__attribute__((used)) static int FUNC_6(struct ntb_dev *VAR_6, int VAR_7, int VAR_8,
      u32 VAR_9)
{
 struct idt_ntb_dev *VAR_10 = FUNC_5(VAR_6);
 unsigned long VAR_11;
 u32 VAR_12 = 0;

 if (VAR_8 < 0 || VAR_1 <= VAR_8)
  return -VAR_0;

 if (VAR_7 < 0 || VAR_10->peer_cnt <= VAR_7)
  return -VAR_0;


 VAR_12 = FUNC_0(VAR_3, 0, VAR_8) |
      FUNC_0(VAR_2, 0, VAR_10->peers[VAR_7].part);


 FUNC_3(&VAR_10->msg_locks[VAR_8], VAR_11);

 FUNC_2(VAR_10, VAR_5[VAR_10->part].msgctl[VAR_8], VAR_12);
 FUNC_1(VAR_10, VAR_4.msgs[VAR_8].out, VAR_9);

 FUNC_4(&VAR_10->msg_locks[VAR_8], VAR_11);


 return 0;
}

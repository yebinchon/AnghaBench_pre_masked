
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_mbox_cmd {int dummy; } ;
struct octeon_mbox {int state; int lock; int mbox_read_reg; struct octeon_mbox_cmd mbox_resp; } ;
struct octeon_device {struct octeon_mbox** mbox; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct octeon_mbox_cmd*,int ,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(struct octeon_device *VAR_3, int VAR_4)
{
 struct octeon_mbox *VAR_5 = VAR_3->mbox[VAR_4];
 struct octeon_mbox_cmd *VAR_6;
 unsigned long VAR_7 = 0;

 FUNC_1(&VAR_5->lock, VAR_7);
 VAR_6 = &VAR_5->mbox_resp;

 if (!(VAR_5->state & VAR_1)) {
  FUNC_2(&VAR_5->lock, VAR_7);
  return 1;
 }

 VAR_5->state = VAR_0;
 FUNC_0(VAR_6, 0, sizeof(*VAR_6));
 FUNC_3(VAR_2, VAR_5->mbox_read_reg);
 FUNC_2(&VAR_5->lock, VAR_7);

 return 0;
}

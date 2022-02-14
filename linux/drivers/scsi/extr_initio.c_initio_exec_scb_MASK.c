
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_ctrl_blk {int sglen; int sgmax; scalar_t__ sgidx; scalar_t__ mode; } ;
struct initio_host {int semaph; int semaph_lock; scalar_t__ addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct initio_host*,struct scsi_ctrl_blk*) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct initio_host*) ;

__attribute__((used)) static void FUNC_5(struct initio_host * VAR_1, struct scsi_ctrl_blk * VAR_2)
{
 unsigned long VAR_3;

 VAR_2->mode = 0;

 VAR_2->sgidx = 0;
 VAR_2->sgmax = VAR_2->sglen;

 FUNC_2(&VAR_1->semaph_lock, VAR_3);

 FUNC_0(VAR_1, VAR_2);


 if (VAR_1->semaph == 1) {

  FUNC_1(0x1F, VAR_1->addr + VAR_0);
  VAR_1->semaph = 0;
  FUNC_3(&VAR_1->semaph_lock, VAR_3);

  FUNC_4(VAR_1);

  FUNC_2(&VAR_1->semaph_lock, VAR_3);
  VAR_1->semaph = 1;
  FUNC_1(0x0F, VAR_1->addr + VAR_0);
 }
 FUNC_3(&VAR_1->semaph_lock, VAR_3);
 return;
}

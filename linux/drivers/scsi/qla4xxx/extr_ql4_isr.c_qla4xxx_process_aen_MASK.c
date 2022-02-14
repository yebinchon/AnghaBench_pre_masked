
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct scsi_qla_host {size_t aen_out; size_t aen_in; int hardware_lock; int host_no; int aen_q_count; struct aen* aen_q; } ;
struct aen {int* mbox_sts; } ;


 int FUNC_0 (int ) ;

 int VAR_0 ;
 int VAR_1 ;


 int FUNC_1 (char*,int ,int,int,int,int,...) ;
 int FUNC_2 (struct scsi_qla_host*,int,int,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct scsi_qla_host * VAR_2, uint8_t VAR_3)
{
 uint32_t VAR_4[VAR_1];
 struct aen *VAR_5;
 int VAR_6;
 unsigned long VAR_7;

 FUNC_3(&VAR_2->hardware_lock, VAR_7);
 while (VAR_2->aen_out != VAR_2->aen_in) {
  VAR_5 = &VAR_2->aen_q[VAR_2->aen_out];

  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
   VAR_4[VAR_6] = VAR_5->mbox_sts[VAR_6];

  VAR_2->aen_q_count++;
  VAR_2->aen_out++;

  if (VAR_2->aen_out == VAR_0)
   VAR_2->aen_out = 0;

  FUNC_4(&VAR_2->hardware_lock, VAR_7);

  FUNC_0(FUNC_1("qla4xxx(%ld): AEN[%d]=0x%08x, mbx1=0x%08x mbx2=0x%08x"
   " mbx3=0x%08x mbx4=0x%08x\n", VAR_2->host_no,
   (VAR_2->aen_out ? (VAR_2->aen_out-1): (VAR_0-1)),
   VAR_4[0], VAR_4[1], VAR_4[2],
   VAR_4[3], VAR_4[4]));

  switch (VAR_4[0]) {
  case 129:
   switch (VAR_3) {
   case 130:
    FUNC_0(FUNC_1("scsi%ld: AEN[%d] %04x, index "
           "[%d] state=%04x FLUSHED!\n",
           VAR_2->host_no, VAR_2->aen_out,
           VAR_4[0], VAR_4[2],
           VAR_4[3]));
    break;
   case 128:
   default:

    if (VAR_4[1] == 1)
     FUNC_2(VAR_2,
      VAR_4[2], VAR_4[3],
      VAR_4[4]);
    break;
   }
  }
  FUNC_3(&VAR_2->hardware_lock, VAR_7);
 }
 FUNC_4(&VAR_2->hardware_lock, VAR_7);
}

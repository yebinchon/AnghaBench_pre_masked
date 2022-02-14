
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct bdisp_dev* private; } ;
struct bdisp_node {int nip; int cic; int ack; int tba; int s1ba; int s2ba; int s3ba; int hfp; int vfp; int y_hfp; int y_vfp; int ivmx3; int ivmx2; int ivmx1; int ivmx0; int y_rzi; int y_rsf; int rzi; int rsf; int fctl; int s3sz; int s3xy; int s3ty; int s2sz; int s2xy; int s2ty; int s1xy; int s1ty; int tsz; int txy; int tty; int ins; } ;
struct TYPE_2__ {struct bdisp_node** copy_node; } ;
struct bdisp_dev {TYPE_1__ dbg; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,int ) ;
 int FUNC_1 (struct seq_file*,int ) ;
 int FUNC_2 (struct seq_file*,int ,int ,int ,int ) ;
 int FUNC_3 (struct seq_file*,int ,char*) ;
 int FUNC_4 (struct seq_file*,int ,char*) ;
 int FUNC_5 (struct seq_file*,int ,int,char*) ;
 int FUNC_6 (struct seq_file*,int ,char*) ;
 int FUNC_7 (struct seq_file*,int ) ;
 int FUNC_8 (struct seq_file*,int ,char*) ;
 int FUNC_9 (struct seq_file*,char*,int) ;
 int FUNC_10 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_11(struct seq_file *VAR_1, void *VAR_2)
{

 struct bdisp_dev *VAR_3 = VAR_1->private;
 struct bdisp_node *VAR_4;
 int VAR_5 = 0;

 if (!VAR_3->dbg.copy_node[0]) {
  FUNC_10(VAR_1, "No node built yet\n");
  return 0;
 }

 do {
  VAR_4 = VAR_3->dbg.copy_node[VAR_5];
  if (!VAR_4)
   break;
  FUNC_9(VAR_1, "--------\nNode %d:\n", VAR_5);
  FUNC_10(VAR_1, "-- General --\n");
  FUNC_9(VAR_1, "NIP\t0x%08X\n", VAR_4->nip);
  FUNC_9(VAR_1, "CIC\t0x%08X\n", VAR_4->cic);
  FUNC_1(VAR_1, VAR_4->ins);
  FUNC_9(VAR_1, "ACK\t0x%08X\n", VAR_4->ack);
  FUNC_10(VAR_1, "-- Target --\n");
  FUNC_9(VAR_1, "TBA\t0x%08X\n", VAR_4->tba);
  FUNC_7(VAR_1, VAR_4->tty);
  FUNC_8(VAR_1, VAR_4->txy, "TXY");
  FUNC_6(VAR_1, VAR_4->tsz, "TSZ");

  FUNC_10(VAR_1, "-- Source 1 --\n");
  FUNC_9(VAR_1, "S1BA\t0x%08X\n", VAR_4->s1ba);
  FUNC_5(VAR_1, VAR_4->s1ty, VAR_4->s1ba, "S1TY");
  FUNC_8(VAR_1, VAR_4->s1xy, "S1XY");
  FUNC_10(VAR_1, "-- Source 2 --\n");
  FUNC_9(VAR_1, "S2BA\t0x%08X\n", VAR_4->s2ba);
  FUNC_5(VAR_1, VAR_4->s2ty, VAR_4->s2ba, "S2TY");
  FUNC_8(VAR_1, VAR_4->s2xy, "S2XY");
  FUNC_6(VAR_1, VAR_4->s2sz, "S2SZ");
  FUNC_10(VAR_1, "-- Source 3 --\n");
  FUNC_9(VAR_1, "S3BA\t0x%08X\n", VAR_4->s3ba);
  FUNC_5(VAR_1, VAR_4->s3ty, VAR_4->s3ba, "S3TY");
  FUNC_8(VAR_1, VAR_4->s3xy, "S3XY");
  FUNC_6(VAR_1, VAR_4->s3sz, "S3SZ");


  FUNC_10(VAR_1, "-- Filter & Mask --\n");
  FUNC_0(VAR_1, VAR_4->fctl);

  FUNC_10(VAR_1, "-- Chroma Filter --\n");
  FUNC_3(VAR_1, VAR_4->rsf, "RSF");
  FUNC_4(VAR_1, VAR_4->rzi, "RZI");
  FUNC_9(VAR_1, "HFP\t0x%08X\n", VAR_4->hfp);
  FUNC_9(VAR_1, "VFP\t0x%08X\n", VAR_4->vfp);
  FUNC_10(VAR_1, "-- Luma Filter --\n");
  FUNC_3(VAR_1, VAR_4->y_rsf, "Y_RSF");
  FUNC_4(VAR_1, VAR_4->y_rzi, "Y_RZI");
  FUNC_9(VAR_1, "Y_HFP\t0x%08X\n", VAR_4->y_hfp);
  FUNC_9(VAR_1, "Y_VFP\t0x%08X\n", VAR_4->y_vfp);




  FUNC_10(VAR_1, "-- Input Versatile Matrix --\n");
  FUNC_2(VAR_1, VAR_4->ivmx0, VAR_4->ivmx1,
        VAR_4->ivmx2, VAR_4->ivmx3);




 } while ((++VAR_5 < VAR_0) && VAR_4->nip);

 return 0;
}

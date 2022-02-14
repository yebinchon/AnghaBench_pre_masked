
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tx_desc_hdr ;
struct seq_file {struct fm10k_ring* private; } ;
struct fm10k_tx_desc {int flags; int hdrlen; int mss; int vlan; int buflen; int buffer_addr; } ;
struct fm10k_ring {int desc; } ;
typedef int loff_t ;


 struct fm10k_tx_desc* FUNC_0 (struct fm10k_ring*,int) ;
 int FUNC_1 (struct seq_file*,int) ;
 int FUNC_2 (struct seq_file*,char const*,...) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct fm10k_ring *VAR_2 = VAR_0->private;
 int VAR_3 = *(loff_t *)VAR_1;
 static const char VAR_4[] =
  "DES BUFFER_ADDRESS     LENGTH VLAN   MSS    HDRLEN FLAGS\n";


 if (!VAR_3) {
  FUNC_2(VAR_0, VAR_4);
  FUNC_1(VAR_0, sizeof(VAR_4) - 1);
 }


 if (!VAR_2->desc) {
  FUNC_2(VAR_0, "%03X Descriptor ring not allocated.\n", VAR_3);
 } else {
  struct fm10k_tx_desc *VAR_5 = FUNC_0(VAR_2, VAR_3);

  FUNC_2(VAR_0, "%03X %#018llx %#06x %#06x %#06x %#06x %#04x\n",
      VAR_3, VAR_5->buffer_addr, VAR_5->buflen, VAR_5->vlan,
      VAR_5->mss, VAR_5->hdrlen, VAR_5->flags);
 }

 return 0;
}

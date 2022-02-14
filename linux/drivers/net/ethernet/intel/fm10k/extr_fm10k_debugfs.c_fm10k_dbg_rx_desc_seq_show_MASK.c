
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int timestamp; } ;
struct TYPE_5__ {int sglort; int dglort; int vlan; int length; } ;
struct TYPE_4__ {int staterr; int rss; int data; } ;
union fm10k_rx_desc {TYPE_3__ q; TYPE_2__ w; TYPE_1__ d; } ;
struct seq_file {struct fm10k_ring* private; } ;
struct fm10k_ring {int desc; } ;
typedef int rx_desc_hdr ;
typedef int loff_t ;


 union fm10k_rx_desc* FUNC_0 (struct fm10k_ring*,int) ;
 int FUNC_1 (struct seq_file*,int) ;
 int FUNC_2 (struct seq_file*,char const*,...) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct fm10k_ring *VAR_2 = VAR_0->private;
 int VAR_3 = *(loff_t *)VAR_1;
 static const char VAR_4[] =
 "DES DATA       RSS        STATERR    LENGTH VLAN   DGLORT SGLORT TIMESTAMP\n";


 if (!VAR_3) {
  FUNC_2(VAR_0, VAR_4);
  FUNC_1(VAR_0, sizeof(VAR_4) - 1);
 }


 if (!VAR_2->desc) {
  FUNC_2(VAR_0, "%03X Descriptor ring not allocated.\n", VAR_3);
 } else {
  union fm10k_rx_desc *VAR_5 = FUNC_0(VAR_2, VAR_3);

  FUNC_2(VAR_0,
      "%03X %#010x %#010x %#010x %#06x %#06x %#06x %#06x %#018llx\n",
      VAR_3, VAR_5->d.data, VAR_5->d.rss, VAR_5->d.staterr,
      VAR_5->w.length, VAR_5->w.vlan, VAR_5->w.dglort,
      VAR_5->w.sglort, VAR_5->q.timestamp);
 }

 return 0;
}

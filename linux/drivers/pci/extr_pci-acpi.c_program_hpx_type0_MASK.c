
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int class; } ;
struct hpx_type0 {int revision; scalar_t__ enable_perr; int latency_timer; scalar_t__ enable_serr; int cache_line_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct hpx_type0 VAR_9 ;
 int FUNC_0 (struct pci_dev*,int ,int *) ;
 int FUNC_1 (struct pci_dev*,char*,int) ;
 int FUNC_2 (struct pci_dev*,int ,int ) ;
 int FUNC_3 (struct pci_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_10, struct hpx_type0 *VAR_11)
{
 u16 VAR_12, VAR_13;

 if (!VAR_11)
  VAR_11 = &VAR_9;

 if (VAR_11->revision > 1) {
  FUNC_1(VAR_10, "PCI settings rev %d not supported; using defaults\n",
    VAR_11->revision);
  VAR_11 = &VAR_9;
 }

 FUNC_2(VAR_10, VAR_2, VAR_11->cache_line_size);
 FUNC_2(VAR_10, VAR_7, VAR_11->latency_timer);
 FUNC_0(VAR_10, VAR_4, &VAR_12);
 if (VAR_11->enable_serr)
  VAR_12 |= VAR_6;
 if (VAR_11->enable_perr)
  VAR_12 |= VAR_5;
 FUNC_3(VAR_10, VAR_4, VAR_12);


 if ((VAR_10->class >> 8) == VAR_3) {
  FUNC_2(VAR_10, VAR_8,
          VAR_11->latency_timer);
  FUNC_0(VAR_10, VAR_0, &VAR_13);
  if (VAR_11->enable_perr)
   VAR_13 |= VAR_1;
  FUNC_3(VAR_10, VAR_0, VAR_13);
 }
}

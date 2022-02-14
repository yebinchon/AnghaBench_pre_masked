
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_params {int skip_ofst; int port; int skip_len; int * mask; int * data; scalar_t__ invert; int min_len; int snap_len; } ;
struct seq_file {unsigned int private; } ;
struct adapter {int* chan_map; TYPE_1__** port; int pdev_dev; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct seq_file*,char*,...) ;
 int FUNC_2 (struct seq_file*,char) ;
 int FUNC_3 (struct seq_file*,char*) ;
 int FUNC_4 (struct adapter*,struct trace_params*,unsigned int,int*) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_3, void *VAR_4)
{
 int VAR_5, VAR_6;
 struct trace_params VAR_7;
 unsigned int VAR_8 = (uintptr_t)VAR_3->private & 3;
 struct adapter *VAR_9 = VAR_3->private - VAR_8;

 FUNC_4(VAR_9, &VAR_7, VAR_8, &VAR_5);
 if (!VAR_5) {
  FUNC_3(VAR_3, "tracer is disabled\n");
  return 0;
 }

 if (VAR_7.skip_ofst * 8 >= VAR_2) {
  FUNC_0(VAR_9->pdev_dev, "illegal trace pattern skip offset\n");
  return -VAR_0;
 }
 if (VAR_7.port < 8) {
  VAR_6 = VAR_9->chan_map[VAR_7.port & 3];
  if (VAR_6 >= VAR_1) {
   FUNC_0(VAR_9->pdev_dev, "tracer %u is assigned "
    "to non-existing port\n", VAR_8);
   return -VAR_0;
  }
  FUNC_1(VAR_3, "tracer is capturing %s %s, ",
      VAR_9->port[VAR_6]->name, VAR_7.port < 4 ? "Rx" : "Tx");
 } else
  FUNC_1(VAR_3, "tracer is capturing loopback %d, ",
      VAR_7.port - 8);
 FUNC_1(VAR_3, "snap length: %u, min length: %u\n", VAR_7.snap_len,
     VAR_7.min_len);
 FUNC_1(VAR_3, "packets captured %smatch filter\n",
     VAR_7.invert ? "do not " : "");

 if (VAR_7.skip_ofst) {
  FUNC_3(VAR_3, "filter pattern: ");
  for (VAR_6 = 0; VAR_6 < VAR_7.skip_ofst * 2; VAR_6 += 2)
   FUNC_1(VAR_3, "%08x%08x", VAR_7.data[VAR_6], VAR_7.data[VAR_6 + 1]);
  FUNC_2(VAR_3, '/');
  for (VAR_6 = 0; VAR_6 < VAR_7.skip_ofst * 2; VAR_6 += 2)
   FUNC_1(VAR_3, "%08x%08x", VAR_7.mask[VAR_6], VAR_7.mask[VAR_6 + 1]);
  FUNC_3(VAR_3, "@0\n");
 }

 FUNC_3(VAR_3, "filter pattern: ");
 for (VAR_6 = VAR_7.skip_ofst * 2; VAR_6 < VAR_2 / 4; VAR_6 += 2)
  FUNC_1(VAR_3, "%08x%08x", VAR_7.data[VAR_6], VAR_7.data[VAR_6 + 1]);
 FUNC_2(VAR_3, '/');
 for (VAR_6 = VAR_7.skip_ofst * 2; VAR_6 < VAR_2 / 4; VAR_6 += 2)
  FUNC_1(VAR_3, "%08x%08x", VAR_7.mask[VAR_6], VAR_7.mask[VAR_6 + 1]);
 FUNC_1(VAR_3, "@%u\n", (VAR_7.skip_ofst + VAR_7.skip_len) * 8);
 return 0;
}

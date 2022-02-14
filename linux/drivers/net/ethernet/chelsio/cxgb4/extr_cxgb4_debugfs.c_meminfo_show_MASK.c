
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct seq_file {struct adapter* private; } ;
struct cudbg_meminfo {int avail_c; int mem_c; int * loopback_alloc; int * loopback_used; int * port_alloc; int * port_used; int p_structs_free_cnt; int p_structs; int * tx_pages_data; int free_tx_cnt; int * rx_pages_data; int free_rx_cnt; scalar_t__ up_extmem2_hi; scalar_t__ up_extmem2_lo; scalar_t__ up_ram_hi; scalar_t__ up_ram_lo; TYPE_2__* mem; TYPE_1__* avail; } ;
struct TYPE_7__ {int nchan; } ;
struct TYPE_8__ {TYPE_3__ arch; } ;
struct adapter {TYPE_4__ params; } ;
struct TYPE_6__ {size_t idx; scalar_t__ limit; scalar_t__ base; } ;
struct TYPE_5__ {size_t idx; scalar_t__ limit; scalar_t__ base; } ;


 size_t FUNC_0 (char**) ;
 int VAR_0 ;
 int FUNC_1 (struct adapter*,struct cudbg_meminfo*) ;
 char** VAR_1 ;
 int FUNC_2 (struct seq_file*,char const* const,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct cudbg_meminfo*,int ,int) ;
 int FUNC_4 (struct seq_file*,char*,int,int ,...) ;
 int FUNC_5 (struct seq_file*,char) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_2, void *VAR_3)
{
 static const char * const VAR_4[] = { "EDC0:", "EDC1:", "MC:",
            "MC0:", "MC1:", "HMA:"};
 struct adapter *VAR_5 = VAR_2->private;
 struct cudbg_meminfo VAR_6;
 int VAR_7, VAR_8;

 FUNC_3(&VAR_6, 0, sizeof(struct cudbg_meminfo));
 VAR_8 = FUNC_1(VAR_5, &VAR_6);
 if (VAR_8)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_6.avail_c; VAR_7++)
  FUNC_2(VAR_2, VAR_4[VAR_6.avail[VAR_7].idx],
    VAR_6.avail[VAR_7].base,
    VAR_6.avail[VAR_7].limit - 1);

 FUNC_5(VAR_2, '\n');
 for (VAR_7 = 0; VAR_7 < VAR_6.mem_c; VAR_7++) {
  if (VAR_6.mem[VAR_7].idx >= FUNC_0(VAR_1))
   continue;
  if (!VAR_6.mem[VAR_7].limit)
   VAR_6.mem[VAR_7].limit =
    VAR_7 < VAR_6.mem_c - 1 ?
    VAR_6.mem[VAR_7 + 1].base - 1 : ~0;
  FUNC_2(VAR_2, VAR_1[VAR_6.mem[VAR_7].idx],
    VAR_6.mem[VAR_7].base, VAR_6.mem[VAR_7].limit);
 }

 FUNC_5(VAR_2, '\n');
 FUNC_2(VAR_2, "uP RAM:", VAR_6.up_ram_lo, VAR_6.up_ram_hi);
 FUNC_2(VAR_2, "uP Extmem2:", VAR_6.up_extmem2_lo,
   VAR_6.up_extmem2_hi);

 FUNC_4(VAR_2, "\n%u Rx pages (%u free) of size %uKiB for %u channels\n",
     VAR_6.rx_pages_data[0], VAR_6.free_rx_cnt,
     VAR_6.rx_pages_data[1], VAR_6.rx_pages_data[2]);

 FUNC_4(VAR_2, "%u Tx pages (%u free) of size %u%ciB for %u channels\n",
     VAR_6.tx_pages_data[0], VAR_6.free_tx_cnt,
     VAR_6.tx_pages_data[1], VAR_6.tx_pages_data[2],
     VAR_6.tx_pages_data[3]);

 FUNC_4(VAR_2, "%u p-structs (%u free)\n\n",
     VAR_6.p_structs, VAR_6.p_structs_free_cnt);

 for (VAR_7 = 0; VAR_7 < 4; VAR_7++)

  FUNC_4(VAR_2, "Port %d using %u pages out of %u allocated\n",
      VAR_7, VAR_6.port_used[VAR_7], VAR_6.port_alloc[VAR_7]);

 for (VAR_7 = 0; VAR_7 < VAR_5->params.arch.nchan; VAR_7++)

  FUNC_4(VAR_2,
      "Loopback %d using %u pages out of %u allocated\n",
      VAR_7, VAR_6.loopback_used[VAR_7],
      VAR_6.loopback_alloc[VAR_7]);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mantis_pci {size_t last_block; size_t busy_block; int * buf_cpu; int demux; struct mantis_hwconfig* hwconfig; } ;
struct mantis_hwconfig {scalar_t__ ts_size; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,char*,size_t,size_t) ;
 int FUNC_1 (int *,int *,size_t) ;
 int FUNC_2 (int *,int *,size_t) ;
 int FUNC_3 (int *,int *,size_t) ;

void FUNC_4(unsigned long VAR_3)
{
 struct mantis_pci *VAR_4 = (struct mantis_pci *) VAR_3;
 struct mantis_hwconfig *VAR_5 = VAR_4->hwconfig;

 while (VAR_4->last_block != VAR_4->busy_block) {
  FUNC_0(VAR_2, 1, "last block=[%d] finished block=[%d]",
   VAR_4->last_block, VAR_4->busy_block);

  (VAR_5->ts_size ? FUNC_2 : FUNC_1)
  (&VAR_4->demux, &VAR_4->buf_cpu[VAR_4->last_block * VAR_0], VAR_0);
  VAR_4->last_block = (VAR_4->last_block + 1) % VAR_1;
 }
}

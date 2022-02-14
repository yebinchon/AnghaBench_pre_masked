
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pcap_chip {int io_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pcap_chip*,int*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct pcap_chip *VAR_2, u8 VAR_3, u32 *VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;

 FUNC_1(&VAR_2->io_lock, VAR_5);
 *VAR_4 = VAR_1
  | (VAR_3 << VAR_0);

 VAR_6 = FUNC_0(VAR_2, VAR_4);
 FUNC_2(&VAR_2->io_lock, VAR_5);

 return VAR_6;
}

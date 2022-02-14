
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netvsc_device {int destroy; int tx_disable; int subchan_work; int subchan_open; int channel_init_wait; int pkt_align; int max_pkt; int wait_drain; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct netvsc_device* FUNC_3 (int,int ) ;
 int VAR_3 ;

__attribute__((used)) static struct netvsc_device *FUNC_4(void)
{
 struct netvsc_device *VAR_4;

 VAR_4 = FUNC_3(sizeof(struct netvsc_device), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 FUNC_2(&VAR_4->wait_drain);
 VAR_4->destroy = 0;
 VAR_4->tx_disable = 0;

 VAR_4->max_pkt = VAR_1;
 VAR_4->pkt_align = VAR_2;

 FUNC_1(&VAR_4->channel_init_wait);
 FUNC_2(&VAR_4->subchan_open);
 FUNC_0(&VAR_4->subchan_work, VAR_3);

 return VAR_4;
}

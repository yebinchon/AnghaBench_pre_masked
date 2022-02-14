
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tail; int info_size; int rx_status; int * vlan_id; int frame_max; scalar_t__ buffer_size; int count_max; scalar_t__ head; int * mac_addr; scalar_t__ version; } ;
union ep_buffer_info {TYPE_1__ v1i; } ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct epbuf_handler {scalar_t__ size; union ep_buffer_info* info; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (union ep_buffer_info*,int ,int) ;

void FUNC_3(struct epbuf_handler *VAR_3, u8 *VAR_4, u32 VAR_5)
{
 union ep_buffer_info *VAR_6 = VAR_3->info;
 u16 VAR_7[VAR_0];
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
  VAR_7[VAR_8] = VAR_6->v1i.vlan_id[VAR_8];

 FUNC_2(VAR_6, 0, sizeof(union ep_buffer_info));

 VAR_6->v1i.version = 0;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  VAR_6->v1i.mac_addr[VAR_8] = VAR_4[VAR_8];

 VAR_6->v1i.head = 0;
 VAR_6->v1i.tail = 1;

 VAR_6->v1i.info_size = sizeof(union ep_buffer_info);
 VAR_6->v1i.buffer_size = VAR_3->size - VAR_6->v1i.info_size;

 VAR_6->v1i.frame_max = FUNC_1(VAR_5);
 VAR_6->v1i.count_max =
     FUNC_0(VAR_6->v1i.buffer_size, VAR_6->v1i.frame_max);

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
  VAR_6->v1i.vlan_id[VAR_8] = VAR_7[VAR_8];

 VAR_6->v1i.rx_status |= VAR_2;
}

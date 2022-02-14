
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct scu_unsolicited_frame_header {scalar_t__ is_address_frame; } ;
struct isci_remote_device {int dummy; } ;
struct isci_phy {int dummy; } ;
struct TYPE_5__ {TYPE_1__* array; } ;
struct TYPE_6__ {TYPE_2__ buffers; } ;
struct isci_host {size_t remote_node_entries; struct isci_remote_device** device_table; struct isci_phy* phys; TYPE_3__ uf_control; } ;
typedef enum sci_status { ____Placeholder_sci_status } sci_status ;
struct TYPE_4__ {int state; struct scu_unsolicited_frame_header* header; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (size_t) ;
 size_t FUNC_2 (size_t) ;
 size_t FUNC_3 (size_t) ;
 int VAR_3 ;
 int FUNC_4 (struct isci_host*,size_t) ;
 int FUNC_5 (struct isci_phy*,size_t) ;
 int FUNC_6 (struct isci_remote_device*,size_t) ;

__attribute__((used)) static void FUNC_7(struct isci_host *VAR_4, u32 VAR_5)
{
 u32 VAR_6;
 u32 VAR_7;

 struct scu_unsolicited_frame_header *VAR_8;
 struct isci_phy *VAR_9;
 struct isci_remote_device *VAR_10;

 enum sci_status VAR_11 = VAR_1;

 VAR_7 = FUNC_2(VAR_5);

 VAR_8 = VAR_4->uf_control.buffers.array[VAR_7].header;
 VAR_4->uf_control.buffers.array[VAR_7].state = VAR_3;

 if (FUNC_1(VAR_5)) {




  FUNC_4(VAR_4, VAR_7);
  return;
 }

 if (VAR_8->is_address_frame) {
  VAR_6 = FUNC_3(VAR_5);
  VAR_9 = &VAR_4->phys[VAR_6];
  VAR_11 = FUNC_5(VAR_9, VAR_7);
 } else {

  VAR_6 = FUNC_0(VAR_5);

  if (VAR_6 == VAR_0) {




   VAR_6 = FUNC_3(VAR_5);
   VAR_9 = &VAR_4->phys[VAR_6];
   VAR_11 = FUNC_5(VAR_9, VAR_7);
  } else {
   if (VAR_6 < VAR_4->remote_node_entries)
    VAR_10 = VAR_4->device_table[VAR_6];
   else
    VAR_10 = ((void*)0);

   if (VAR_10 != ((void*)0))
    VAR_11 = FUNC_6(VAR_10, VAR_7);
   else
    FUNC_4(VAR_4, VAR_7);
  }
 }

 if (VAR_11 != VAR_2) {



 }
}

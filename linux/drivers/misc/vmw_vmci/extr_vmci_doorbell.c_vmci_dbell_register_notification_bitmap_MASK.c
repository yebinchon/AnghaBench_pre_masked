
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ payload_size; int src; int dst; } ;
struct vmci_notify_bm_set_msg {TYPE_1__ hdr; scalar_t__ bitmap_ppn32; scalar_t__ bitmap_ppn64; } ;
typedef int bitmap_set_msg ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,scalar_t__,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 () ;

bool FUNC_4(u64 VAR_5)
{
 int VAR_6;
 struct vmci_notify_bm_set_msg VAR_7;

 VAR_7.hdr.dst = FUNC_1(VAR_2,
        VAR_3);
 VAR_7.hdr.src = VAR_0;
 VAR_7.hdr.payload_size = sizeof(VAR_7) -
     VAR_1;
 if (FUNC_3())
  VAR_7.bitmap_ppn64 = VAR_5;
 else
  VAR_7.bitmap_ppn32 = (u32) VAR_5;

 VAR_6 = FUNC_2(&VAR_7.hdr);
 if (VAR_6 != VAR_4) {
  FUNC_0("Failed to register (PPN=%llu) as notification bitmap (error=%d)\n",
    VAR_5, VAR_6);
  return 0;
 }
 return 1;
}

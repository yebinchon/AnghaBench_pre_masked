
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vmci_event_release_cb ;
typedef int u64 ;
typedef int u32 ;
struct vmci_queue {int dummy; } ;
struct vmci_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vmci_handle*,struct vmci_queue**,int ,struct vmci_queue**,int ,int,int,int) ;
 int FUNC_1 (struct vmci_handle*,struct vmci_queue**,int ,struct vmci_queue**,int ,int,int,int,int ,void*) ;

int FUNC_2(struct vmci_handle *VAR_2,
    struct vmci_queue **VAR_3,
    u64 VAR_4,
    struct vmci_queue **VAR_5,
    u64 VAR_6,
    u32 VAR_7,
    u32 VAR_8,
    u32 VAR_9,
    bool VAR_10,
    vmci_event_release_cb VAR_11,
    void *VAR_12)
{
 if (!VAR_2 || !VAR_3 || !VAR_5 ||
     (!VAR_4 && !VAR_6) || (VAR_8 & ~VAR_1))
  return VAR_0;

 if (VAR_10) {
  return FUNC_0(VAR_2, VAR_3,
        VAR_4, VAR_5,
        VAR_6, VAR_7,
        VAR_8, VAR_9);
 } else {
  return FUNC_1(VAR_2, VAR_3,
       VAR_4, VAR_5,
       VAR_6, VAR_7, VAR_8,
       VAR_9, VAR_11, VAR_12);
 }
}

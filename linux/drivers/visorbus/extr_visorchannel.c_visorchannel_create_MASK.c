
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t ulong ;
typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ size; } ;
struct visorchannel {int needs_lock; scalar_t__ physaddr; size_t nbytes; int guid; int * mapped; void* requested; TYPE_1__ chan_hdr; int remove_lock; int insert_lock; } ;
struct channel_header {int dummy; } ;
typedef int guid_t ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int const*) ;
 int FUNC_1 (int const*,int *) ;
 struct visorchannel* FUNC_2 (int,int ) ;
 void* FUNC_3 (scalar_t__,size_t,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__,size_t) ;
 void* FUNC_6 (scalar_t__,size_t,int ) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int FUNC_8 (struct visorchannel*) ;
 int FUNC_9 (struct visorchannel*,int ,TYPE_1__*,size_t) ;

struct visorchannel *FUNC_10(u64 VAR_3, gfp_t VAR_4,
      const guid_t *VAR_5, bool VAR_6)
{
 struct visorchannel *VAR_7;
 int VAR_8;
 size_t VAR_9 = sizeof(struct channel_header);

 if (VAR_3 == 0)
  return ((void*)0);

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_4);
 if (!VAR_7)
  return ((void*)0);
 VAR_7->needs_lock = VAR_6;
 FUNC_7(&VAR_7->insert_lock);
 FUNC_7(&VAR_7->remove_lock);






 VAR_7->requested = FUNC_6(VAR_3, VAR_9, VAR_1);
 if (!VAR_7->requested && !FUNC_1(VAR_5, &VAR_2))

  goto err_destroy_channel;
 VAR_7->mapped = FUNC_3(VAR_3, VAR_9, VAR_0);
 if (!VAR_7->mapped) {
  FUNC_5(VAR_3, VAR_9);
  goto err_destroy_channel;
 }
 VAR_7->physaddr = VAR_3;
 VAR_7->nbytes = VAR_9;
 VAR_8 = FUNC_9(VAR_7, 0, &VAR_7->chan_hdr, VAR_9);
 if (VAR_8)
  goto err_destroy_channel;
 VAR_9 = (ulong)VAR_7->chan_hdr.size;
 FUNC_4(VAR_7->mapped);
 if (VAR_7->requested)
  FUNC_5(VAR_7->physaddr, VAR_7->nbytes);
 VAR_7->mapped = ((void*)0);
 VAR_7->requested = FUNC_6(VAR_7->physaddr, VAR_9,
      VAR_1);
 if (!VAR_7->requested && !FUNC_1(VAR_5, &VAR_2))

  goto err_destroy_channel;
 VAR_7->mapped = FUNC_3(VAR_7->physaddr, VAR_9, VAR_0);
 if (!VAR_7->mapped) {
  FUNC_5(VAR_7->physaddr, VAR_9);
  goto err_destroy_channel;
 }
 VAR_7->nbytes = VAR_9;
 FUNC_0(&VAR_7->guid, VAR_5);
 return VAR_7;

err_destroy_channel:
 FUNC_8(VAR_7);
 return ((void*)0);
}

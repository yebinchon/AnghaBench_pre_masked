
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int start; int size; } ;
struct wlcore_partition_set {TYPE_1__ mem; } ;
typedef struct wlcore_partition_set u8 ;
typedef int u32 ;
struct wl1271 {struct wlcore_partition_set* ptable; } ;
typedef int partition ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct wlcore_partition_set*) ;
 struct wlcore_partition_set* FUNC_1 (size_t,int ) ;
 int FUNC_2 (struct wlcore_partition_set*,struct wlcore_partition_set*,size_t) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct wl1271*,struct wlcore_partition_set*) ;
 int FUNC_6 (struct wl1271*,int,struct wlcore_partition_set*,size_t,int) ;

__attribute__((used)) static int FUNC_7(struct wl1271 *VAR_6, void *VAR_7,
          size_t VAR_8, u32 VAR_9)
{
 struct wlcore_partition_set VAR_10;
 int VAR_11, VAR_12, VAR_13;
 u8 *VAR_14, *VAR_15;
 int VAR_16;



 FUNC_3(VAR_1, "starting firmware upload");

 FUNC_3(VAR_1, "fw_data_len %zd chunk_size %d",
       VAR_8, VAR_0);

 if ((VAR_8 % 4) != 0) {
  FUNC_4("firmware length not multiple of four");
  return -VAR_2;
 }

 VAR_15 = FUNC_1(VAR_0, VAR_4);
 if (!VAR_15) {
  FUNC_4("allocation for firmware upload chunk failed");
  return -VAR_3;
 }

 FUNC_2(&VAR_10, &VAR_6->ptable[VAR_5], sizeof(VAR_10));
 VAR_10.mem.start = VAR_9;
 VAR_16 = FUNC_5(VAR_6, &VAR_10);
 if (VAR_16 < 0)
  goto out;


 VAR_12 = 0;
 VAR_13 = VAR_6->ptable[VAR_5].mem.size;

 while (VAR_12 < VAR_8 / VAR_0) {

  VAR_11 = VAR_9 + (VAR_12 + 2) * VAR_0;
  if (VAR_11 > VAR_13) {
   VAR_11 = VAR_9 + VAR_12 * VAR_0;
   VAR_13 = VAR_12 * VAR_0 +
    VAR_6->ptable[VAR_5].mem.size;
   VAR_10.mem.start = VAR_11;
   VAR_16 = FUNC_5(VAR_6, &VAR_10);
   if (VAR_16 < 0)
    goto out;
  }


  VAR_11 = VAR_9 + VAR_12 * VAR_0;
  VAR_14 = VAR_7 + VAR_12 * VAR_0;
  FUNC_2(VAR_15, VAR_14, VAR_0);
  FUNC_3(VAR_1, "uploading fw chunk 0x%p to 0x%x",
        VAR_14, VAR_11);
  VAR_16 = FUNC_6(VAR_6, VAR_11, VAR_15, VAR_0, 0);
  if (VAR_16 < 0)
   goto out;

  VAR_12++;
 }


 VAR_11 = VAR_9 + VAR_12 * VAR_0;
 VAR_14 = VAR_7 + VAR_12 * VAR_0;
 FUNC_2(VAR_15, VAR_14, VAR_8 % VAR_0);
 FUNC_3(VAR_1, "uploading fw last chunk (%zd B) 0x%p to 0x%x",
       VAR_8 % VAR_0, VAR_14, VAR_11);
 VAR_16 = FUNC_6(VAR_6, VAR_11, VAR_15, VAR_8 % VAR_0, 0);

out:
 FUNC_0(VAR_15);
 return VAR_16;
}

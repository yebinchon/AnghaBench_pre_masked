
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unmap ;
struct xenbus_device {int otherend_id; } ;
struct gnttab_unmap_grant_ref {int status; scalar_t__ handle; } ;
struct gnttab_map_grant_ref {int status; scalar_t__ handle; } ;
typedef scalar_t__ phys_addr_t ;
typedef int map ;
typedef int grant_ref_t ;
typedef scalar_t__ grant_handle_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,struct gnttab_unmap_grant_ref*,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct gnttab_unmap_grant_ref*,int) ;
 int FUNC_3 (struct gnttab_unmap_grant_ref*,scalar_t__,unsigned int,int ,int ) ;
 int FUNC_4 (struct gnttab_unmap_grant_ref*,scalar_t__,int ,scalar_t__) ;
 int FUNC_5 (struct gnttab_unmap_grant_ref*,int ,int) ;
 int FUNC_6 (struct xenbus_device*,int,char*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct xenbus_device *VAR_6,
        grant_ref_t *VAR_7,
        unsigned int VAR_8,
        grant_handle_t *VAR_9,
        phys_addr_t *VAR_10,
        unsigned int VAR_11,
        bool *VAR_12)
{
 struct gnttab_map_grant_ref VAR_13[VAR_5];
 struct gnttab_unmap_grant_ref VAR_14[VAR_5];
 int VAR_15, VAR_16;
 int VAR_17 = VAR_2;

 if (VAR_8 > VAR_5)
  return -VAR_0;

 for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++) {
  FUNC_5(&VAR_13[VAR_15], 0, sizeof(VAR_13[VAR_15]));
  FUNC_3(&VAR_13[VAR_15], VAR_10[VAR_15], VAR_11, VAR_7[VAR_15],
      VAR_6->otherend_id);
  VAR_9[VAR_15] = VAR_4;
 }

 FUNC_2(VAR_13, VAR_15);

 for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++) {
  if (VAR_13[VAR_15].status != VAR_2) {
   VAR_17 = VAR_13[VAR_15].status;
   FUNC_6(VAR_6, VAR_13[VAR_15].status,
      "mapping in shared page %d from domain %d",
      VAR_7[VAR_15], VAR_6->otherend_id);
   goto fail;
  } else
   VAR_9[VAR_15] = VAR_13[VAR_15].handle;
 }

 return VAR_2;

 fail:
 for (VAR_15 = VAR_16 = 0; VAR_15 < VAR_8; VAR_15++) {
  if (VAR_9[VAR_15] != VAR_4) {
   FUNC_5(&VAR_14[VAR_16], 0, sizeof(VAR_14[VAR_16]));
   FUNC_4(&VAR_14[VAR_16], (phys_addr_t)VAR_10[VAR_15],
         VAR_1, VAR_9[VAR_15]);
   VAR_16++;
  }
 }

 if (FUNC_1(VAR_3, VAR_14, VAR_16))
  FUNC_0();

 *VAR_12 = 0;
 for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++) {
  if (VAR_14[VAR_15].status != VAR_2) {
   *VAR_12 = 1;
   break;
  }
 }

 return VAR_17;
}

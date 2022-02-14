
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int dummy; } ;
struct gnttab_unmap_grant_ref {int status; } ;
typedef int grant_handle_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,struct gnttab_unmap_grant_ref*,int) ;
 int VAR_4 ;
 int FUNC_2 (struct gnttab_unmap_grant_ref*,unsigned long,int ,int ) ;
 int FUNC_3 (struct xenbus_device*,int,char*,int ,int) ;

int FUNC_4(struct xenbus_device *VAR_5,
        grant_handle_t *VAR_6, unsigned int VAR_7,
        unsigned long *VAR_8)
{
 struct gnttab_unmap_grant_ref VAR_9[VAR_4];
 int VAR_10;
 int VAR_11;

 if (VAR_7 > VAR_4)
  return -VAR_0;

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
  FUNC_2(&VAR_9[VAR_10], VAR_8[VAR_10],
        VAR_1, VAR_6[VAR_10]);

 if (FUNC_1(VAR_3, VAR_9, VAR_10))
  FUNC_0();

 VAR_11 = VAR_2;
 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  if (VAR_9[VAR_10].status != VAR_2) {
   FUNC_3(VAR_5, VAR_9[VAR_10].status,
      "unmapping page at handle %d error %d",
      VAR_6[VAR_10], VAR_9[VAR_10].status);
   VAR_11 = VAR_9[VAR_10].status;
   break;
  }
 }

 return VAR_11;
}

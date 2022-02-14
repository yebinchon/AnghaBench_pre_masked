
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct wl1271 {int dummy; } ;
struct acx_header {void* len; void* id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (int ,char*,size_t) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct wl1271*,int ,struct acx_header*,size_t,int ,unsigned long) ;

int FUNC_5(struct wl1271 *VAR_3, u16 VAR_4, void *VAR_5,
      size_t VAR_6, unsigned long VAR_7)
{
 struct acx_header *VAR_8 = VAR_5;
 int VAR_9;

 FUNC_2(VAR_1, "cmd configure (%d)", VAR_4);

 if (FUNC_0(VAR_6 < sizeof(*VAR_8)))
  return -VAR_2;

 VAR_8->id = FUNC_1(VAR_4);


 VAR_8->len = FUNC_1(VAR_6 - sizeof(*VAR_8));

 VAR_9 = FUNC_4(VAR_3, VAR_0, VAR_8, VAR_6, 0,
           VAR_7);
 if (VAR_9 < 0) {
  FUNC_3("CONFIGURE command NOK");
  return VAR_9;
 }

 return VAR_9;
}

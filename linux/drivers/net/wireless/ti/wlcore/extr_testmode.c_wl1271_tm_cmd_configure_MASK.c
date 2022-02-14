
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wl1271_command {int dummy; } ;
struct wl1271 {int mutex; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct wl1271*,int ,void*,int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static int FUNC_8(struct wl1271 *VAR_5, struct nlattr *VAR_6[])
{
 int VAR_7, VAR_8;
 void *VAR_9;
 u8 VAR_10;

 FUNC_6(VAR_0, "testmode cmd configure");

 if (!VAR_6[VAR_3])
  return -VAR_1;
 if (!VAR_6[VAR_4])
  return -VAR_1;

 VAR_10 = FUNC_3(VAR_6[VAR_4]);
 VAR_9 = FUNC_2(VAR_6[VAR_3]);
 VAR_7 = FUNC_4(VAR_6[VAR_3]);

 if (VAR_7 > sizeof(struct wl1271_command))
  return -VAR_2;

 FUNC_0(&VAR_5->mutex);
 VAR_8 = FUNC_5(VAR_5, VAR_10, VAR_9, VAR_7);
 FUNC_1(&VAR_5->mutex);

 if (VAR_8 < 0) {
  FUNC_7("testmode cmd configure failed: %d", VAR_8);
  return VAR_8;
 }

 return 0;
}
